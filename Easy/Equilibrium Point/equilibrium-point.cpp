//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++)
        {
            rsum+=arr[i];
        }
        
        for(int i=0;i<n;i++)
        {
            rsum-=arr[i];
            
            if(lsum==rsum)
            {
                return i+1;
            }
            
            lsum+=arr[i];
        }
        
        return -1;
     
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends