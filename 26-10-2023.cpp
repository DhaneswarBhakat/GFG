//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
       int ans = 0;
        
        for(int i = 0; i < 21; i++){
            if((n >> i) & 1)
                ans = i;
        }
        
        ans += __builtin_popcount(n);
        
        return ans; //code here.
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
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends
