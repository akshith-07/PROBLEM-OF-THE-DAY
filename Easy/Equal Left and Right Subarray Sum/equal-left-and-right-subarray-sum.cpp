//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        
         long long sum = 0 ; 
       long long half =0;
       if(N == 1)
        return 1;
      
       for(int i = N-1 ; i>=0  ; i--)
       {
           sum = sum+A[i];
       }
       
       sum -= A[N-1];
       half+=A[N-1];
       
       for(int i = N-2 ; i>=0 ; i--)
       {
           sum-=A[i];
            if(sum == half)
            return i+1;
           
           half+=A[i];
          
       }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends