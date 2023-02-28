#include<iostream>
using namespace std;
void printlist(int *p,int n){
     for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
     }
  cout<<endl;
}
int *mergeSortedlist(int *A,int m,int *B,int n){
     int *C= new int[m+n];
     int i=0, j=0, k=0;

     while(i<m && j<n){
        if(A[i]>B[j]) C[k++]=B[j++];
        else C[k++]=A[i++];
     }
     while(i<m){
        C[k++]=A[i++];
     }
     while(j<n){
        C[k++]=B[j++];
     }

return C;

}
int main(){


    int a[]={2,5,7,8,10,16};
    int b[]={6,9,20,32,50};

    printlist(a,6);
    printlist(b,5);

    int *m=mergeSortedlist(a,6,b,5);
    printlist(m,11);



    return 0;
}
