//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++



class Solution {
  public:
    int mod=1000000007;
    int inrange(int i,int j,vector<vector<int>> & grid)
    {
        if(i==grid.size()||j==grid[0].size())
        return 0;
        
        return 1;
    }
    int solve(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp)
    {
        if(inrange(i,j,grid))
        {
            if(dp[i][j]!=-1)
            return dp[i][j];
            
            if(i==grid.size()-1&&j==grid[0].size()-1)
            return dp[i][j]=grid[i][j];
            
            if(grid[i][j]==0)
            return dp[i][j]=0;
            
            return dp[i][j]=(solve(i+1,j,grid,dp)+solve(i,j+1,grid,dp))%mod;
            
        }
        return 0;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(0,0,grid,dp);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends