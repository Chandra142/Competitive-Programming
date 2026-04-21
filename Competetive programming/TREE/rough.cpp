#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]={3,8,-7,6,3,-6,-8,9,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = INT_MIN;
    int sum = 0;
    int t = 3,i = 0, j = t-1;
    // cout<<n;
    while(j < n){
        if(i==0){
            for(int k = i; k<=j; k++){
                sum = sum + arr[k];
            }
        }
        else{
            sum = sum - arr[i-1] + arr[j];
        }
        i++;
        j++;
        ans = max(ans,sum);
    }
    cout<<ans<< " ";

}