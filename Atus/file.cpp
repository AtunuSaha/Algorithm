 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     ofstream fout("2k.txt");
      srand(time(0));

     int n=2000;
     for(int i=0;i<n;i++){
        fout<<rand()%1000+1<<endl;
     }


     return 0;

 }

