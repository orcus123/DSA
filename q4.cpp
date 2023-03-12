#include<bits/stdc++.h>
using namespace std;

int main(){ 
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
    if(n != m) cout<<"Not Isomorphic";
    else{
        int hsh1[26];
        int hsh2[26];
        memset(hsh1,0,sizeof(hsh1));
        memset(hsh2,0,sizeof(hsh2));
        for(auto x : s1) hsh1[x-'a']++;
        for(auto x : s2) hsh2[x-'a']++;
        sort(hsh1,hsh1+26);
        sort(hsh2,hsh2+26);
        for(int i=0;i<26;++i){
            if(hsh1[i] != hsh2[i]){
                cout<<"Not Isomorphic";
                return 0;
            }
        }
        cout<<"Isomorphic";
    }
    return 0;
}