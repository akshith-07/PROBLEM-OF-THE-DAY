//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int arr[], int n) {
    
   vector<int>ans;
   
   int smallest=arr[0];
   int ssmallest=INT_MAX;
   
   for(int i=1;i<n;i++)
   {
       if(arr[i]<smallest)
       {
           ssmallest=smallest;
           smallest=arr[i];
       }
       else if(arr[i]>smallest && arr[i]<ssmallest)
       {
           ssmallest=arr[i];
       }
   }
   
   ans.push_back(smallest);
   
   vector<int >temp;
   if(ssmallest==INT_MAX)
   {
       temp.push_back(-1);
       return temp;
   }
       ans.push_back(ssmallest);
   
   return ans;
}