#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;++i) for(int j=0;j<n;++j) cin>>mat[i][j];

    for(int i=0;i<n;++i) for(int j=0;j<n/2;++j) swap(mat[i][j],mat[i][n-j-1]);
    for(int i=0;i<n;++i) for(int j=i+1;j<n;++j) swap(mat[i][j],mat[j][i]);

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}