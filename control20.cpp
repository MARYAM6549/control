#include "iostream"
#include "cmath"
using namespace std;

int main(int argc, char const *argv[]) {
  int integer1,integer,a=0, number[10],sum;
  cout<<"enter a positive integer : \n";
  cin>>integer;
  integer1=integer;
  while(integer != 0){number[a]=integer%10;integer/=10;a++;}
    for (int j = 0; j < a; j++) sum+=pow(number[j],3);
    if (integer1==sum)   cout<<"armstrong \n";
    else cout<<"not armstrong \n";
  return 0;
}
