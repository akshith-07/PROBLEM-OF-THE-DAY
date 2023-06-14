//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int a[], int n, int K) {
        // code here
        
         priority_queue<long long > pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        int i =1;
        long val = 0;
        while(i<=K){
            long long a = pq.top();
            val = val+a;
            pq.pop();
            pq.push(a/2);
            i++;
            
        }
        return val;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends