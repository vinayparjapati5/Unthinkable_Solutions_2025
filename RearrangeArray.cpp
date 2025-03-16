#include <bits/stdc++.h> 
void rearrangeArray(vector<int>& nums){
    // write your code here

    int n = nums.size();

    for(int i=1; i<n; i++){
        if(i%2==0){
            if(nums[i]<nums[i-1]){
                swap(nums[i],nums[i-1]);
            }
        }
        else if(nums[i]>nums[i-1]){
            swap(nums[i],nums[i-1]);
        }
    }
}
