//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        int fact[11];
        fact[1] = 1;
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        for(int i = 2 ; i <= n ; i++)
        {
            fact[i] = fact[i-1] * i;
            v.push_back(i);
        }
        string ans="";
        
        while(n > 0)
        {
            int x = k/fact[n-1];
            if(k%fact[n-1] != 0)
            {
                x = x + 1;
            }
            ans+=to_string(v[x]);
            v.erase(v.begin() + x);
            k = k%fact[n-1];
            if(k == 0)
            {
                reverse(v.begin(),v.end());
                for(int i = 0 ; i < v.size() - 1 ;i++)
                {
                    ans+= to_string(v[i]);
                }
                break;
            }
            n--;
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends