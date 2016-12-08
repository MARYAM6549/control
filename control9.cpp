#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int integer,product=1;
  cout<<"enter a positive integer : ";
  cin>>integer;
  for (int i = 1; i <=integer; i++)product*=i;
  cout<<"n! ="<<product <<"\n";
  return 0;
}
