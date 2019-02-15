/* Given an array of integers nums, write a method that returns the "pivot" index of this array.

We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.*/


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0;
        int right_sum = 0;
        int i;
        if(nums.size()<1){
            return -1;
        }
        
        for(i=0; i<nums.size(); i++){
            right_sum += nums[i];
        }
        for(i=0; i<nums.size(); i++){
            right_sum -=nums[i];
            if(right_sum == left_sum)
                return i;
            left_sum += nums[i];
        }
        return -1;
    }
};
