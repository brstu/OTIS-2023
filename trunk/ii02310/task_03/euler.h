#ifndef EULER_H
#define EULER_H
#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include "mainwindow.h"
#include "Qstring"

using namespace std;

class Graph {
    int numvert;
    list<int>* adjLists;
    bool* visited;

public:
    Graph(int V);
    void addEdge(int src, int dest);
    void DFS(int vertex, bool visited[]);
    bool is_eularian();
    void findcycle(int V, vector<int>& way);
    void showcycle();
};

Graph::Graph(int V)
{
    numvert = V;
    adjLists = new list<int>[V];
    visited = new bool[V];
}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

void Graph::DFS(int vertex, bool visited[]) // deep search
{
    visited[vertex] = true;
    list<int>::iterator i;
    for (i = adjLists[vertex].begin(); i != adjLists[vertex].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited);
}

bool Graph::is_eularian()
{
    int num = 0;
    for (int i = 0; i < numvert; i++) {
        if (adjLists[i].size() == 0) return false;
        if (adjLists[i].size() % 2 != 0) num++;
    }
    if (num == 0) return true; else return false;
}

void Graph::findcycle(int V, vector<int>& way) {
    while (!adjLists[V].empty()) {
        int u = adjLists[V].front();
        for (auto i = adjLists[V].begin(); i != adjLists[V].end(); ++i) {
            if (*i == u) {
                adjLists[V].erase(i);
                break;
            }
        }
        for (auto i = adjLists[u].begin(); i != adjLists[u].end(); ++i) {
            if (*i == V) {
                adjLists[u].erase(i);
                break;
            }
        }
        findcycle(u, way);
    }
    way.push_back(V);
}


void Graph::showcycle()
{
    ifstream inp("graph.txt");
    if (inp.is_open()) {
        Graph g(0); // Создание объекта класса Graph с временным значением 0 для numV
        MainWindow window;
        window.updateVertices();
        window.updateEdges();

        int numV = window.getNumberOfVertices();
        int numAdj = window.getNumberOfEdges();

        g = Graph(numV);

        for (int i = 0; i < numAdj; i++) {
            int a, b;
            inp >> a >> b;
            g.addEdge(a, b);
        }
    }
    else cout << "file not found";
}
#endif // EULER_H
