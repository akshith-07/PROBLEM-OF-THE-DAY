//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        
        int rev=0;
        int sum=0;
        int k=n;
        while(n)
        {
            int temp=n%10;
            sum+=temp;
            n=n/10;
        }
        int ans=sum;
        while(sum)
        {
            int temp=sum%10;
            rev=rev*10+temp;
            sum/=10;
        }
        
        if(ans==rev)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends