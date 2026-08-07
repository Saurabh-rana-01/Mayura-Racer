#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main() {
   Student s1;
   s1.name = "Alice";
   s1.age = 20;
   s1.display();
   int num1, num2;
   string str;
   getline(cin , str);
   cout<<str<<endl;
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
