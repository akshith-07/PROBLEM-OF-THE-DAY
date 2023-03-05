//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        
        int index=str.size()-1;
        
        int ans=0;
        
        int base=1;
        
        for(int i=index;i>=0;i--)
        
        {
        
            int sum=str[i]-48;
            
            ans=ans+(sum*base);
            
            base=base*2;
        
        }

    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends