#include<bits/stdc++.h>
using namespace std;
struct Queue{
    int size=0,cap;
    int *arr;
    Queue(int c){
        cap = c;
        arr = new int[cap];
    }
    bool isFull(){
        return cap==size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(int x){
        if(isFull()) return;
        arr[size] = x;
        size++;
    }
    void deque(){
        if(isEmpty()) return ;
        for(int i=0;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
    int getFront(){
        return arr[0];
    }
    int getRear(){
        return arr[size-1];
    }
};
int main()
{
    
    return 0;
}