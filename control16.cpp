#include "iostream"
#include "cmath"
using namespace std;

int main(int argc, char const *argv[]) {
int a,b;
  cout<<"a ^ b = ? \nenter a and b : \n";
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
    cout<< a <<" ^ "<< b <<" = "<< pow(a,b)<<"\n";
  return 0;
}
