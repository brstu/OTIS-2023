#include <iostream>
#include <iomanip>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <set>

#define INT_MAX 2147483647

using VEC1 = std::vector<int>;
using VEC2 = std::vector<VEC1>;

class stack
{
private:
    VEC1 array;
    int head = -1;
public:
    // Pushes an element to the top of the stack
    void push(int x) 
    {
        head++;
        array.push_back(x);
    }

    // Removes the top element of the stack
    void pop()
    {
        head--;
        array.pop_back();        
    }

    // Returns the top element of the stack
    int front()
    {
        return array[head];
    }

    // Returns true if the stack is empty
    bool is_empty()
    {
        return head == -1;
    }

    // Prints the stack
    void print()
    {
        int l = array.size();
        for (int i = 0; i < l; i++)
        {
            std::cout << array[i];
        }
        std::cout << std::endl;
    }
    
    // [] operator overloading
    int operator[](int i)
    {
        return array[array.size() - i - 1];
    }
};

class queue
{
private:
    VEC1 array;
    int tail = 0; 
public:
    // Pushes an element to the end of the queue
    void push(int x) 
    {
        array.push_back(x);
        tail++;
    }

    // Removes the first element of the queue
    void pop() 
    {
        array.erase(array.cbegin());
        tail--;
    }

    // Returns the first element of the queue
    int front()
    {
        return array[0];
    }

    // Returns true if the queue is empty
    bool is_empty() 
    {
        return tail == 0;
    }

    // Prints the queue
    void print()
    {
        int l = array.size();
        for (int i = 0; i < l; i++)
        {
            std::cout << array[i];
        }
        std::cout << std::endl;
    }

    // swap two elements in the queue
    void swap(int i, int j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // [] operator overloading
    int operator[](int i)
    {
        return array[i];
    }
};

class alg
{
public:
    // Breadth-first search
    void BFS(VEC2 &adjacencyMatrix, VEC1 &visited, int start=0)
    {
        int max_node = adjacencyMatrix.size();
        queue q;
        q.push(start);
        while (!q.is_empty())
        {
            int v = q.front();
            q.pop();
            if (!visited[v])
            {
                visited[v] = 1;
                for (int i = 0; i < max_node; i++)
                {
                    if (adjacencyMatrix[v][i] && !visited[i])
                    {
                        q.push(i);
                    }
                }
            }
        }
    }

    // Depth-first search
    void DFS(VEC2 &adjacencyMatrix, VEC1 &visited, int start=0)
    {
        int max_node = adjacencyMatrix.size();
        stack s;
        s.push(start);
        while (!s.is_empty())
        {
            int v = s.front();
            s.pop();
            if (!visited[v])
            {
                visited[v] = 1;
                for (int i = 0; i < max_node; i++)
                {
                    if (adjacencyMatrix[v][i] && !visited[i])
                    {
                        s.push(i);
                    }
                }
            }
        }
    }

    bool hasCycle(const VEC2& adjacencyMatrix, VEC1& visited, int current, int parent) {
        visited[current] = 1;

        for (int neighbor = 0; neighbor < adjacencyMatrix.size(); ++neighbor) {
            if (adjacencyMatrix[current][neighbor]) {
                if (!visited[neighbor]) {
                    if (hasCycle(adjacencyMatrix, visited, neighbor, current)) {
                        return true;
                    }
                } else if (neighbor != parent) {
                    // If the neighbor is visited and not the parent, then a cycle is found
                    return true;
                }
            }
        }

        return false;
    }

    bool isEulerian(VEC2& adjacencyMatrix) {
        int numNodes = adjacencyMatrix.size();

        // Check if the graph is connected
        VEC1 visited(numNodes, 0);

        DFS(adjacencyMatrix, visited, 0);

        for (int i = 0; i < numNodes; ++i) {
            if (!visited[i]) {
                // The graph is not connected
                return false;
            }
        }

        // Count vertices with odd degree
        int oddDegreeCount = 0;
        for (int i = 0; i < numNodes; ++i) {
            int degree = 0;
            for (int j = 0; j < numNodes; ++j) {
                degree += adjacencyMatrix[i][j];
            }

            if (degree % 2 != 0) {
                ++oddDegreeCount;
            }
        }

        // Check Eulerian circuit or path conditions
        if (oddDegreeCount == 0 || oddDegreeCount == 2) {
            return true;
        } else {
            return false;
        }
    }

    bool isOrEulerian(VEC2& adjacencyMatrix) {
        int numNodes = adjacencyMatrix.size();

        // Check if the graph is strongly connected
        VEC1 visited(numNodes, 0);
        DFS(adjacencyMatrix, visited, 0);

        for (int i = 0; i < numNodes; ++i) {
            if (!visited[i]) {
                // The graph is not strongly connected
                return false;
            }
        }

        // Check in-degrees and out-degrees
        VEC1 inDegree(numNodes, 0);
        VEC1 outDegree(numNodes, 0);

        for (int i = 0; i < numNodes; ++i) {
            for (int j = 0; j < numNodes; ++j) {
                outDegree[i] += adjacencyMatrix[i][j];
                inDegree[j] += adjacencyMatrix[i][j];
            }
        }

        // Count vertices with unequal in-degrees and out-degrees
        int unequalDegrees = 0;
        for (int i = 0; i < numNodes; ++i) {
            if (inDegree[i] != outDegree[i]) {
                ++unequalDegrees;
            }
        }

        // Check Eulerian circuit or path conditions
        if (unequalDegrees == 0 || (unequalDegrees == 2 && inDegree[0] == outDegree[0] + 1 && outDegree[0] == inDegree[0] + 1)) {
            return true;
        } else {
            return false;
        }
    }


    // Find count of connected components by Breadth-first search
    int conCompBFS(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        int count = 0;
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            visited[i] = 0;
        }
        for (int i = 0; i < max_node; i++)
        {
            if (!visited[i])
            {
                BFS(adjacencyMatrix, visited, i);
                count++;
            }
        }
        return count;
    }

