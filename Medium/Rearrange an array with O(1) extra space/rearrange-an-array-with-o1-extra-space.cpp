//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    
class Solution{
    public:
        void arrange(long long arr[], int n){
            int maxB=log2(100000)+1;
            for(int i=0;i<n;i++){
                int t = arr[arr[i]];
                for(int j=0;j<maxB;j++){
                    if(((t>>j)&1)==1){
                        arr[i] = arr[i] + (1LL<<(maxB+j+1));
                    }
                }
            }
            for(int i=0;i<n;i++){
                arr[i]=(arr[i]>>(maxB+1));
            }
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends