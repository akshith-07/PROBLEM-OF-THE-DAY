//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int arr[], int n, int k)
    {
    //     int min=INT_MAX;
    //     int count=0;
    //     unordered_map<int,int>map;
        
    //     for(int i=0;i<n;i++)
    //     {
    //         map[arr[i]]++;
    //     }
        
    //     for(int i=0;i<n;i++)
    //     {
    //         if(map[arr[i]]==k)
    //         {
                
    //             for(int j=i+1;j<=arr[i];j++)
    //             {
    //                 count++;
                    
    //             }
    //             if(count<min)
    //             {
    //                 min=count;
    //             }
    //         }
    //     }
        
    //     return min;
    
    vector<int>map(207,0);

        for(int i=0;i<n;i++)

        {

            map[arr[i]]++;

            if(map[arr[i]]==k)
                return arr[i];

        }

        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends