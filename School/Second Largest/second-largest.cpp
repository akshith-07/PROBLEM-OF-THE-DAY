//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution{
public:	

	int print2largest(int arr[], int n) {
	   
	    int max=INT_MIN, secondmax=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>max)
	        {
	            secondmax=max;
	            max=arr[i];
	        }
	        else if(arr[i]>secondmax && arr[i]!=max)
	        {
	            secondmax=arr[i];
	        }
	    }
	    if(secondmax<0)
	    return -1;
	    return secondmax;
	    
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends