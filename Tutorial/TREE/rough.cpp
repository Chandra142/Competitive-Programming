#include <iostream>
using namespace std;

int singleNumber(int nums[], int n)
{
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (nums[i] == nums[j]){
                count++;
            }
        }
        if (count == 1){
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << singleNumber(arr, n) << endl;
    return 0;
}