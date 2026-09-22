#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int,int>p={1,2};  //pair syntax

    cout<<p.first <<p.second; //first for 1 and second for 2

    //To store three variable in pair
    
    pair<int,pair<int,int>> s= {1,{2,3}};
    cout<<s.first<<s.second.second;

}