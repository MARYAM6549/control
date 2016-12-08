/*
A = 65 ... Z = 90
a = 97 ... z = 122
*/

#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
char character;
cout<<"enter a character: ";
cin>>character;
if (((int) character>=65 && (int) character<=90)||((int) character>=97 && (int) character<=122))
cout<<"alphabet\n";
else cout<<"not\n";
  return 0;
}