    // Find count of connected components by Depth-first search
    int conCompDFS(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        int count = 0;
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            visited[i] = 0;
        }
        for (int i = 0; i < max_node; i++)
        {
            if (!visited[i])
            {
                DFS(adjacencyMatrix, visited, i);
                count++;
            }
        }
        return count;
    }


    // Find Eulerian Cycle
    VEC1 findEulerianCycle(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC1 cycle;
        int start = 0;
        stack s;
        s.push(start);
        while (!s.is_empty())
        {
            start = s.front();
            bool found_edge = false;
            for (int i = 0; i < max_node; i++)
            {
                if (adjacencyMatrix[start][i])
                {
                    s.push(i);
                    adjacencyMatrix[start][i] = 0;
                    adjacencyMatrix[i][start] = 0;
                    found_edge = true;
                    break;
                }
            }
            if (!found_edge)
            {
                s.pop();
                cycle.push_back(start);
            }
        }
        return cycle;
    }
    bool hasHamiltonianCycle(const VEC2& adjacencyMatrix) {
        int numVertices = adjacencyMatrix.size();

        // Check degree condition
        for (int i = 0; i < numVertices; ++i) {
            int degree = 0;
            for (int j = 0; j < numVertices; ++j) {
                degree += adjacencyMatrix[i][j];
            }

            if (degree < 2) {
                return false;  // Vertex with degree less than 2, no Hamiltonian cycle possible
            }
        }

        // Graph is connected (you may need to implement a connectivity check here)

        return true;
    }

    int bfsEccentricity(const VEC2& adjacencyMatrix, int source) {
        int numVertices = adjacencyMatrix.size();
        VEC1 distance(numVertices, INT_MAX);

        queue q;
        q.push(source);
        distance[source] = 0;

        while (!q.is_empty()) {
            int current = q.front();
            q.pop();

            for (int neighbor = 0; neighbor < numVertices; ++neighbor) {
                if (adjacencyMatrix[current][neighbor] && distance[neighbor] == INT_MAX) {
                    distance[neighbor] = distance[current] + 1;
                    q.push(neighbor);
                }
            }
        }

        // Find the maximum distance (eccentricity)
        int maxDistance = 0;
        for (int i = 0; i < numVertices; ++i) {
            if (distance[i] > maxDistance) {
                maxDistance = distance[i];
            }
        }

        return maxDistance;
    }

    // Function to calculate the diameter, radius, and center of the graph
    std::string calculateGraphParameters(const VEC2& adjacencyMatrix) {
        int numVertices = adjacencyMatrix.size();

        int diameter = 0;
        int radius = INT_MAX; // Initialize radius to infinity

        for (int i = 0; i < numVertices; ++i) {
            int eccentricity = bfsEccentricity(adjacencyMatrix, i);

            // Update diameter and radius
            if (eccentricity > diameter) {
                diameter = eccentricity;
            }
            if (eccentricity < radius) {
                radius = eccentricity;
            }
        }
        std::string a;
        a = a + "Diameter: " + std::to_string(diameter) + "\n";
        a = a + "Radius: " + std::to_string(radius) + "\n";
        a += "Center(s): ";
        for (int i = 0; i < numVertices; ++i) {
            if (bfsEccentricity(adjacencyMatrix, i) == radius) {
                a = a + std::to_string(i)+ " ";
            }
        }
        return a;
    }

    // Find Hamiltonian Cycle
    queue findHamiltonianCycle(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        queue q;
        for (int i = 0; i < max_node; i++)
        {
            q.push(i);
        }
        int i;
        for (int k = 0; k < max_node * (max_node - 1); k++)
        {
            if (adjacencyMatrix[q[0]][q[1]] != 1)
            {
                i = 1;
                while (adjacencyMatrix[q[0]][q[i]] != 1 || adjacencyMatrix[q[1]][q[i + 1]] != 1) 
                {
                    i++;
                }
                for (int j = 0; 1 + j < i - j; j++)
                {
                    q.swap(1 + j, i - j);
                }
            }

            q.push(q.front());
            q.pop();
        }
        return q;
    }

    // Dejkstra algorithm which returns length of the path from start to each other node
    VEC1 Dejkstra(VEC2 &adjacencyMatrix, int start, VEC1 &path)
    {
        int max_node = adjacencyMatrix.size();
        VEC1 distance(max_node);
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            distance[i] = INT_MAX;
            visited[i] = 0;
        }
        distance[start] = 0;
        for (int i = 0; i < max_node; i++)
        {
            int min = INT_MAX;
            int min_index = 0;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0 && distance[j] <= min)
                {
                    min = distance[j];
                    min_index = j;
                }
            }
            visited[min_index] = 1;
            
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0
                    && adjacencyMatrix[min_index][j] != 0 
                    && distance[min_index] != INT_MAX 
                    && distance[min_index] + adjacencyMatrix[min_index][j] < distance[j])
                {
                    distance[j] = distance[min_index] + adjacencyMatrix[min_index][j];
                    path[j] = min_index;
                }
            }
        }

        path[start] = start;
        return distance;
    }

    // Find the path in vector from Dejkstra algorithm
    void thisIsTheWay(VEC1 &path, int start, int end, VEC1 &way)
    {
        do
        {
            way.push_back(end);
            end = path[end];
        }  
        while (end != start);
        way.push_back(start);

        int n = way.size();
        for (int i = 0; i < n / 2; i++)
        {
            std::swap(way[i], way[n - 1 - i]);
        } 
    }
    
    // Floyd-Warshall algorithm which returns length of the path from each node to each node
    VEC2 FloydWarshall(VEC2 &adjacencyMatrix, VEC2 &path)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 distance(max_node, VEC1(max_node));
        for (int i = 0; i < max_node; i++)
        {
            for (int j = 0; j < max_node; j++)
            {   
                if (adjacencyMatrix[i][j] == 0 && i != j)
                {
                    distance[i][j] = INT_MAX;
                }
                else
                {
                    distance[i][j] = adjacencyMatrix[i][j];
                }
            }
        }
        
        for (int k = 0; k < max_node; k++) 
        {
            for (int i = 0; i < max_node; i++)
            {
                for (int j = 0; j < max_node; j++)
                {
                    if (distance[i][k] != INT_MAX 
                        && distance[k][j] != INT_MAX 
                        && distance[i][k] + distance[k][j] < distance[i][j])
                    {
                        distance[i][j] = distance[i][k] + distance[k][j];
                        path[i][j] = k;
                    }
                }
            }
        }

        for (int i = 0; i < max_node; i++)
        {
            path[i][i] = i;
        }
        for (int i = 0; i < max_node; i++)
        {
            for (int j = 0; j < max_node; j++)
            {
                if (path[i][j] == 0)
                {
                    path[i][j] = i;
                }
            }  
        }
        return distance;
    }

    // Find the path in vector from Floyd-Warshall algorithm 
    void thisIsTheWay(VEC2 &path, int start, int end, VEC1 &way)
    {
        do
        {
            way.push_back(end);
            end = path[start][end];
        }  
        while (end != start);
        way.push_back(start);

        int n = way.size();
        for (int i = 0; i < n / 2; i++)
        {
            std::swap(way[i], way[n - 1 - i]);
        }
    }

    // Prim algorithm which returns adjancy matrix of the tree
    VEC2 Prim(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 tree(max_node, VEC1(max_node));
        VEC1 key(max_node);
        VEC1 parent(max_node);
        VEC1 visited(max_node);
        for (int i = 0; i < max_node; i++)
        {
            key[i] = INT_MAX;
            visited[i] = 0;
        }
        key[0] = 0;
        parent[0] = -1;
        for (int i = 0; i < max_node - 1; i++)
        {
            int min = INT_MAX;
            int min_index = 0;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0 && key[j] < min)
                {
                    min = key[j];
                    min_index = j;
                }
            }
            visited[min_index] = 1;
            for (int j = 0; j < max_node; j++)
            {
                if (visited[j] == 0 
                    && adjacencyMatrix[min_index][j] 
                    && adjacencyMatrix[min_index][j] < key[j])
                {
                    parent[j] = min_index;
                    key[j] = adjacencyMatrix[min_index][j];
                }
            }
        }
        for (int i = 1; i < max_node; i++)
        {
            tree[i][parent[i]] = adjacencyMatrix[i][parent[i]];
            tree[parent[i]][i] = adjacencyMatrix[i][parent[i]];
        }
        return tree;
    }

    // Prim algorithm which returns adjancy matrix of the tree
    VEC2 Kruskal(VEC2 &adjacencyMatrix)
    {
        int max_node = adjacencyMatrix.size();
        VEC2 tree(max_node, VEC1(max_node));
        std::set<std::set<int>> nodes;
    	VEC2 edges;
        for (int i = 0; i < max_node; i++)
        {
            for (int j = i + 1; j < max_node; j++)
            {
                if (adjacencyMatrix[i][j])
                {
                    edges.push_back({ adjacencyMatrix[i][j], i, j });
                }
            }
        }
        std::sort(edges.begin(), edges.end());

        for (int i = 0; i < max_node; i++)
        {
            nodes.insert(std::set<int>{i});
        }

        for (int i = 0; i < edges.size(); i++)
        {
            std::set<int> node1;
            std::set<int> node2;
            for (auto it = nodes.begin(); it != nodes.end(); it++)
            {
                if (it->find(edges[i][1]) != it->end())
                {
                    node1 = *it;
                }
                if (it->find(edges[i][2]) != it->end())
                {
                    node2 = *it;
                }
            }
            if (node1 != node2)
            {
                nodes.erase(node1);
                nodes.erase(node2);
                node1.insert(node2.begin(), node2.end());
                nodes.insert(node1);
                tree[edges[i][1]][edges[i][2]] = edges[i][0];
                tree[edges[i][2]][edges[i][1]] = edges[i][0];
            }
        } 
        return tree;
    }

};
