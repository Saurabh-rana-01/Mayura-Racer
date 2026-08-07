#include<iostream>
using namespace std;
 
int main(){
    int arr[5];
    cout<<" Enter The values of Indxes of Array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<" The Values of Arrays are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    

}