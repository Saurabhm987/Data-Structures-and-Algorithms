/* In a given integer array nums, there is always exactly one largest element.

Find whether the largest element in the array is at least twice as much as every other number in the array.

If it is, return the index of the largest element, otherwise return -1. */


class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        int i=0;
        int len;    
        vector<int> new_nums;
        
        new_nums = nums;
        sort(new_nums.begin(), new_nums.end());
        len = new_nums.size();
        
        if(len<=1){
            return 0;
        }
        
            if (new_nums[len-1] < (2 * new_nums[len-2])){
                return -1;
            }
            
            else{
                for (i = 0; i < len; i++){
                    if(new_nums[len-1] == nums[i]){
                        return i;
            } 
        }
          
    }   
        return 0;
    } 
};
