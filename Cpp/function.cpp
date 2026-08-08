// void 
// retun
// perametrised 
// nonperimetrised
#include<iostream>
using namespace std;

int maxx(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
   
}

int main(){
    
    int num1, num2;
    cout<<"Enter the Values of Two Numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"The Maximum Number is: "<<maxx(num1,num2)<<endl;
    return 0;
}