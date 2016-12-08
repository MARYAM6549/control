#include "iostream"
#include "cmath"
using namespace std;

int main(int argc, char const *argv[]) {
int a,b,c;
float d;
cout<<" a x^2 + b x + c = 0 \nenter three integers as a and b and c to solve it\n";
cout<<" a = ";
cin>>a;
cout<<" b = ";
cin>>b;
cout<<" c = ";
cin>>c;
d = b*b - 4*a*c ;
if (d>0) cout<<" x1 = "<<-b+sqrt(d)/2*a<<" x2 = "<<-b-sqrt(d)/2*a;
else if (d==0) cout<<" x1 = x2 = "<<-b/2*a;
else cout<<" no real root";
  return 0;
}
