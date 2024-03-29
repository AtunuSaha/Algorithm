#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *G, int n, int s){

    queue<int> q;
     int *visited = new int[n];
     int *distance = new int[n];

     for(int i=0;i<n;i++){
        visited[i]=distance[i]=0;
     }
     q.push(s);
     visited[s]=1;
     distance[s]=0;

     while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int i=0;i<G[p].size();i++){
                int nxtadj = G[p][i];
                if(visited[nxtadj]==0){
                    visited[nxtadj]=1;
                    q.push(nxtadj);
                    distance[nxtadj] = distance[p]+1;
                }
            }
     }

     cout<<"Distance from: "<<s<<endl;
     for(int i=0;i<n;i++){
        cout<<s<<" to "<<i<<" distance: "<<distance[i]<<endl;
     }
}

int main(){


vector<int> *g;

int node,edge;
cin>>node>>edge;
g = new vector<int>[node];

    int u,v;

    for(int i=0;i<edge;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

for(int i=0;i<node;i++){
        cout<<i<<" --->";
    for(int j=0;j<g[i].size();j++){
    cout<<g[i][j]<<" ";
}
cout<<endl;
}

bfs(g,node,0);



return 0;
}

