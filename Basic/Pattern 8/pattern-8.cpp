//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    
	    for(int i=n;i>0;i--)
	    {
	        for(int j=n;j>i;j--)
	        {
	            cout<<" ";
	        }
	        
	        for(int k=0;k<i*2-1;k++)
	        {
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends