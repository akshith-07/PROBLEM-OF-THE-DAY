//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n-i;j++)
            {
                cout<<" ";
            }
             for(int k=0;k<=i;k++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
        
        for(int i=n;i>0;i--)
        {
            for(int j=n-i;j>0;j--)
            {
                cout<<" ";
            }
            for(int k=i;k>0;k--)
            {
                cout<<"* ";
            }
            
            cout<<"\n";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends