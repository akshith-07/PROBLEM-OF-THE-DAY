//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	
	    void func(string &s,string &str,vector<string>&ans,vector<bool>&vis){
	        if(s.size() == str.size()){
	            ans.push_back(s);
	            return;
	        }
	        for(int i=0;i<str.size();i++){
	            if(vis[i]==false){
	                vis[i] = true;
	                s.push_back(str[i]);
	                func(s,str,ans,vis);
	                vis[i] = false;
	                s.pop_back();
	            }
	        }
	    }
	
		vector<string> find_permutation(string S)
		{
		    vector<string>ans;
		    vector<bool>vis(S.size(),false);
		    string s = "";
		    func(s,S,ans,vis);
		    set<string>st;
		    for(auto it : ans){
		        st.insert(it);
		    }
		    ans.clear();
		    for(auto it : st){
		        ans.push_back(it);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends