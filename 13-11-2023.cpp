//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string a, string b, int m, int n)
    {
         vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
        
        for(int i = n - 1; i > -1; i--){
            for(int j = m - 1; j > -1; j--){
                if(a[i] == b[j]){
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                    continue;
                }
                
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
        
        return n + m - dp[0][0];
        //code here
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends
