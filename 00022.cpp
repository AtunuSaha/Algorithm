
#include<bits/stdc++.h>
using namespace std;

class Graph {
private:
    int vertex;
    int edges;
    list<int>* adjList;
public:
    Graph(int v, int e) {
        vertex = v;
        edges = e;
        adjList = new list<int>[v];
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printGraph() {
        for (int i = 0; i < vertex; i++) {
            cout << i << ": ";
            for (auto j : adjList[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void bfs(int start) {
        vector<bool> visited(vertex, false);
        queue<int> q;
        q.push(start);
        visited[start] = true;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            for (auto i : adjList[curr]) {
                if (!visited[i]) {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    void dfsUtil(int curr, vector<bool>& visited) {
        visited[curr] = true;
        cout << curr << " ";
        for (auto i : adjList[curr]) {
            if (!visited[i]) {
                dfsUtil(i, visited);
            }
        }
    }

    void dfs(int start) {
        vector<bool> visited(vertex, false);
        dfsUtil(start, visited);
    }
};

int main() {
    int v;
    int e;

    ifstream in("graph.txt");
    in >> v >> e;

    Graph g(v, e);
    int ul, v1;
    for (int i = 0; i < e; i++) {
        in >> ul >> v1;
        g.addEdge(ul, v1);
    }

    cout << "Adjacency List:" << endl;
    g.printGraph();
    cout << endl;
    cout << "BFS traversal from vertex 0:" << endl;
    g.bfs(0);
    cout << endl;
    cout << "DFS traversal from vertex 0:" << endl;
    g.dfs(0);
    cout << endl;
    return 0;
}
