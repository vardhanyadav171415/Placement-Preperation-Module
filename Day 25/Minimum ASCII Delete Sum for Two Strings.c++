class Solution {
public:

    int getsum(string s,int n){
        int sum=0,x;
        for(int i=0;i<=n;i++){
            x=s[i];
            sum+=x;
        }
        return sum;
    }

    int solve(string &s1,string &s2,int n,int m,vector<vector<int>>&dp){
        if(n==-1) return getsum(s2,m);
        if(m==-1)  return getsum(s1,n);
        
        if(dp[n][m]!=-1) return dp[n][m];
     
        if(s1[n]==s2[m]) return dp[n][m]=solve(s1,s2,n-1,m-1,dp);
        else{
            int x=s1[n];
            int y=s2[m];
            return dp[n][m]=min(x+solve(s1,s2,n-1,m,dp),y+solve(s1,s2,n,m-1,dp));
        }  
    }

    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size()-1,m=s2.size()-1;
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size(),-1));
        return solve(s1,s2,n,m,dp);
    }
};