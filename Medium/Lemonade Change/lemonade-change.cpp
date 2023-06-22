//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        
        // total coins i have 
        int five = 0 ;
        int ten = 0 ;
        int twenty = 0;
        
        for(int i = 0;i<N;i++)
        {
            if(bills[i] == 5)
            five++;
            else if(bills[i] == 10 )
            {
                ten++;
                if(five > 0)
                five--;
                else 
                return false;
            }
            else 
            {
                twenty++;
                if(five > 0 and ten>0)
                {
                    five--;
                    ten--;
                }
                else if(five > 2)
                {
                    five = five - 3;
                }
                else 
                return false;
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
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends