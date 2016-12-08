//pseudocode
/*
@@@@@@
@@@@@@/10 == @@@@@  1
@@@@@/10 == @@@@    2
@@@@/10 == @@@      3
@@@/10 == @@        4
@@/10 == @          5
@/10 == 0           6
*/

#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,a=0;
  cout<<"enter a positive integer : \n";
  cin>>integer;
  while(integer != 0){integer/=10;a++;}
cout<<"the number of digits : "<<a<<"\n";
  return 0;
}
