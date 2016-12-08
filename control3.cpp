#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
int a,b,c,max;
cout<<"enter three integers : \n";
cout<<"integer1 = ";
cin>>a;
max=a;
cout<<"integer2 = ";
cin>>b;
if (b>max) max=b;
cout<<"integer3 = ";
cin>>c;
if (c>max) max=c;
cout<<"maximum : "<<max<<"\n";
  return 0;
}
