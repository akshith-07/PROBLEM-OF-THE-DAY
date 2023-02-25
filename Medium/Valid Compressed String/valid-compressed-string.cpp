//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
       int i=0,j=0;
        int n=S.length(),m=T.length();
        while(i<n && j<m){
            if(T[j]>='A' && T[j]<='Z'){
                if(S[i]!=T[j])  return false;
                i++;
                j++;
            }
            else{
                int ogi=i;
                int cnt=0;
                while(j<m && T[j]>='0' && T[j]<='9'){
                    cnt= (cnt*10) + (T[j]-'0');
                    j++;
                }
                j--;
                i+=cnt;
                if(i>=n){
                    if(n-ogi == cnt) return true;
                    return false;
                }
                j++;
            }
        }
        if(i>=n && j>=m)    return true;
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends