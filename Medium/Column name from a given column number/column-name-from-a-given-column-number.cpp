//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        
         string s="";
        vector<string>ans={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        while(n){
            
            long long int x=n%26;
            if(x==0){
                s=s+ans[25];
                n=n/26-1;
            }
            else{
                s=s+ans[x-1];
                n=n/26;
            }
            //n=n/26;
        }    
        reverse(s.begin(),s.end());
        return s;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends