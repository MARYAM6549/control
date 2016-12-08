#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
int integer;
cout<<"enter an integer : ";
cin>>integer;
integer%=2;
if (integer) cout<<"odd\n";
else cout<<"even\n";
    return 0;
}
