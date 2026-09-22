#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string stdName,stdClg;
    int sciMarks,matMarks,totalMarks;

    cout<<"enter your name: ";
    getline(cin,stdName);

    cout<<"enter your clg name: ";
    getline(cin,stdClg);

    cout<<"enter your maths marks: ";
    cin>>matMarks;

    cout<<"enter your science marks: ";
    cin>>sciMarks;

    totalMarks=sciMarks+matMarks;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"name: ",cout<<stdName,cout<<endl;
    cout<<"Clg: ",cout<<stdClg,cout<<endl;
    cout<<"your total marks: ",cout<<totalMarks,cout<<endl;
    
    return 0;
}
