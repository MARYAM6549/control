#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,a=0,flag=0, number[10];
  cout<<"enter a positive integer : \n";
  cin>>integer;
  while(integer != 0){number[a]=integer%10;integer/=10;a++;}
    for (int j = 0; j<a; j++)
     {if(number[j]!= number[a-j-1]){cout<<" not Palindrome\n";flag++;} j==a-j-1; break;}
if(flag==0)cout<<"Palindrome\n";
  return 0;
}
