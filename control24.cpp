#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[]) {
  float number1,number2;
  char operator4;
  cout<<"enter number1 then operator at last number2 : \n";
cin>>number1>>operator4>>number2;
   switch (operator4) {
     case '+': cout<<number1<<" + "<<number2<<" = "<<number1+number2;break;
     case '-': cout<<number1<<" - "<<number2<<" = "<<number1-number2;break;
     case '*': cout<<number1<<" * "<<number2<<" = "<<number1*number2;break;
     case '/': cout<<number1<<" / "<<number2<<" = "<<number1/number2;break;
   }
    return 0;
  }
