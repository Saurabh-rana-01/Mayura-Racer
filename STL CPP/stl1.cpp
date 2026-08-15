#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<"Hello World";
}

int sum(int a, int b){
    return a+b;
}

void explainPair(){
   pair<int, int> p={1,3};
   cout<<p.first<<" "<<p.second<<endl;
   pair<int, pair<int, int>>p1={1,{3,4}};
   cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
   pair<int, int> arr[] ={{1,2},{2,5},{5,1}
   };
   for(int i=0;i<3;i++){
       cout<<arr[i].first<<" "<<arr[i].second<<endl;
   }
}

void expliainVector(){
     
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20);

    vector<int>::iterator it = v.begin();

    cout<<v[0]<<" "<<v.at(0)<<endl;

    cout<<v.back()<<endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }

    v.erase(v.begin()+1);

    v.erase(v.begin()+1, v.begin()+3);

    




}


int main(){
    print();
    cout<<endl;
    cout<<sum(5, 10)<<endl;
    explainPair();






    return 0;

}