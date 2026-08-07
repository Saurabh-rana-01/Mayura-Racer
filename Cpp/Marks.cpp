#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of the students: "<<endl;
    cin>>marks;
    switch(marks){
        case 100:
            cout<<"The student has scored full marks."<<endl;
            break;
        case 90:
            cout<<"The student has scored very good marks."<<endl;
            break;
        case 80:
            cout<<"The student has scored good marks."<<endl;
            break;
        case 70:
            cout<<"The student has scored average marks."<<endl;
            break;
        default:
            cout<<"The student has scored below average marks."<<endl;
    }






    return 0;
}