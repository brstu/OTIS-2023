#include "graph.h"
#include <cassert>
#include <queue>
#include <QSet>



// graph.cpp

int Graph::addVertexPro(const QPoint& p) {
    for(int i = 0; i < _hasEdge.size(); ++i)
        _hasEdge[i].push_back(0);

    _hasEdge.push_back(QVector<int>(_hasEdge.size() + 1, 0));
    _coordinates.push_back(p);
    _vertexColors.push_back(Qt::black);
    _vertexNames.push_back(QString::number(_hasEdge.size() - 1));

    return _hasEdge.size() - 1;
}

QColor Graph::getVertexColor(int vertexIndex) const {
    assert(0 <= vertexIndex && vertexIndex < _vertexColors.size());
    return _vertexColors[vertexIndex];
}

QString Graph::getVertexName(int vertexIndex) const {
    assert(0 <= vertexIndex && vertexIndex < _vertexNames.size());
    return _vertexNames[vertexIndex];
}

void Graph::setVertexColor(int vertexIndex, const QColor &color) {
    assert(0 <= vertexIndex && vertexIndex < _vertexColors.size());
    _vertexColors[vertexIndex] = color;
}

void Graph::setVertexName(int vertexIndex, const QString &name) {
    assert(0 <= vertexIndex && vertexIndex < _vertexNames.size());
    _vertexNames[vertexIndex] = name;
}





int getSquaredDist(const QPoint& p) {
  return p.x()*p.x() + p.y()*p.y();
}


int Graph::getCountOfVerteces() const {
  return _coordinates.size();
}


int Graph::getCountOfEdges() const {
  int n = getCountOfVerteces();
  int k = 0;
  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n; ++j)
      if (_hasEdge[i][j])
        ++k;
  return k/2;
}


QPoint Graph::getCoordinatesOfVertex(int v) const {
  assert(0 <= v && v < _coordinates.size());
  return _coordinates[v];
}


int Graph::findClosest(const QPoint& p, int maxSquaredDistPermitted) const {
  int n = _coordinates.size();
  if (n == 0) return -1;

  int res = 0;
  for(int i = 1; i < n; ++i) {
    if (getSquaredDist(_coordinates[i] - p) <
        getSquaredDist(_coordinates[res] - p)) {
      res = i;
    }
  }
  if (maxSquaredDistPermitted == -1 ||
      getSquaredDist(_coordinates[res] - p) <= maxSquaredDistPermitted) return res;
  return -1;
}

int Graph::findClosestExcluded(const QPoint& p,
                               int excluded,
                               int maxSquaredDistPermitted) const {
  int n = _coordinates.size();
  if (n == 0) return -1;

  int res = -1;
  for(int i = 0; i < n; ++i) if (i != excluded) {
    if (res == -1 || getSquaredDist(_coordinates[i] - p) <
                     getSquaredDist(_coordinates[res] - p)) {
      res = i;
    }
  }
  if (res == -1 || maxSquaredDistPermitted == -1 ||
      getSquaredDist(_coordinates[res] - p) <= maxSquaredDistPermitted) return res;
  return -1;
}


QPoint Graph::findNearestFreePosition(const QPoint& p, int excluded, int maxSquaredDistPermitted) const {
  std::priority_queue<QPair<int, QPair<int, int> > > q;
  QPoint d[4] = {QPoint(0, 1), QPoint(1, 0), QPoint(0, -1), QPoint(-1, 0)};
  QSet<QPair<int, int> > was;

  q.push(qMakePair(0, qMakePair(p.x(), p.y())));
  was.insert(qMakePair(p.x(), p.y()));
  while(!q.empty()) {
    QPoint cur(q.top().second.first, q.top().second.second);
    q.pop();
    bool good = true;
    for(int i = 0; i < _coordinates.size(); ++i) {
      if (i != excluded && getSquaredDist(cur - _coordinates[i]) <= maxSquaredDistPermitted) {
        good = false;
        break;
      }
    }
    if (good) return cur;
    for(int i = 0; i < 4; ++i) {
      QPoint newPoint = cur + d[i];
      if (!was.contains(qMakePair(newPoint.x(), newPoint.y()))) {
        q.push(qMakePair(-getSquaredDist(p - newPoint), qMakePair(newPoint.x(), newPoint.y())));
        was.insert(qMakePair(newPoint.x(), newPoint.y()));
      }
    }
  }
  throw;
}


