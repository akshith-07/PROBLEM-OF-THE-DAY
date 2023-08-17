//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
vector<int> generateNextPalindrome(int num[], int n) {
    // code here
    int i=0;
    int j=n-1;
    int row,col;
    bool flag=false;
    bool check=true;
    for(int i=0;i<n;i++){
        if(num[i]!=9){
            check=false;
        }
    }
    if(check){   // if all elements in array are 9
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<n;i++){
            ans.push_back(0);
        }
        ans.push_back(1);
        return ans;
    }
    while(i<=j){
        if(num[i]==num[j] && !flag){
             if(num[i]!=9){
            flag=false;
            row=i;
            col=j;
             }
           
           
        }
        else{
            if(num[i]<num[j]){
                flag=false;
                num[j]=num[i];
                row=i;
                col=j;
            }
            else{
                num[j]=num[i];
                flag=true;
               
            }
            
        }
         i++;
          j--;
    }
    vector<int> ans(n,0);
    if(flag){
              for(int i=0;i<n;i++){
                 ans[i]=num[i];
              }
    }
    else{
        if(row==col)
          num[row]+=1;
         else{
             num[row]+=1;
             num[col]+=1;
             for(int i=row+1;i<col;i++){
                 if(num[i]==9){
                     num[i]=0;
                 }
             }
            
              }
               for(int i=0;i<n;i++){
                 ans[i]=num[i];
              }
         
    }
    return ans;
}
 
};



//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends