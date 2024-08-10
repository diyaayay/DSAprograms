#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph {
public:
    int v;
    list<int> *l;

    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int i, int j, bool undir=true) {
        l[i].push_back(j);
        if (undir) {
            l[j].push_back(i);
        }
    }

    void printGraph() {
        for (int i = 0; i < v; i++) {
            cout << i << " --> ";
            for (auto j : l[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    
    void Bfs(int source){
        queue<int> q;
        int *dist = new int[v]();
        bool *visited = new bool[v]();
        
        q.push(source);
        visited[source] = true;
        dist[source] = 0;
        
        while (!q.empty()) {
            int f = q.front();
            cout << f << " ";
            q.pop();
            
            for (auto nbr : l[f]) {
                if (!visited[nbr]) {
                    q.push(nbr);
                    dist[nbr] = dist[f] + 1;
                    visited[nbr] = true;
                }
            }
        }
        
        cout << endl;
        for (int i = 0; i < v; i++) {
            cout << "Shortest distance to " << i << ": " << dist[i] << endl;
        }
        
        delete[] dist;
        delete[] visited;
    }
    
    void sbfs(int source){
        queue<int> q;
        bool *visited = new bool[v]();
        int *dist = new int[v]();
        int *parent = new int[v];
        
        for (int i = 0; i < v; i++) {
            parent[i] = -1;
        }
        
        q.push(source);
        visited[source] = true;
        parent[source] = source;
        dist[source] = 0;
        
        while (!q.empty()) {
            int f = q.front();
            cout << f << " ";
            q.pop();
            
            for (auto nbr : l[f]) {
                if (!visited[nbr]) {
                    q.push(nbr);
                    parent[nbr] = f;
                    dist[nbr] = dist[f] + 1;
                    visited[nbr] = true;
                }
            }
        }
        
        cout << endl;
        for (int i = 0; i < v; i++) {
            cout << "Shortest distance to " << i << ": " << dist[i] << endl;
        }
        
        delete[] dist;
        delete[] visited;
        delete[] parent;
    }

    ~Graph() {
        delete[] l;
    }
};

int main() {
    Graph g(7);

    g.addEdge(1, 5);
    g.addEdge(1, 6);
    g.addEdge(5, 3);
    g.addEdge(5, 6);
    g.addEdge(6, 3);
    g.addEdge(3, 2);

    g.printGraph();
    g.sbfs(1);
    g.Bfs(1);

    return 0;
}
