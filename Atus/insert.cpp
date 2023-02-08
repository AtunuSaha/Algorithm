#include<bits/stdc++.h>
 using namespace std;

void printlist(int *p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
     }

   }
 void insertionsort(int *A, int n){
       for(int j=1;j<n;j++){
          int value =A[j];
          int i=j-1;
          while(i>=0 & A[i]>value){
            swap(A[i],A[i+1]);
            i=i-1;
          }
          A[i+1]=value;

       }

 }

 int main(){
     int n = 2000;
     int *a = new int[n];

     ifstream fin("2k.txt");

     for(int i=0;i<n;i++){
        fin>>a[i];
     }
     printlist(a,n);
     insertionsort(a,n);
     cout<<"------------"<<endl;
     printlist(a,n);


     return 0;
 }
