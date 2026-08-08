// void 
// retun
// perametrised 
// nonperimetrised
#include<iostream>
using namespace std;

// pass by value 
    void doSomething(string s){
                    s[0]= 'm';
                    cout << s <<endl;
                  }  
                    
                  
int main(){

    string s="hello";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}                 

// Passing by reference
void doSomethingReference(string &s){
    s[0] = 'm';
    cout << s << endl;
}
