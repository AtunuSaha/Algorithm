#include<iostream>
using namespace std;

 void printlist(int *a,int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }


 }
int Partition(int *a, int low, int high){

    int left,right,pivot_item;
    pivot_item = a[low];
    int pivot = left = low;
    right = high;

    while(left<right){
        while(a[left]<= pivot_item) left++;
        while(a[right]> pivot_item) right--;
        if(left < right) swap(a[left],a[right]);
    }
    a[low] = a[right];
    a[right] = pivot_item;
    return right;


}
void quicksort(int *a, int low, int high){

        int pivot;

        if(low<high){
            pivot = Partition(a,low,high);
            quicksort(a,low,pivot-1);
            quicksort(a,pivot+1,high);
        }


}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];

    for(int i=0;i<n;i++){
        a[i]= rand()%100000+1;
    }
      printlist(a,n);
      quicksort(a,0,n-1);
      cout<<endl;
       printlist(a,n);


     return 0;

}
