//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>temp1(n,0);
        vector<int>temp2(n,0);
        temp1[0]=arr[0];
        temp2[n-1]=arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>temp1[i-1])
            {
                temp1[i]=arr[i];
            }
            else
            {
                temp1[i]=temp1[i-1];
            }
        }
       for(int i=n-2;i>=0;i--)
       {
           if(arr[i]>temp2[i+1])
           {
               temp2[i]=arr[i];
           }
           else
           {
               temp2[i]=temp2[i+1];
           }
       }
        
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(min(temp1[i],temp2[i])-arr[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends