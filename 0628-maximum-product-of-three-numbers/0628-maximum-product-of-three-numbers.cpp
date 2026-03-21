class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int product,product1;
     int length=nums.size();
     product=nums[length-1]*nums[length-2]*nums[length-3];
     product1=nums[0]*nums[1]*nums[length-1];
     return max(product,product1);
    }
};