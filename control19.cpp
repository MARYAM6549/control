#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,flag;
  cout<<"enter a positive integer : \n";
  cin>>integer;
  cout<<"prime number : ";
  for (int i = 2 ;i<=integer ;i++ ) {
    flag=0;
  for (int j = 2 ;j<i ;j++ )
  {
    if (i%j)continue;
    else flag++;

  }
       if (flag==0)cout<<i <<" ";
}cout<<"\n";
  return 0;
}
