//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        
        
        
        map<int,int>mp1;
        
        int k=groupSize;
        
        for(int i=0;i<N;i++){
            
            mp1[hand[i]]++;
            
        }
        int x,y;
        sort(hand.begin(),hand.end());
       
        for(int i=0;i<N;i++){
            
            if(mp1[hand[i]]){
                x=0;
                y=hand[i];
               while(x<k){
                   if(mp1[y])mp1[y]--;
                   else return false;
                   x++;
                   y++;
               }
                
                
            }
            
        }
        
        
        return true;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends