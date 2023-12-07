#ifndef GRAPH_H
#define GRAPH_H
#include <QVector>
#include <QPoint>
#include <QPair>

inline int getSquaredDist(const QPoint& p);

class Graph {
 public:
  Graph() {}

  int getCountOfVerteces() const;
  int getCountOfEdges() const;
  QPoint getCoordinatesOfVertex(int v) const;
  QVector<QPair<int, int> > getAllEdges() const;
  int findClosest(const QPoint& p, int maxSquaredDistPermitted = -1) const;
  int findClosestExcluded(const QPoint& p, int excluded, int maxSquaredDistPermitted = -1) const;
  QPoint findNearestFreePosition(const QPoint& p, int excluded, int maxSquaredDistPermitted) const;

  void addEdge(int v, int to, int w);
  void removeEdge(int v, int to);
  int getEdgeWeight(int v, int to);
  int addVertex(const QPoint& p);
  void setCoordinatesForVertex(int v, QPoint p);  

  QList<int> getConnectionPoints() const;
  QList<QList<int> > getAllPathsNotLonger(int a, int b, int totalLength) const;
private:
  void dfsConnectionPoints(int v, int p, int& T, QVector<bool>& used, QVector<bool>& isConnectionPoint, QVector<int>& t, QVector<int>& up) const;
  void dfsFindWayTo(int v, int destination, int maxLengthLeft, QVector<bool>& used, QList<QList<int> > &resultList, QList<int> &currentList) const;

  QVector<QVector<int> > _hasEdge;
  QVector<QPoint> _coordinates;  
};

#endif // GRAPH_H
