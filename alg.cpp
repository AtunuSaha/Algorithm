#include<iostream>
using namespace std;

GCD(int n, int m){
if(n==m){
    return n;
}
else if(n>m){
    return GCD(n-m,m);
}
else{
    return GCD(n,m-n);

}
}
int main(){
cout<<GCD(5,10)<<endl;
return 0;
}

