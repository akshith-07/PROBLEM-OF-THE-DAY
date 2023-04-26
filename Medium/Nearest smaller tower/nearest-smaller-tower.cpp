//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
          int n = arr.size();
        vector<int>a(n,-1);
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
           
             while(st.empty()!=true&&st.top().first>=arr[i])
            {
                st.pop();
            }
             if(st.empty()==true)
            {
                st.push({arr[i],i});
                continue;
            }
            if(st.top().first<arr[i])
            {
                a[i] = st.top().second;
            }
            st.push({arr[i],i});
        }
        while(st.empty()!=true)
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
          
            while(st.empty()!=true&&st.top().first>=arr[i])
            {
                st.pop();
            }
               if(st.empty()==true)
            {
                st.push({arr[i],i});
                continue;
            }
            if(st.top().first<arr[i])
            {
                if(a[i]==-1)
                {
                     a[i] = st.top().second;
                }
                else
                {
                int b = abs(i-a[i]);
                int c = abs(i-st.top().second);
                if(c==b)
                {
                    if(arr[a[i]]>st.top().first)
                    {
                         a[i] = st.top().second;
                    }
                }
                else if(b>c)
                {
                     a[i] = st.top().second;
                }
                }
            }
            st.push({arr[i],i});
            
        }
        return a ;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends