/*
Given an array of 2n integers, your task is to group these integers into n pairs of integer, 
say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
*/


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int min_sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i=i+2){
            min_sum+=nums[i];
            }
        return min_sum;
        }
   
    };
