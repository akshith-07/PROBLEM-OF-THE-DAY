//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>ans;
        
        if(n==1)
        {
            ans.push_back(1);
            return ans;
            
        }
        
        long long i=1;
        long long j=1;
        ans.push_back(i);
        ans.push_back(j);
        
        for(int k=0;k<n-2;k++)
        {
            long long sum=i+j;
            
            ans.push_back(sum);
            
            i=j;
            j=sum;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends