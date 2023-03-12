//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
     vector<int> findMaxRow(vector<vector<int>>arr, int n) {
        //code here
        int pos = 0, c = 0, i = 0, j = n-1;

        

        while(i < n && j >= 0)

        {

            if(arr[i][j])
                pos = i;

            

            while(j >= 0 && arr[i][j])

            {

                j--;

            }

            

            c = n-j-1;

            i += 1;

        }

        

        return {pos, c};
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends