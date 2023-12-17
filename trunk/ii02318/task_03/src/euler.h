#ifndef EULER_H
#define EULER_H
#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include "mainwindow.h"
#include "Qstring"

using namespace std;

class Graphh {
    int nverts;
    list<int>* aList;
    bool* visit;

public:
    Graphh(int V);
    void addEdgge(int src, int dest);
    void DFS(int vertex, bool visited[]);
    bool is_eularian();
    void fcycle(int V, vector<int>& way);
    void shcycle();
};

Graphh::Graphh(int V)
{
    nverts = V;
    aList = new list<int>[V];
    visit = new bool[V];
}

void Graphh::addEdgge(int src, int dest)
{
    aList[src].push_back(dest);
    aList[dest].push_back(src);
}

void Graphh::DFS(int vertex, bool visited[]) // deep search
{
    visited[vertex] = true;
    list<int>::iterator i;
    for (i = aList[vertex].begin(); i != aList[vertex].end(); ++i)
        if (!visited[*i])
            DFS(*i, visited);
}

bool Graphh::is_eularian()
{
    int num = 0;
    for (int i = 0; i < nverts; i++) {
        if (aList[i].size() == 0) return false;
        if (aList[i].size() % 2 != 0) num++;
    }
    if (num == 0) return true; else return false;
}

void Graphh::fcycle(int V, vector<int>& way) {
    while (!aList[V].empty()) {
        int u = aList[V].front();
        for (auto i = aList[V].begin(); i != aList[V].end(); ++i) {
            if (*i == u) {
                aList[V].erase(i);
                break;
            }
        }
        for (auto i = aList[u].begin(); i != aList[u].end(); ++i) {
            if (*i == V) {
                aList[u].erase(i);
                break;
            }
        }
        fcycle(u, way);
    }
    way.push_back(V);
}


void Graphh::shcycle()
{
    ifstream inp("graph.txt");
    if (inp.is_open()) {
        Graphh g(0); // Создание объекта класса Graph с временным значением 0 для numV
        MainWindow window;
        window.updateVertexx();
        window.updateEdgge();

        int numV = window.getNumOfVertexx();
        int numAdj = window.getNumOfEdgges();

        g = Graphh(numV);

        for (int i = 0; i < numAdj; i++) {
            int a, b;
            inp >> a >> b;
            g.addEdgge(a, b);
        }
    }
    else cout << "file not found";
}
#endif // EULER_H
