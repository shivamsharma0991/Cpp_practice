#include<bits/stdc++.h>
using namespace std;

void largest_element(int arr[],int n){
    int large=arr[0];
    for (int i=0;i<=n-1;i++){
        if (arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Largest: "<<large<<endl;
}

void sec_larg_element(int arr[],int n){
    int large=arr[0];
    int second_large=-1;
    for (int i=0;i<=n-1;i++){
        if (arr[i]>large){
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
        }
        cout<<"Second largest: "<<second_large<<endl;
}

bool is_sorted(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;

}

void union_of_array(int arr1[],int n1,int arr2[],int n2){
    int i=0;int j=0;int c=0;
    vector<int>unio;
    while(i<n1 || j<n2){
        if(arr1[i]<=arr2[j] && unio[c]!=arr1[i]){
            unio.push_back(arr1[i]);
            i+=1;c+=1;
        }
        else if(arr2[j]<arr1[i] && unio[c]!=arr2[j]){
            unio.push_back(arr2[j]);
            j+=1;c+=1;
        }
        else i+=1;
    }
    for (int i=0;i<=c-1;i++){
        cout<<unio[i];
    }
}
void insert_two_array(){
    int n1;int n2;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<endl<<endl;
    for (int i=0;i<=n1-1;i++){
        cin>>arr1[i];
    }
    cout<<endl<<endl;
    for (int i=0;i<=n2-1;i++){
        cin>>arr2[i];
    }
    cout<<endl<<endl;
}
void insert_one_array(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}



int main(){
    

    largest_element(arr,n);
    sec_larg_element(arr,n);
    cout<< is_sorted(arr,n);
    
    union_of_array(arr1,n1,arr2,n2);
    
}