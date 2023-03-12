#include<bits/stdc++.h>
using namespace std;

int lcs_recur(int i, int j, string s1 , string s2){
    if(i<0 || j<0) return 0;
    int ans = 0;
    ans = max(lcs_recur(i-1,j,s1,s2) , lcs_recur(i,j-1,s1,s2));
    if(s1[i] == s2[j]) ans = max(ans , lcs_recur(i-1,j-1,s1,s2) + 1);
    return ans;
}

int main(){ 
    int n,m;
    string s1 , s2;
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();

    int ans = lcs_recur(n-1,m-1,s1,s2);
    cout<<"Minimum Deletions: "<<n-ans<<endl;
    cout<<"Minimum Insertions: "<<m-ans<<endl;
    return 0;
}