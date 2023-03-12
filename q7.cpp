#include<bits/stdc++.h>
using namespace std;

int ans = 1;
void fact(int n){
    if(n == 0) return;
    ans *= n;
    fact(n-1);
}

int main(){ 
    fact(4);
    cout<<ans;
    return 0;
}