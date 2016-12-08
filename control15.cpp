//pseudocode
/*
@ # $

@ # $ % 10 == $           0 * 10 + $
@ # % 10 == #             $ * 10 + #
@ % 10== @              $ # * 10 + @

$ # @
*/

#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,integer1,a=0, b=0, c;
  cout<<"enter a positive integer : \n";
  cin>>integer;
  integer1=integer;
  while(integer1 != 0)  {integer1/=10;b++;}
  while(b!= 0)  {  a*=10;  c=integer%10;  a+=c; b--; integer/=10;}
cout<<a<<"\n";
  return 0;
}
