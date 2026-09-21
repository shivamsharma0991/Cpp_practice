//Traversal techniques in graphs

 #include<bits/stdc++.h>
 using namespace std;

 //bfs traversal

 vector <int> bfs(int no_of_nodes,vector<int> adj_list[]){
    
    int visited_arr[no_of_nodes] ={0};
    visited_arr[0]=1;

    queue<int> q ;
    q.push(0);

    vector<int> bfs_traversal;

    while(!q.empty()){
        int node = q.front();

        q.pop();

        bfs_traversal.push_back(node);
        for(auto it: adj_list [node]){
            if (!visited_arr[it]){
                visited_arr[it]=1;
                q.push(it);    
            }
        }

    


    }
    return bfs_traversal;

    

}