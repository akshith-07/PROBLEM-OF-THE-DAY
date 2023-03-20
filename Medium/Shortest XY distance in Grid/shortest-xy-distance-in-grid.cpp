//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        // code here
        
         queue<pair< pair<int, int>, int >> q;
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 'X')
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }
        
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            
            int x = node.first.first;
            int y = node.first.second;
            int dist = node.second;
            
            if(grid[x][y] == 'Y')
            {
                return dist;
            }
            
            for(int dir=0; dir<4; dir++)
            {
                int newX = x + dx[dir];
                int newY = y + dy[dir];
                
                
                if(newX >= 0 and newY>=0 and newX < n and newY < m and vis[newX][newY]==false)
                {
                    q.push({{newX, newY}, dist+1});
                    vis[newX][newY] = true;
                }
                
            }
            
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends