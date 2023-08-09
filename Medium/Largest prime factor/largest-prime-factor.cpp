//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    
    // int isPrime(int N)
    // {
    //     if(N==2 )
    //     {
    //         return 1;
    //     }
    //     for(int i=2;i<=sqrt(N);i++)
    //     {
    //         if(N%i==0)
    //         {
    //             return 0;
    //         }
    //     }
        
    //     return 1;
    // }
    

    long long int largestPrimeFactor(int N){
        
        int i = 2;
        int ans = 1;
        
        while(N>1){
            if(N%i==0){
                ans = i;
                N /= i;
            }
            else i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends