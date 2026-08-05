#include <bits/stdc++.h>
using namespace std;

int main() {
   int num1, num2;
   cout << " Enter the Values of Two Numbers:" << endl;
   cin >> num1 >> num2;
   cout << " Num1:"<<num1 << "\n Num2:" << num2 << endl;
   if(num1>num2){
    cout<<"The sum of num1 and num2 is : "<< num1+num2 << endl;

   }else{
    cout<<"The difference of num1 and num2 is : "<< num1-num2 << endl;
   }
   char ch;
   cout << "Enter a character: ";
   cin >> ch;
   if(97<=ch && ch<=122){
    cout<<"The character is a lowercase letter."<<endl;
   }
   return 0;
}
