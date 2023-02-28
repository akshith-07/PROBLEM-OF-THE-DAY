//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int N) {
        // code here
        string temp;
        int count=0;
        for(int i=1;i<=N;i++)
        {
           temp=to_string(i);
           
           for(int i=0;i<temp.length();i++)
           {
               if(temp[i]=='4')
               {
                   count++;
                   break;
               }
           }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends