#include <bits/stdc++.h>
using namespace std;
#define n 5

int a[n];
int front = -1;
int rear = -1;

bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}

void enqueue ( int value )
{
 if (rear == n-1)
  cout<<"Queue is full"<<endl;
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  a[rear] = value;
 }
}

void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty"<<endl;
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}

void showfront( )
{
 if( isempty())
  cout<<"Queue is empty"<<endl;
 else
  cout<<"front is:"<<a[front]<<endl;
}

void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty"<<endl;
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<a[i]<<" ";
  cout<<endl;
 }
}

int main()
{


 enqueue(20);
 enqueue(30);
 enqueue(50);
 enqueue(70);
 enqueue(80);
 enqueue(90);

 displayQueue();

 dequeue();

 displayQueue();

 return 0;
}

