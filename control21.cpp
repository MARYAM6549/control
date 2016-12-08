#include "iostream"
#include "cmath"
using namespace std;

int main(int argc, char const *argv[]) {
  int integer1,integer,a, number[10],sum;
  cout<<"enter a positive integer : \n";
  cin>>integer;
  for (int i = 1 ;i<=integer ;i++ ) {
    integer1=i;
    sum=0;
    a=0;
    while(integer1 != 0){number[a]=integer1%10;integer1/=10;a++;}
      for (int j = 0; j < a; j++) sum+=pow(number[j],3);
      if (i==sum)   cout<<i<<"\n";
}
  return 0;
}
