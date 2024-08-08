/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class Graph{ 
    int V;
    list<int> *l;
    
    public:
    Graph(int v){
        V=v;
        l=new list<int>[v];
    }
    void addEdge(int i,int j,bool undir=true){
            l[i].push_back(j);
            if(undir){
                l[j].push_back(i);
            }
    }
    
    void printL(){
        for(int i=0;i<V;i++){
            cout<<i<<"--->";
            cout<<"(";
            for(auto v:l[i]){
                cout<<v;
            }
            cout<<")"<<endl;
        }
    }
    
};



int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(3,5);
    g.addEdge(5,0);
    
    g.printL();
    

    return 0;
}