//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        
          int n=s.size();
        
            for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
            {
                if(s[i]=='?'&&s[j]=='?') continue;
                else if(s[i]!='?'&&s[j]=='?') s[j]=s[i];
                else if(s[i]=='?'&&s[j]!='?') s[i]=s[j];
                else if(s[i]!='?'&&s[j]!='?') 
                {
                    if(s[i]==s[j]) continue;
                    else return -1;
                }
                    
            }
            
            int sum=0;
            int prev=-1;
            for(int i=0;i<n;i++)
            {
              if(s[i]!='?')
              {
                  if(prev==-1)
                  prev=i;
                  else
                  {
                      sum+=abs(s[i]-s[prev]);
                      prev=i;
                  }
                  
              }
            }
            return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends