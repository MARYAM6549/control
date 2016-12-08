//pseudocode
/*
a == 1
b == 1
c == 0
c = a + b
c == 2
a = b
a == 1
b = c
b == 2
c = a + b
c == 3
...
*/

#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer ,a = 1 , b = 1 , c = 0;
  cout<<"enter a positive integer : ";
  cin>>integer;
  cout<<" "<< a <<" "<< b ;
  for (int i = 1; i <=integer; i++)
  {
  c = a + b ;
  a = b;
  b = c;
  cout<<" "<< c ;
}cout<<"\n";
  return 0;
}
