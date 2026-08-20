#include<bits/stdc++.h>
using namespace std;

int main(){
     
     vector<int> v;
     vector<int> v1(5); // creates a vector of 5 integers, all initialized to 0
     vector<int> v3(5, 10);
     vector<int> v4{1, 2, 3, 4, 5};
     vector<int> v5 = {1, 2, 3, 4, 5};
     vector<int> v6(v5.begin(), v5.end());

      

    vector<int>::iterator it = v4.begin();

    cout<<*it<<" ";

    it++;
    cout<<*it<<" ";

    it= it+2;
    cout<<*it<<" ";
    cout<<endl;

    for(vector<int>::iterator it = v4.begin(); it!=v4.end(); it++){
        
        cout<<*it<<" ";
    }
    for(auto it = v4.begin())
    
   return 0;
    
}