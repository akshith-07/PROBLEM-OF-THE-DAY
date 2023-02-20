//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends



//User function Template for C++

class Solution{   
public:
    const int mod=1e9+7;
    int add(int a,int b){
        return (a+b)%(mod);
    }
    int sub(int a,int b){
        return (mod+a-b)%(mod);
    }
    int countPaths(int N){
        // code here 
        vector<vector<int>> dp(N+1, vector<int>(4,0));
        dp[0][0]=1;
        int prevRowSum=1;
        for(int n=1;n<=N;n++){
            int currRowSum=0;
            for(int j=0;j<4;j++){
                dp[n][j]=sub(prevRowSum,dp[n-1][j]);
                currRowSum=add(currRowSum,dp[n][j]);
            }
            prevRowSum=currRowSum;
        }
        return dp[N][0];
    }
};




//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends