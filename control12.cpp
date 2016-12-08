//pseudocode
/*
a == 34
b == 12
c = a % b
c == 10

__|__|__|__|_
34|12|10|2 |0
a  b  c
   a  b  c
      a  b  c

a = b
a == 12
b = c
b == 10
c = a % b
c == 2
...
if
c == 0
stop
*/

#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int a,b,c=1,d,e;
  cout<<"enter two positive integers : \n";
  cin>>a;
  d=a;
  cin>>b;
  e=b;
  while (1)
  {
  c = a % b ;
  a = b;
  if (c==0) break;
  b = c;
}
 cout<<"lowest common factor is   "<< e*d/b <<"\n";
  return 0;
}
