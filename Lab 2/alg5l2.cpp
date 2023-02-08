#include<bits/stdc++.h>
using namespace std;

bubblesort(int *a,int n){
  for(int k=0;k<n;k++){
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]) swap(a[i],a[i+1]);
   }
  }
}
  void printlist(int *p,int n){

   for(int i=0;i<n;i++){
        cout<<i<<" "<<p[i]<<endl;
  }
  void generatedata(int *p,int n){
    srand(time(0));

    for(int i=0;i<n;i++){
        p[i]=(rand()%100000)+1;
     }

  }

int main()
{
  int n;

  cin>>n;

  int *p = new int[n];




     generatedata(p,n);
     printlist(p,n);
     cout<<"-------------"<<endl;
     bubblesort(p,n);

  return 0;
}

