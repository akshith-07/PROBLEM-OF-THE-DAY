//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.findNthTerm(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static int findNthTerm(int N) {
        // code here
        if(N==1)
        {
            return 1;
        }
        int sum=1;
        for(int i=2;i<=N;i++)
        {
            sum+=i;
        }
        
        return sum;
    }
};