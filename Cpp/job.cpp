#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter The Age of Person: "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for job"<<endl;
        
    }
    if( age >=18){
        cout<<"You are eligible For Job"<<endl;

        if(age>=55 && age<= 57){
            cout<<"Eligible for job , but retirement soon"<<endl;
        }else if(age>57){
            cout<<"Retirement Time";
        }
    }

 return 0;

}