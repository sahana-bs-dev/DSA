class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>arr(nums.size());
        int j=0;
        int k=nums.size()-1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]%2==0){
        //     swap(nums[i],nums[j]);
        //     j++;
        //     }
        // }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                arr[j] = nums[i];
                j++;
            }
            else{
                arr[k] = nums[i];
                k--;
            }
        }
       return arr; 
    }
};