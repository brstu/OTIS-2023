#ifndef ALGORITM_H
#define ALGORITM_H
#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include "window.h"
#include "Qstring"

using namespace std;

class Gr {
    int numvert;
    list<int>* adjLists;
    bool* visited;

public:
    Gr(int V);
    void aE(int src, int dest);
    void DFS(int vertex, bool visited[]);
    bool ie();
    void fc(int V, vector<int>& way);
    void shc();
};

Gr::Gr(int V)
{
    numvert = V;
    adjLists = new list<int>[V];
    visited = new bool[V];
}

void Gr::aE(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

void Gr::DFS(int vertex, bool visited[]) // deep search
{
    visited[vertex] = true;
    list<int>::iterator i;
    for (i = adjLists[vertex].begin(); i != adjLists[vertex].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited);
}

bool Gr::ie()
{
    int num = 0;
    for (int i = 0; i < numvert; i++) {
        if (adjLists[i].size() == 0) return false;
        if (adjLists[i].size() % 2 != 0) num++;
    }
    if (num == 0) return true; else return false;
}

void Gr::fc(int V, vector<int>& way) {
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
        fc(u, way);
    }
    way.push_back(V);
}


void Gr::shc()
{
    ifstream inp("graph.txt");
    if (inp.is_open()) {
        Gr g(0);
        MainWindow window;
        window.uV();
        window.uE();

        int numV = window.gNOV();
        int numAdj = window.gNOE();

        g = Gr(numV);

        for (int i = 0; i < numAdj; i++) {
            int a, b;
            inp >> a >> b;
            g.aE(a, b);
        }
    }
    else cout << "error";
}
#endif // ALGORITM_H