QVector<QPair<int, int> > Graph::getAllEdges() const {
  QVector<QPair<int, int> > res;
  int n = getCountOfVerteces();
  for(int i = 0; i < n; ++i)
    for(int j = 0; j < n; ++j)
      if (_hasEdge[i][j])
        res.push_back(qMakePair(i, j));
  return res;
}


void Graph::addEdge(int v, int to, int w) {
  assert(0 <= v && v < _hasEdge.size());
  assert(0 <= to && to < _hasEdge.size());
  assert(v != to);
  assert(!_hasEdge[v][to]);
  _hasEdge[v][to] = w;
  _hasEdge[to][v] = w;
}


void Graph::removeEdge(int v, int to) {
  assert(0 <= v && v < _hasEdge.size());
  assert(0 <= to && to < _hasEdge.size());
  assert(v != to);
  assert(_hasEdge[v][to]);
  _hasEdge[v][to] = 0;
  _hasEdge[to][v] = 0;
}


int Graph::getEdgeWeight(int v, int to) {
  assert(0 <= v && v < _hasEdge.size());
  assert(0 <= to && to < _hasEdge.size());
  assert(v != to);
  return _hasEdge[v][to];
}


int Graph::addVertex(const QPoint& p) {
  for(int i = 0; i < _hasEdge.size(); ++i)
    _hasEdge[i].push_back(0);

  _hasEdge.push_back(QVector<int>(_hasEdge.size() + 1, 0));
  _coordinates.push_back(p);
  return _hasEdge.size() - 1;
}


void Graph::setCoordinatesForVertex(int v, QPoint p) {
  assert(0 <= v && v < _coordinates.size());
  _coordinates[v] = p;
}


QList<int> Graph::getConnectionPoints() const {
  int n = _hasEdge.size();

  QVector<bool> used(n, false);
  QVector<int> t(n);
  QVector<int> up(n);
  QVector<bool> isConnectionPoint(n, false);
  for(int v = 0; v < n; ++v) {
    if (!used[v]) {
      int T = 0;      
      dfsConnectionPoints(v, -1, T, used, isConnectionPoint, t, up);
    }
  }  

  QList<int> res;
  for(int v = 0; v < n; ++v)
    if (isConnectionPoint[v])
      res.push_back(v);

  return res;
}


void Graph::dfsConnectionPoints(int v, int p, int& T, QVector<bool>& used, QVector<bool>& isConnectionPoint, QVector<int>& t, QVector<int>& up) const {
  assert(!used[v]);
  up[v] = t[v] = ++T;
  used[v] = true;
  int n = used.size();
  int k = 0;
  for(int to = 0; to < n; ++to) if (_hasEdge[v][to] && to != p) {
    if (used[to]) {
      if (up[v] > t[to]) up[v] = t[to];
    } else {
      dfsConnectionPoints(to, v, T, used, isConnectionPoint, t, up);
      ++k;

      if (up[v] > up[to]) up[v] = up[to];
      if (p != -1 && up[to] >= t[v]) isConnectionPoint[v] = true;
    }
  }
  if (p == -1 && k > 1) isConnectionPoint[v] = true;
}


QList<QList<int> > Graph::getAllPathsNotLonger(int a, int b, int totalLength) const {
  QList<QList<int> > list;
  int n = getCountOfVerteces();
  QList<int> currentList;
  QVector<bool> used(n, false);
  dfsFindWayTo(a, b, totalLength, used, list, currentList);
  return list;
}


void Graph::dfsFindWayTo(int v, int destination, int maxLengthLeft, QVector<bool>& used, QList<QList<int> >& resultList, QList<int>& currentList) const {
  currentList.push_back(v);
  used[v] = true;
  if (v == destination) {
    resultList.push_back(currentList);
  } else {
    int n = getCountOfVerteces();
    for(int to = 0; to < n; ++to) {
      if (_hasEdge[v][to] && !used[to] && maxLengthLeft >= _hasEdge[v][to]) {
        dfsFindWayTo(to, destination, maxLengthLeft - _hasEdge[v][to], used, resultList, currentList);
      }
    }
  }
  currentList.pop_back();
  used[v] = false;
}
