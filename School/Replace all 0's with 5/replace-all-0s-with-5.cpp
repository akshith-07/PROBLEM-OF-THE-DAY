//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
       
       
       vector<int>v;
       int temp;
       while(n!=0)
       {
          temp=n%10;
           
           if(temp==0)
           {
               temp=5;
           }
           
           v.push_back(temp);
           
           n=n/10;
     
       }
       int ans=0;
       for(int i=0;i<v.size();i++)
       {
           ans+=v[i]*pow(10,i);
       }
       
       
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends