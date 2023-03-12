#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int lcs_recur(int i, int j, string s1 , string s2){
    if(dp[i][j] != -1) return dp[i][j];
    if(i == 0 || j == 0) return dp[i][j] = 0;
    int ans = 0;
    ans = max(lcs_recur(i-1,j,s1,s2) , lcs_recur(i,j-1,s1,s2));
    if(s1[i-1] == s2[j-1]) ans = max(ans , lcs_recur(i-1,j-1,s1,s2) + 1);
    return dp[i][j] = ans;
}

int main(){ 
    memset(dp,-1,sizeof(dp));
    int n,m;
    string s1 , s2;
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();

    lcs_recur(n,m,s1,s2);

    int i=n;
    int j=m;
    string ans = "";
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }

    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}