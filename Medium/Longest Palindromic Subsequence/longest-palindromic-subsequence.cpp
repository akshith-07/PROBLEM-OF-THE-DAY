//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
  int solve(string A,int i,int j){
      if(i>j)return 0;
      if(i==j)return 1;
      if(dp[i][j]!=-1)return dp[i][j];
      if(A[i]==A[j]){
          return dp[i][j] =2+solve(A,i+1,j-1);
      }
      else{
          return dp[i][j] = max(solve(A,i+1,j), solve(A,i,j-1));
      }
  }
    int longestPalinSubseq(string A) {
        //code here
        int n=A.size();
        memset(dp, -1, sizeof(dp));
        // dp.resize(n, vector<int>(n, -1));
        return solve(A,0,n-1);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends