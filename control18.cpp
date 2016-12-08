#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,flag=0;
  cout<<"enter a positive integer to know is it a prime number : \n";
  cin>>integer;
  for (int i = 2 ;i<integer ;i++ )
  {
    if (integer%i)continue;
    else {flag++; break;}

   }
       if (flag)cout<<"No\n";
       else cout<<"Yes\n";
  return 0;
}
