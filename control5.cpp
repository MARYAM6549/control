/*
leap year is periodic
4-year period
after 8 rounds
5-year period
*/
#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
int a = 0 , b = 1309 , c ;
cout<<"enter a year : ";
cin>>c;
   for ( int i = 1309 ; i<=c-4 ; i+=4){
 b+=4;
 a++;
  if (a%8==0)b++;
}
if (c==b) cout<<"leap year\n";
else cout<<" not \n";

  return 0;
}
