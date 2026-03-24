class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
    //     int max_val=*max_element(nums.begin(),nums.end());
    //     int min_val=*min_element(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]!=max_val && nums[i] != min_val){
    //             return nums[i];
    //         }
    //     }
    //    return -1; 
    if(nums.size()<3){
        return -1;
    }
    sort(nums.begin(),nums.end());
    return nums[1];
    }
};