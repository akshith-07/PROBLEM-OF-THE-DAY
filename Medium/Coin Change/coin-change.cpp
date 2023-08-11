//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int amount) {

        // code here.
        vector<long long> dp(amount+1, 0);
        dp[0]=1;//1 comb: no coins for no amount 
        for(long long int c=0;c<N;c++){
            for(long long int i=1; i<=amount; i++)
                if (i-coins[c]>=0)
                    dp[i]+=dp[i-coins[c]];
        }
        return dp[amount]; 
    }
 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends