#include<bits/stdc++.h>
using namespace std;

int heap[10];
int indexx = 1;
int cnt = 0;
void swim(){
    int k = indexx-1;
    while(k>1 && heap[k/2] > heap[k]){
        int temp = heap[k/2];
        heap[k/2] = heap[k];
        heap[k] = temp;
        k = k/2;
    }
}
void addtoheap(int val){
    heap[indexx] = val;
    cnt++;
    indexx++;
    swim();
}
// void sink(int k){
//     while(2*k < indexx){
//         int j = 2*k;
//         if(j+1 < indexx && heap[j+1])
//     }
// }
// int extractMin(){
//     int value = heap[1];
//     int temp = heap[1];
//     heap[1] = heap[indexx-1];
//     heap[indexx-1] = temp;
// }

int main(){
    int nums[] = {4,3,1,5,0};
    for(int i = 0; i<5; i++){
        addtoheap(nums[i]);
    }
    for(int i = 1; i<=5; i++){
        cout<<heap[i]<<" ";
    }
    return 0; 
      
}