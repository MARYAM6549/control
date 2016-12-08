#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,sum=0;
  cout<<"enter a positive integer : ";
  cin>>integer;
  for (int i = 1; i <=integer; i++)sum+=i;
  cout<<"sum ="<<sum <<"\n";
  return 0;
}
