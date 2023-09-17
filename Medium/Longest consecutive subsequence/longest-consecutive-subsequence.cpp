//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
        if(n==0)
        {
            return 0;
            
        }
        
        int longest=1;
        
        unordered_set<int>st;
        
        for(int i=0;i<n;i++)
        {
            st.insert(arr[i]);
        }
        int count;
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                count=1;
                
                int x=it;
                
                while(st.find(x+1)!=st.end())
                {
                    count++;
                    x++;
                }
                
                 longest=max(longest,count);
            }
            
           
        }
        
        return longest;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends