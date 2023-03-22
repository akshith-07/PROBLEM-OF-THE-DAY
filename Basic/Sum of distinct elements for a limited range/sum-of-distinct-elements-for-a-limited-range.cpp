//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	    // Your code goes here
	    
	    int sum=0;
	    
	    unordered_set<int>st;
	    
	    for(int i=0;i<n;i++)
	    {
	        st.insert(arr[i]);
	    }
	    
	    for(auto it:st)
	    {
	        sum+=it;
	    }
	    
	    return sum;
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        cout << ob.sumOfDistinct(a,n);
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends