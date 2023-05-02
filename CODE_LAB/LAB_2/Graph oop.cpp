#include<bits/stdc++.h>
using namespace std;

class Graph{

private:
    int nodes,edges;
    int **g;

public:
    Graph(){


    }
     Graph(int nodes,int edges){
        this->nodes=nodes;
        this->edges=edges;
        g=new int*[nodes];
        for(int i=0;i<nodes;i++){
                g[i]=new int[nodes];

        }
        for(int i=0;i<nodes;i++){
            for(int j=0;j<nodes;j++){
                g[i][j]=0;
            }
        }

     }

     void addEdge(int u,int v){

        g[u][v]=1;
        g[v][u]=1;


     }
     void Printgraph(){

        for(int i=0;i<nodes;i++){
            for(int j=0;j<nodes;j++){

                cout<<g[i][j];
            }
            cout<<endl;
        }

     }
};

int main(){



    int nodes,edges;
    cin>>nodes>>edges;

    Graph g(nodes,edges);

    int u, v;

    for(int i=0;i<edges;i++){
        cin>>u>>v;
        g.addEdge(u,v);

    }

   g.Printgraph();




}

