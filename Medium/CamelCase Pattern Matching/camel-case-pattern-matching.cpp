//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   vector<string> CamelCase(int N, vector<string> Dictionary, string pattern) {
        vector<string> ans;
        vector<string> shortForm;
        for(auto str : Dictionary){
            string temp = "";
            for(auto it : str){
                if(it >='A' && it <='Z'){
                    temp+=it;
                }
            }
            shortForm.push_back(temp);
        }
        
        int siz = pattern.size();
        
        for(int i=0; i<shortForm.size(); i++){
            string toMatch = shortForm[i];
            if(toMatch[0] == pattern[0] && toMatch.size()>=pattern.size()){
                bool matching = true;
                for(int i=0; i<siz; i++){
                    if(pattern[i] != toMatch[i]){
                        matching = false;
                        break;
                    }
                }
                if(matching){
                    ans.push_back(Dictionary[i]);
                }
            }
        }
        
        if(ans.size()==0) return {"-1"};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends