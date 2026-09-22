#include<iostream>
#include<bits//stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min =i;
        for (int j=i;j<=n-1;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        swap(arr[i],arr[min]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_sort(int arr[],int n){
    int is_swap = 0;
    for(int i=0;i<=n-1;i++){
        for (int j=0;j<=n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                is_swap=1;
            }
            // for(int i=0;i<n;i++){
            //         cout<<arr[i]<<" ";
            //}
//                cout<<endl;
        }
//        cout<<endl;
        if(is_swap==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void insertion_sort(int arr[],int n){
    for (int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



void merge(int arr[],int low,int mid,int high){
    //here we try to keep the pointers of left nad right;
    
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if (arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
        }
    while(right<=high){
            temp.push_back(arr[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}

int merge_sort(int arr[],int low,int high){
    if (low>=high){return 0;}

    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}

int fun(int arr[],int low,int high){
    int pivat=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        //we are finding greater then pivat
        while(i<=high && arr[i]<=pivat ){
            i++;
        }
        //we are finding smaller than and equal to pivat
        while(j>=low && arr[j]>pivat ){//imp
            j--;
        }
        if(i<j){swap(arr[i],arr[j]);}
    }
    //now we are swaping the piwat to the last low element so that the pivat will go to its correct position
    swap(arr[low],arr[j]);

    return j ;
}
// int fun(int arr[], int low, int high) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i < j) {

//         // Move i till element > pivot
//         while (i <= high && arr[i] <= pivot) i++;

//         // Move j till element <= pivot
//         while (j >= low && arr[j] > pivot) j--;

//         if (i < j) swap(arr[i], arr[j]);
//     }

//     // Place pivot in correct position
//     swap(arr[low], arr[j]);

//     return j;
// }



void quick_sort(int arr[],int low,int high){
    if (low<high){

        int part_index=fun(arr,low,high);

        quick_sort(arr,low,part_index-1);
        quick_sort(arr,part_index+1,high);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}