#ifndef EULER_H
#define EULER_H
#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include "mainwindow.h"
#include "Qstring"

using namespace std;

class Grph {
    int numverts;
    list<int>* adjList;
    bool* visit;

public:
    Grph(int V);
    void addEdge(int src, int dest);
    void DFS(int vertex, bool visited[]);
    bool is_eularian();
    void findcycle(int V, vector<int>& way);
    void showcycle();
};

Grph::Grph(int V)
{
    numverts = V;
    adjList = new list<int>[V];
    visit = new bool[V];
}

void Grph::addEdge(int src, int dest)
{
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

void Grph::DFS(int vertex, bool visited[]) // deep search
{
    visited[vertex] = true;
    list<int>::iterator i;
    for (i = adjList[vertex].begin(); i != adjList[vertex].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited);
}

bool Grph::is_eularian()
{
    int num = 0;
    for (int i = 0; i < numverts; i++) {
        if (adjList[i].size() == 0) return false;
        if (adjList[i].size() % 2 != 0) num++;
    }
    if (num == 0) return true; else return false;
}

void Grph::findcycle(int V, vector<int>& way) {
    while (!adjList[V].empty()) {
        int u = adjList[V].front();
        for (auto i = adjList[V].begin(); i != adjList[V].end(); ++i) {
            if (*i == u) {
                adjList[V].erase(i);
                break;
            }
        }
        for (auto i = adjList[u].begin(); i != adjList[u].end(); ++i) {
            if (*i == V) {
                adjList[u].erase(i);
                break;
            }
        }
        findcycle(u, way);
    }
    way.push_back(V);
}


void Grph::showcycle()
{
    ifstream inp("graph.txt");
    if (inp.is_open()) {
        Grph g(0); // Создание объекта класса Graph с временным значением 0 для numV
        MainWindow window;
        window.updateVershins();
        window.updateRebro();

        int numV = window.getNumOfVertices();
        int numAdj = window.getNumOfEdges();

        g = Grph(numV);

        for (int i = 0; i < numAdj; i++) {
            int a, b;
            inp >> a >> b;
            g.addEdge(a, b);
        }
    }
    else cout << "file not found";
}
#endif // EULER_H
