class Solution{
    public:
    long long dp[20002][6];
    long long M=1e9+7;
    long long mod(long long x){
        return (x%M+M)%M;
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
    int solve(int i, int prev, int n){
        if(i>=n)
        return 1;
        if(dp[i][prev]!=-1)
        return dp[i][prev];
        int ans=0;
        if(i==0){
            for(int k=0;k<5;k++){
                ans=add(ans, solve(i+1, k, n));
            }
        }
        else{
            if(prev==0)
            ans=add(ans, solve(i+1, 1, n));
            else if(prev==1){
                ans=add(ans, solve(i+1, 0, n));
                ans=add(ans, solve(i+1, 2, n));
            }
            else if(prev==2){
                for(int k=0;k<5;++k)
                if(k!=2)
                ans=add(ans, solve(i+1, k, n));
            }
            else if(prev==3){
                ans=add(ans, solve(i+1, 2, n));
                ans=add(ans, solve(i+1, 4, n));
            }
            else if(prev==4)
            ans=add(ans, solve(i+1, 0, n));
        }
        return dp[i][prev]=ans;
    }
    int countVowelPermutation(int n){
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, n);
    }
};