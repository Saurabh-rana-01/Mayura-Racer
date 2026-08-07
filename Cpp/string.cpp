#include<iostream>
using namespace std;
 
int main(){
    string s;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    int len= s.size();
    for(int i=0;i<len;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}