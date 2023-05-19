//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void solve(vector<vector<int>> &ranges){
        vector<vector<int>>ans;
        ans.push_back({ranges[0][0],ranges[0][1]});
        
        for(int i=1;i<ranges.size();i++){
           int first=ranges[i][0];
           int sec=ranges[i][1];
           int prev_first=ans[ans.size()-1][0];
           int prev_sec=ans[ans.size()-1][1];
           if(prev_sec>sec){
               continue;
           }else if(prev_sec>first&&prev_sec<sec){
               ans.pop_back();
               ans.push_back({prev_first,sec});
           }else{
               ans.push_back({first,sec});
           }
           
        }
        ranges=ans;
        return;
    }
    vector<int>kthSmallestNum(int n, vector<vector<int>>&ranges, int q, vector<int>queries){
        sort(ranges.begin(),ranges.end());
        solve(ranges);
        vector<int> ans;
        for(int i=0;i<q;i++){
            int k=queries[i];
            bool flag=false;
            for(auto it:ranges){
                int first=it[0];
                int sec=it[1];
                int range=sec-first+1;
                if(k<range){
                    ans.push_back(first+k-1);
                    flag=true;
                    break;
                }else if(k>range){
                    k-=range;
                }else{
                    ans.push_back(sec);
                    flag =true;
                    break;
                }
            }
            if(flag==false){
                ans.push_back(-1);    
            }
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
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends