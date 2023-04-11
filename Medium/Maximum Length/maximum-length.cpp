//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
         if(a==b && b==c){
            return a+b+c;
            
        }
        int A = max(a,max(b,c));
        int B = min(a,min(b,c));
        int C = a+b+c-A-B;
        if(A%2==0 && (A/2 )>= (B+C)+2){
            return -1;
        }
        else if(A%2!=0 && (A/2)+1>=(B+C)+2){
            return -1;
        }
        return a+b+c;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends