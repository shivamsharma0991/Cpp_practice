#include<unordered_map>
#include<iostream>
using namespace std;


// //hashing fro array
// int main(){
//     int n;cout<<"enter no of element in arr:";cin>>n;int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     int hash[13]={0};
//     for (int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }
//     int qury;cout<<"enter no of querys:";cin>>qury;
//     while(qury--){
//         int num;cin>>num;
//         //fetch
//         cout<<hash[num]<<endl;
//     }
//     return 0;
// }

//hashing for string
// int main(){
//     string s;cout<<"Enter the string: ";cin>>s;



//     //precompute
//     int hash[26]={0};
//     for (int i=0;i<s.size();i++){
//         hash[s[i]-'a'] += 1;
//     }



//     int qury;cout<<"enter no of querys:";cin>>qury;
//     while(qury--){
//         char c;cin>>c;
//         //fetch
//         cout<<hash[c-'a']<<endl;
//     }
//     return 0;
// }

//map

int main(){
    int n;cout<<"enter no of element in arr:";cin>>n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<int,int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]] += 1;
    }
    int qury;cout<<"enter no of querys:";cin>>qury;
    while(qury--){
        int num;cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}
