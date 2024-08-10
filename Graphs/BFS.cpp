#include <iostream>
#include <list>
#include<queue>

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
            cout << i << "-->";
            for (auto j : l[i]) {
                cout << j << ",";
            }
            cout << endl;
        }
    }
    
    void Bfs(int source){
        queue<int>q;
        bool *visited= new bool[v]{0};
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int f =q.front();
            cout<<f<<endl;
            q.pop();
            for(auto nbr:l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        }
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
    
    g.Bfs(1);
    
    return 0;
}
