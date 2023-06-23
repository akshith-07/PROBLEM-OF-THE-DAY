//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int v[], int size)
    {
    
    // METHOD 1-HASH MAP
        
    //   unordered_map<int , int>umap;
       
    //   for(int i=0;i<size;i++)
    //   {
    //       umap[arr[i]]++;
          
    //   }
       
    //   for(auto it:umap)
    //   {
    //       if(it.second>size/2)
    //       {
    //           return it.first;
    //       }
    //   }
       
    //   return -1;
    
    //METHOD-2--->MOORE'S VOTING ALGO
    
    int count=0;
    
    int ele;
    
    
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            ele=v[i];
            count=1;
        }
        else if(v[i]==ele)
        {
            count++;
            
        }
        else
        {
            count--;
        }
    }
    
    int count1=0;
    for(int i=0;i<size;i++)
    {
        if(ele==v[i])
        {
            count1++;
        }
    }
    
    if(count1>size/2)
    {
        return ele;
    }
    
    return -1;
    
    
    
       
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends