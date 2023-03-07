//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        
        int i=0,j=0;
        sort(a,a+n);
        sort(b,b+m);
        int ans=0;
        set<int>st;
        while(i<n and j<m)
        {
            if(a[i]==b[j])
            {
                if(st.find(a[i])==st.end())
                {
                   st.insert(a[i]);
                    ans++;
                }
                i++;
                j++;
            }
            else if (a[i]<b[j])
            {
                i++;
            }
            else
            {
               j++;
            }
        }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends