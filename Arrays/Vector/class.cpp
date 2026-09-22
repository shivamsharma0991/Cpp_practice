#include<bits/stdc++.h>
using namespace std;

int sqRoot(int n){
    int i = 1;
    while (i * i <= n)
        i++;
    return i - 1;
}

int missNo(int n,int arr[]){
    int s=(n*(n-1))/2;
    int arrs=0;
    for (int i=0;i<n;i++){
        arrs+=arr[i];
    }
    return s-arrs;
}

int pro(int arr[],int n){
    int c=abs(arr[0]);
    for (int i=1;i<=n;i++){
        if (abs(arr[i])>c){
            c=arr[i];
        }
    }
    int d=abs(arr[0]);
    for (int i=1;i<=n;i++){
        if (abs(arr[i])>c && arr[i]<c){
            d=arr[i];
        }
    }
    return c*d;
}

