#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int x){
    int i;
    for(i=0;i<=n;i++){
        if(arr[i] == x) break;
        if(i==n) return;
    }
    for(int j=i;j<n-1;j++){
        arr[j] = arr[j+1];
    }
    arr[n-1]=0;
}
int main(){
    int arr[5]={1,2,3,4,5};
    insert(arr,5,3);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}