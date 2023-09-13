//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// #inlcude<bits/stdc++.h>
class Solution{
public:
    
    string findLargest(int n, int s){
        // code here
        
        if ((s == 0 and n > 1) or (s > 9 and n == 1))
            return "-1";

        string ans(n, '0');

        for (int i = 0; i < n; i++) {
            if (s >= 9) {
                ans[i] = (9 + '0');
                s -= 9;
            }
            else {
                ans[i] = (s + '0');
                s -= s;
            }
        }
        if (s != 0)
            return "-1";
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends