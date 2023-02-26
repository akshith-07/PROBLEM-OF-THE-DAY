//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        
        long long ans=pow(A,B);
        int count=0;
        while(ans>0 && count<K)
        {
            int temp=ans%10;
            count++;
            if(count==K)
            {
                return temp;
            }
            
            ans/=10;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends