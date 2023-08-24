#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n,int x,int cap,int pos){
    if(n==cap) return ;
    int idx = pos-1;
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
}
int main(){
    int arr[6]={1,2,3,4,5};
    insert(arr,5,6,6,3);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}