#include <bits/stdc++.h>
using namespace std;


void printStack(stack <int> s)
{

 while (!s.empty())

{
  cout <<" "<< s.top();
  s.pop();

}
cout << '\n';
}
int main ()
{
stack <int> s;
s.push(10);
s.push(30);
s.push(20);
s.push(5);
s.push(1);
cout << "The stack is : ";
printStack(s);
cout << "\nThe size of stack is : " << s.size();
cout << "\nTop element is : " << s.top();
cout << "\ns.pop() : ";
s.pop();
printStack(s);
return 0;
}

