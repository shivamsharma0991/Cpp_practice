#include<bits/stdc++.h>
using namespace std;



int main(){
    int a;

    cout<<"enter last digit of voter ID: ";
    cin>>a;

    if(a%2==0){
        cout<<"You will vote at Booth A.";
    }
    else{
        cout<<"You will vote at Booth B.";
    }
    return 0;
}