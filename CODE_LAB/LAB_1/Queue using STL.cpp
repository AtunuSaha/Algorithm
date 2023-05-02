#include<bits/stdc++.h>
#include<queue>
using namespace std;


int main(){

 queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);

while(!q.empty()){
 int x=q.front();
 cout<<x<<" ";
 q.pop();
}
return 0;
}
