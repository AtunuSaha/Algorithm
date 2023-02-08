#include<bits/stdc++.h>
using namespace std;

void printlist(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
     }

   }
 void selectionsort(int *A, int n){
     for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
            swap(A[min],A[i]);
        }

     }

 }

 int main(){
     int n = 6000;
     int *a = new int[n];

     ifstream fin("6k.txt");

     for(int i=0;i<n;i++){
        fin>>a[i];
     }
     printlist(a,n);
     selectionsort(a,n);
     cout<<"------------"<<endl;
     printlist(a,n);


     return 0;
 }
