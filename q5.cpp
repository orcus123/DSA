#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int lo, int hi){
    while (lo<hi){
        int a = partition(arr, low, high);
        quickSort(arr, lo, a-1);
        lo = a+1;
    }
}

int main(){ 
    return 0;
}