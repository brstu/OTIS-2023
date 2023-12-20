#ifndef MY_EULER_H
#define MY_EULER_H

#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include "my_mainwindow.h"
#include "Qstring"

using namespace std;

class MyGraph {
    int numberOfVertices;
    list<int>* adjacencyLists;
    bool* visited;

public:
    MyGraph(int vertices);
    void addEdge(int source, int destination);
    void depthFirstSearch(int vertex, bool visited[]);
    bool isEulerian();
    void findCycle(int vertex, vector<int>& cycle);
    void showCycle();
};

MyGraph::MyGraph(int vertices)
{
    numberOfVertices = vertices;
    adjacencyLists = new list<int>[vertices];
    visited = new bool[vertices];
}

void MyGraph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);
    adjacencyLists[destination].push_back(source);
}

void MyGraph::depthFirstSearch(int vertex, bool visited[])
{
    visited[vertex] = true;
    list<int>::iterator i;
    for (i = adjacencyLists[vertex].begin(); i != adjacencyLists[vertex].end(); ++i)
        if (!visited[*i])
            depthFirstSearch(*i, visited);
}

bool MyGraph::isEulerian()
{
    int oddDegreeCount = 0;
    for (int i = 0; i < numberOfVertices; i++) {
        if (adjacencyLists[i].size() == 0) return false;
        if (adjacencyLists[i].size() % 2 != 0) oddDegreeCount++;
    }
    return (oddDegreeCount == 0);
}

void MyGraph::findCycle(int vertex, vector<int>& cycle)
{
    while (!adjacencyLists[vertex].empty()) {
        int u = adjacencyLists[vertex].front();
        for (auto i = adjacencyLists[vertex].begin(); i != adjacencyLists[vertex].end(); ++i) {
            if (*i == u) {
                adjacencyLists[vertex].erase(i);
                break;
            }
        }
        for (auto i = adjacencyLists[u].begin(); i != adjacencyLists[u].end(); ++i) {
            if (*i == vertex) {
                adjacencyLists[u].erase(i);
                break;
            }
        }
        findCycle(u, cycle);
    }
    cycle.push_back(vertex);
}

void MyGraph::showCycle()
{
    ifstream input("graph.txt");
    if (input.is_open()) {
        MyGraph graph(0); // Создание объекта класса MyGraph с временным значением 0 для numV
        MyMainWindow window;
        window.updateVertices();
        window.updateEdges();

        int numV = window.getNumberOfVertices();
        int numAdj = window.getNumberOfEdges();

        graph = MyGraph(numV);

        for (int i = 0; i < numAdj; i++) {
            int a, b;
            input >> a >> b;
            graph.addEdge(a, b);
        }
    }
    else cout << "file not found";
}

#endif // MY_EULER_H
