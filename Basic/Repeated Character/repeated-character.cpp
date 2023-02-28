//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        
        for(int i=0;i<s.size();i++)
        {
            int count=0;
            
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                
                if(count>0)
                {
                    return s[i];
                }
            }
        }
        
        return '#';
        
        // unordered_map<string,int>mp;
        
        // for(int i=0;i<s.size();i++)
        // {
        //     mp[s[i]]++;
        // }
        
        // for(int i=0;i<s.size();i++)
        // {
        //     if(mp[i]>1)
        //     {
        //         return s[i];
        //     }
        // }
        
        // return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends