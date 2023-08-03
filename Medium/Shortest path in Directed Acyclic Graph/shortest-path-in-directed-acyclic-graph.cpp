//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     void dfs(int node,vector<vector<vector<int>>>&graph,vector<int>&dist){
        for(auto it:graph[node]){
            int nextNode=it[0];
            int distance=it[1];
            if(dist[nextNode]>distance+dist[node]){
                dist[nextNode]=distance+dist[node];
                dfs(nextNode,graph,dist);
            }
        }
    }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<int>dist(N,1e9);
        dist[0]=0;
        vector<vector<vector<int>>> graph(N);
        for(auto it:edges){
            graph[it[0]].push_back({it[1],it[2]});
        }
        dfs(0,graph,dist);
        for(int i=0;i<N;i++)if(dist[i]==1e9)dist[i]=-1;
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends