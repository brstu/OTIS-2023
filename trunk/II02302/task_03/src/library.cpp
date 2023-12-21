#include <iostream>
#include <queue>
#include <vector>
#include <fstream>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

const int inf = 10000;

void dfs(int** matrix, int vertexCount, int v, vector<bool>& used)//â ãëóáèíó
{
    cout << endl;
    stack<int> stack;
    stack.push(v);
    while (!stack.empty())
    {
        v = stack.top();
        stack.pop();
        if (used[v])
            continue;
        used[v] = true;
        cout << v + 1;
        for (int i = 0; i < vertexCount; i++)
            if (!used[i] && matrix[v][i])
                stack.push(i);
    }
}

void bfs(int** matrix, int vertexCount, int v, vector<bool>& used)//â øèðèíó
{
    cout << endl;
    queue<int> q;
    q.push(v);
    used[v] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u + 1 << " ";
        for (int i = 0; i < vertexCount; i++)
        {
            if (!used[i] && matrix[u][i])
            {
                q.push(i);
                used[i] = true;
            }
        }
    }
}

void Fill_Matrix(int**& matrix, int vertexCount, int edgesCount, string str)
{
    ifstream fin(str);
    for (int i = 0; i < vertexCount; i++)
        for (int j = 0; j < vertexCount; j++)
            matrix[i][j] = false;
    int buf1, buf;
    fin >> buf >> buf1;
    for (int i = 0; i < edgesCount; i++)
    {
        int a, b, c;
        fin >> a >> b >> c;
        cout << a << " -> " << b << endl;
        a--; b--;
        matrix[a][b] = c;
        //matrix[b][a] = c;
    }
}

void Paint_Matrix(int**& matrix, int vertexCount)
{
    for (int i = 0; i < vertexCount; i++)
    {
        for (int j = 0; j < vertexCount; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void Print_Path(int*& path, int vetexCount)
{
    for (int i = 0; i < vetexCount; i++)
        cout << path[i] + 1 << " ";
    cout << path[0] + 1;
}

bool Gamilton(int**& matrix, int*& path,int*& f, int vertexCount, int k, int v0)//íà÷àëüíàÿ âåðøèíà
{
    bool res = false;
    for (int i = 0; i < vertexCount; i++)
    {
        if (matrix[i][path[k - 1]])
        {
            if (k == vertexCount && i == v0)
                res = true;
            else
                if (f[i] == -1)
                {
                    f[i] = k;
                    path[k] = i;
                    res = Gamilton(matrix, path, f, vertexCount, k + 1, v0);
                    if (!res) f[i] = -1;
                }
        }
        else continue;
    }
    return res;
}

void Euler(int**& matrix, vector<int>& path, int vertexCount)//íà÷àëüíàÿ âåðøèíà
{
    int* degree = new int[vertexCount];
    for (int i = 0; i < vertexCount; i++)
        degree[i] = NULL;
    for (int i = 0; i < vertexCount; i++)
        for (int j = 0; j < vertexCount; j++)
            if (matrix[i][j])
                degree[i]++;
    stack <int> st;
    st.push(0);
    path.push_back(0);
    while (!st.empty())
    {
        int v = st.top();
        if (degree[v] == NULL)
        {
            st.pop();
            path.push_back(v);
        }
        else
        {
            for(int i = 0; i < vertexCount ;i++)
                if (matrix[v][i])
                {
                    matrix[v][i] = NULL;
                    matrix[i][v] = NULL;
                    degree[v]--;
                    degree[i]--;
                    st.push(i); 
                    break;
                }
        }
    }
}

void Dijkstra(int**& matrix, int vertexCount)
{
    for (int i = 0; i < vertexCount; i++)
        for (int j = 0; j < vertexCount; j++)
        {
            if (matrix[i][j] == NULL)
                matrix[i][j] = inf;
        }
    vector <int> dist(vertexCount, inf);
    vector <bool> used(vertexCount, false);
    vector <int> prev(vertexCount, -1);

    dist[0] = NULL;
    used[0] = true;
    prev[0] = NULL;

    for (int i = 0; i < vertexCount; i++)
        if (matrix[0][i] <= dist[i])
        {
            dist[i] = matrix[0][i];
            prev[i] = NULL;
        }

    for (int i = 0; i < vertexCount - 1; i++) 
    {
        int min = inf;
        for (int j = 0; j < dist.size(); j++)
            if (min > dist[j] && !used[j])
                min = j;
        int minDist = dist[min];
        used[min] = true;

        for (int j = 0; j < vertexCount; j++)
        {
            if (!used[j] && dist[j] > matrix[min][j] + minDist && minDist>0)
            {
                dist[j] = matrix[min][j] + minDist;
                prev[j] = min;
            }
        }
    }
    for (int i = 0; i < vertexCount; i++) {
        cout << i + 1 << "\t" << dist[i] << "\t" << prev[i] + 1 << endl;
    }

}

void Floyd(int**& matrix, int vertexCount)
{
    
    int** temp = matrix;
    for(int i = 0; i < vertexCount; i++)
        for (int j = 0; j < vertexCount; j++)
        {
            if (i == j) temp[i][j] = NULL;
            else if (matrix[i][j]) temp[i][j] = matrix[i][j];
            else temp[i][j] = inf;
        }
    for (int k = 0; k < vertexCount; k++)
        for (int i = 0; i < vertexCount; i++)
            for (int j = 0; j < vertexCount; j++)
                if (temp[i][j] > temp[i][k] + temp[k][j])
                    temp[i][j] = temp[i][k] + temp[k][j];
    for (int i = 0; i < vertexCount; i++)
    {
        for (int j = 0; j < vertexCount; j++)
            cout << temp[i][j] << "\t";
        cout << endl;
    }
}

void Prim(int**& matrix,int vertexCount)
{
    bool* selected = new bool[vertexCount];
    for (int i = 0; i < vertexCount; i++)
        selected[i] = false;
    selected[0] = true;
    int search = NULL;
    int column = 0, line = 0;
    int weight = NULL;
    while (search < vertexCount - 1)
    {
        int min = inf;
        for(int i = 0; i < vertexCount; i++)
            if(selected[i])
                for(int j = 0; j < vertexCount; j++)
                    if(!selected[j] && matrix[i][j])
                        if (min > matrix[i][j])
                        {
                            min = matrix[i][j];
                            line = i;
                            column = j;
                        }
        cout << line + 1 << " -> " << column + 1 << " = " << min;
        search++;
        weight += min;
        cout << endl;
        selected[column] = true;
    }
    cout << "Total weight is " << weight << endl;
}

int parent(int* root, int a)
{
    while (root[a] != a)
    {
        root[a] = root[root[a]];
        a = root[a];
    }
    return a;
}

void union_find(int* root, int a, int b)
{
    int d = parent(root, a);
    int e = parent(root, b);
    root[d] = root[e];
}

int Kruskal(pair<int, pair<int,int>>* p, int* root, int**& matrix, int vertexCount, int edgesCount)
{
    int mincost = NULL;

    for (int i = 0; i < edgesCount; i++)
    {
        int a = p[i].second.first;
        int b = p[i].second.second;
        int cost = p[i].first;
        if (parent(root, a) != parent(root, b))
        {
            mincost += cost;
            union_find(root, a, b);
            cout << a + 1 << " -> " << b + 1 << " " << cost << endl;
        }
    }
    return mincost;
}

void main_kruskal(int**& matrix, int vertexCount, int edgesCount, string str)
{
    pair<int, pair<int, int>> p[inf];
    int root[inf];
    int mincost;
    for (int i = 0; i < inf; i++)
        root[i] = i;
    ifstream fin(str);
    int buf1, buf2;
    fin >> buf1 >> buf2;
    for (int i = 0; i < edgesCount; i++)
    {
        int a, b, c;
        fin >> a >> b >> c;
        a--; b--;
        p[i] = make_pair(c, make_pair(a, b));
    }
    sort(p, p + edgesCount);
    mincost = Kruskal(p, root, matrix, vertexCount, edgesCount);
    cout << mincost << endl;
}

void f(vector<bool>& used, vector<int>& perm, vector<vector<int>>& transposition, int i, int& n)
{
    vector <int> res;
    while (!used[i])
    {
        res.push_back(perm[i]);
        used[i] = true;
        i = perm[i];
    }
    if (!res.empty())
    {
        cout << "( ";
        for (int i = 0; i < res.size() - 1; i++)
            cout << res[i] + 1  << " , ";

        cout << res.back() + 1 << " )";

        for (int i = 1; i < res.size(); i++)
        {
            transposition[n][0] = res[0] + 1;
            transposition[n][1] = res[i] + 1;
            n++;
        }
    }
}

void Permutation(string str)
{
    vector <int> perm(6);
    ifstream fin(str);
    for (int i = 0; i < 6; i++)
    {
        fin >> perm[i];
        perm[i]--;
    }
    for (int i = 0; i < 6; i++)
        cout << i + 1 << " ";
    cout << endl;
    for (int i = 0; i < 6; i++)
        cout << perm[i] + 1 << " ";

    cout << endl;
    int n = 0;
    vector<vector<int>> transposition(4,vector<int> (2));
    vector <bool> used(6);
    for(int i=0; i<6; i++)
        f(used, perm,transposition, i, n);
    cout << endl;
    for (int i = 0; i < transposition.size(); i++)
            cout <<"{ " << transposition[i][0] << " , " << transposition[i][1] << " } ";
    cout << endl;
    cout << "Degree of permutation is " << perm.size() << endl;
    int perm_degree = 0;
    for (int i = 0; i < perm.size(); i++)
        for (int j = i + 1; j < perm.size(); j++)
            if (perm[i] > perm[j])
                perm_degree++;
    cout << "Number of inversions is " << perm_degree << endl;
    if (perm_degree % 2)
        cout << "Permutation is odd\n";
    else cout << "Permutation is even\n";


}

void table_kali(vector<int>& mass, int& neutral)
{
    for (int i = 0; i < mass.size(); i++)
    {
        for (int j = 0; j < mass.size(); j++)
            cout << (mass[i] * mass[j]) % 7 << "\t";
        cout << endl;
    }
}

void Kali()
{
    int neutral = NULL;
    vector<int> kali(6);
    for (int i = 0; i < 6; i++)
        kali[i] = i + 1;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (kali[i] * kali[j] % 7 == kali[j])
                neutral = kali[i];
    /*for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (kali[i] * kali[j] == kali[j]) buf++;
            cout << (kali[i] * kali[j]) % 7 << "\t";
        }
        if (buf)
        {
            neutral = kali[i];
            buf = -1;
        }
        cout << endl;
    }*/

    table_kali(kali, neutral);

    cout << "Neutral element is " << neutral << endl;
    cout << "Reverse elements:\n";
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (kali[i] * kali[j] % 7 == neutral)
                cout << "for " << kali[i] << " is " << kali[j] << endl;
    
    vector <int> undergroup;


    for (int i = 0; i < 6; i++)
    {
        vector <int> group;
        int p = 0;
        int res;
        res = pow(kali[i], 2);
        res %= 7;
        group.push_back(res);
        while (p < 6)
        {
            p++;
            if (res == neutral)
            {
                cout << "Degree for " << kali[i] << " is " << p << endl;
                if (p == 5)
                    cout << "Element " << kali[i] << " generates a cycle group " << endl;
                else cout << "Element " << kali[i] << " generates a group " << endl;
                if (i == 1) {
                    undergroup.push_back(kali[i]);
                    cout << "{ " << kali[i] << " , ";
                    for (int i = 0; i < group.size() - 1; i++)
                    {
                        cout << group[i] << " , ";
                        undergroup.push_back(group[i]);
                    }
                    undergroup.push_back(group.back());
                    cout << group.back() << " }" << endl;
                    break;
                }
                else
                {
                    cout << "{ " << kali[i] << " , ";
                    for (int i = 0; i < group.size() - 1; i++)
                        cout << group[i] << " , ";
                    cout << group.back() << " }" << endl;
                    break;
                }
            }
            else
            {
                res *= kali[i];
                res %= 7;
                group.push_back(res);
            }
        }
    }

    cout << endl;
    sort(undergroup.begin(), undergroup.end());
    cout << "Kali's table for H2" << endl;
    table_kali(undergroup, neutral);


}

//void findArticulationPoints(int**& matrix, int vertexCount, int v, int& time, vector<bool>used, vector<int>disc, vector<int>low, stack<pair<int,int>> st)
//{
//    disc[v] = low[v] = ++time;
//    used[v] = true;
//
//    for (int i = 0; i < vertexCount; i++)
//    {
//        if (!matrix[v][i])
//            continue;
//        if (!used[v])
//        {
//            st.push(make_pair(v, i));
//            findArticulationPoints(matrix, vertexCount, i, time, used, disc, low, st);
//            low[v] = min(low[i], low[v]);
//
//            if (low[i] >= disc[v])
//            {
//                cout << "Íîâàÿ êîìïîíåíòà äâóñâÿçíîñòè: ";
//                while (st.top() != make_pair(v, i))
//                {
//                    cout << st.top().first << " -- " << st.top().second << endl;
//                    st.pop();
//                }
//                cout << st.top().first << " -- " << st.top().second << endl;
//                st.pop();
//
//            }
//
//        }
//        else if (i != st.top().first && disc[i] < low[v])
//        {
//            low[v] = disc[i];
//            st.push(make_pair(v,i));
//        }
//    }
//}
//
//void findBiconnectedComponents(int**& matrix, int vertexCount)
//{
//    vector<bool> used(vertexCount, false);
//    vector<int> disc(vertexCount, false);
//    vector<int> low(vertexCount, false);
//    stack<pair<int, int>> st;
//    int time = 0;
//
//    for (int i = 0; i < vertexCount; i++)
//        if (!used[i])
//            findArticulationPoints(matrix, vertexCount, i, time, used, disc, low, st);
//
//}
//
void transposition(int**& matrix, int vertexcount, vector<vector<int>>& transpon)
{
    for (int i = 0; i < vertexcount; i++)
        for (int j = 0; j < vertexcount; j++)
            transpon[i][j] = matrix[j][i];
}

void fillorder(int**& matrix, int vertexcount, int v, vector<bool>& visited, stack <int>& st)
{
    visited[v] = true;
    for (int i = 0; i < vertexcount; i++)
        if (matrix[v][i] && !visited[i])
            fillorder(matrix, vertexcount, i, visited, st);
    st.push(v);
}

void dfs1(int**& matrix, int vertexcount, int v, vector<bool>& visited)
{
    visited[v] = true;
    cout << v + 1 << " ";
    for (int i = 0; i < vertexcount; i++)
        if (matrix[v][i] && !visited[i])
            dfs1(matrix, vertexcount, i, visited);
}

void StrongConnectedComponents(int**& matrix, int vertexcount)
{
    stack <int> st;
    vector <bool> visited(vertexcount, false);
    for (int i = 0; i < vertexcount; i++)
        if (!visited[i])
            fillorder(matrix, vertexcount, i, visited, st);

   vector<vector<int>> transpon(vertexcount, vector<int>(vertexcount, false));

    transposition(matrix, vertexcount, transpon);

    visited.assign(vertexcount, false);

    while (!st.empty())
    {
        int v = st.top();
        st.pop();

        if (!visited[v])
        {
            dfs1(matrix, vertexcount, v, visited);
            cout << endl;
        }
    }
}

bool CheckForPath(int**& matrix, int vertexCount, int start, vector<bool>& inPath)
{
    int check = 0;
    for (int i = 0; i < vertexCount; i++)
        if (matrix[start][i] && !inPath[i])
            check++;
    if (!check)
        return false;
    return true;
}

void FillStack(int**& matrix, int vertexCount,stack<int>& mainStack)
{
    stack<int> tempStack;
    vector<bool> isVisited(vertexCount, false);
    vector<int> path;
    vector<bool> inPath(vertexCount, false);

    tempStack.push(NULL);

    while (!tempStack.empty())
    {
        int top = tempStack.top();
        path.push_back(top);
        tempStack.pop();
        if (!isVisited[top])
        {
            isVisited[top] = true;
            int check = 0;
            for (int i = 0; i < vertexCount; i++)
                if (matrix[top][i] && !isVisited[i])
                {
                    tempStack.push(i);
                    check++;
                }
            if (!check)
            {
                mainStack.push(top);
                inPath[top] = true;

                for (int i = 2; i < path.size() + 1; i++)
                {
                    int start = path[path.size() - i];
                    if (!inPath[start] && !CheckForPath(matrix, vertexCount, start, inPath))
                    {
                        mainStack.push(start);
                        inPath[start] = true;
                    }
                }
            }
        }
    }
}

void PrintSSCs(int**& matrix, int vertexCount, stack<int>& mainStack)
{
    vector<bool> isVisited(vertexCount, false);
    while (!mainStack.empty())
    {
        int top = mainStack.top();
        mainStack.pop();

        if (!isVisited[top])
        {
            isVisited[top] = true;
            stack<int> tempStack;
            tempStack.push(top);

            while (!tempStack.empty())
            {
                int ttop = tempStack.top();
                tempStack.pop();
                for (int i = 0; i < vertexCount; i++)
                {
                    if (matrix[i][ttop] && !isVisited[i])
                    {
                        tempStack.push(i);
                        isVisited[i] = true;
                    }
                }
            }
        }
    }
}

void TarjanDFS(int**& matrix, int vertexCount, int u, vector<int>& disc, vector<int>& low, vector<int>& parent, vector<bool>& articulationPoint, vector <pair<int, int>>& bridge)
{
    static int time = 0;
    disc[u] = low[u] = time;
    time++;
    int children = 0;

    for (int v = 0; v < vertexCount; v++)
    {
        if (disc[v] == -1 && matrix[u][v])
        {
            children++;
            parent[v] = u;
            TarjanDFS(matrix, vertexCount, v, disc, low, parent, articulationPoint, bridge);
            low[u] = min(low[u], low[v]);

            if (parent[u] == -1 and children > 1)
                articulationPoint[u] = true;

            if (parent[u] != -1 and low[v] >= disc[u])
                articulationPoint[u] = true;

            if (low[v] > disc[u])
                bridge.push_back({ u, v });
        }
        else if (v != parent[u] && matrix[u][v])
            low[u] = min(low[u], disc[v]);
    }
}

void FindArtPointsAndBridges(int**& matrix, int vertexCount)
{
    vector<int> disc(vertexCount, -1), low(vertexCount, -1), parent(vertexCount, -1);
    vector<bool> articulationPoint(vertexCount, false);
    vector<pair<int, int>> bridge;

    for (int i = 0; i < vertexCount; i++)
        if (disc[i] == -1)
            TarjanDFS(matrix, vertexCount, i, disc, low, parent, articulationPoint, bridge);
    cout << "Articulation points: ";
    for (int i = 0; i < vertexCount; i++)
        if (articulationPoint[i])
            cout << i + 1 << " ";
    cout << "\nBridges: ";
    for(int i=0;i<bridge.size();i++)
        cout<<"(" << bridge[i].first + 1 << " , " << bridge[i].second+1<<")";
    cout << endl;

}
