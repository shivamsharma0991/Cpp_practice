#include <iostream>
#include <vector>
using namespace std;

void adj_list();

void matrix_method();
int main(){
    //matrix_method();
    adj_list();
    return 0;
}

void matrix_method(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
    for (int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void adj_list(){
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        cout<<i<<"->";
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}