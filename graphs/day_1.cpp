#include <iostream>
#include <vector>
using namespace std;

void matrix_method();
int main(){
    matrix_method();

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