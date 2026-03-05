class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int count = 0;
        // int max_count=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         count++;
        //         if(count>max_count){
        //             max_count=count;
        //         }
        //     }
        //     else{
        //         count=0;
        //     }
        // }
        
      return nums[nums.size()/2];
    }
};