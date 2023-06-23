//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=i+1;j++)
            {
                cout<<j<<" ";
            }
            for(int k=n*2-2;k>2*i;k--)
            {
                cout<<"  ";
            }
            
            for(int m=i+1;m>0;m--)
            {
                cout<<m<<" ";
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