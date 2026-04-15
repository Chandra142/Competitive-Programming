#include<bits/stdc++.h>
using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;
//    int nums[] = {5,4,3,1,2};
//    int k = 4;
//    for(int i = 0;i<5;i++){
//     pq.push(nums[i]);
//     if(pq.size() > k){
//         pq.pop();
//     }
//    }
//    cout<<pq.top()<<endl;
//    return 0;
// }
//size of ropes
//time complexity = O(nlog n)
//space complexity = O(n)

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    int nums[] = {1,4,5,3,2};
    for(int i = 0;i < 5;i++){
        pq.push(nums[i]);

    }
    int cost = 0;
    while(pq.size() > 1){ 
        int first = pq.top(); //ye first element hai
        pq.pop();
        int second = pq.top();
        pq.pop();
        cost = (first + second);
        pq.push(first+ second);

    }
    cout<<cost<<endl;
    return 0;


}