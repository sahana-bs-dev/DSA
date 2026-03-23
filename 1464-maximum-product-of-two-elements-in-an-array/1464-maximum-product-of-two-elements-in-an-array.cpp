class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max1=nums[nums.size()-1];
        int max2=nums[nums.size()-2];
        int product = (max1-1)*(max2-1);
        return product;
        
    }
};