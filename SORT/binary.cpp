#include<iostream>
using namespace std;

void printlist(int *p,int s){
     for(int i=0;i<s;i++){
        cout<<p[i]<<" ";
     }
   cout<<endl;
}
void mergelist(int *A,int left, int mid, int right){

    int n1= mid-left+1;
    int n2= right-mid;

    int *L=new int[n1];
    int *R=new int[n2];

    for(int i=0;i<n1;i++){
        L[i]=A[left+i];
    }
      for(int j=0;j<n2;j++){
        R[j]=A[mid+1+j];
    }
    int i=0, j=0, k=left;

     while(i<n1 && j<n2){
        if(L[i]>R[j]) A[k++]=R[j++];
        else A[k++]=L[i++];
     }
     while(i<n1){
        A[k++]=L[i++];
     }
     while(j<n2){
        A[k++]=R[j++];
     }



}



void mergesort(int *A,int left, int right){

    int mid;
   if(left<right){
       mid=(left+right)/2;
       mergesort(A,left,mid);
       mergesort(A,mid+1,right);
       mergelist(A,left,mid,right);
   }

}
int binarysearch(int *q,int low,int high,int item){

    if(low>high) return -1;
    int mid=(low+high)+2;

    if(item==q[mid]){
        return mid;
    }
    else if(item<q[mid]){
        return binarysearch(q,low,mid-1,item);
    }
    else{
        return binarysearch(q,mid+1,high,item);
    }
}
int main(){

    int n;
    cin>>n;
    int *q=new int[n];
    srand(time(0));
    for(int i=0;i<n;i++){
        q[i]=(rand()%5)+1;

    }
    cout<<endl;
    cout<<"the array is: "<<endl;
    printlist(q,n);

   mergesort(q,0,n-1);
   cout<<"the sorted array is: "<<endl;
   printlist(q,n);
   cout<<"binary search is: "<<endl;
   cout<<binarysearch(q,0,n,5);
   /*int a[]={89,2,45,6,2,1000,30};
   printlist(a,7);

   mergesort(a,0,6);
   printlist(a,7);
   */

}
