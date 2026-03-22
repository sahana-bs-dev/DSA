class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>rev(nums.size());
        sort(nums.begin(),nums.end());
        int k = nums[0];
        int n = nums[nums.size()-1];
        vector<int>result;
        int j=0;
        for(int i=k;i<=n;i++){
            if(j<nums.size() && nums[j]==i){
                j++;
            }
            else{
                result.push_back(i);
            }
        }
      return result;  
    }
};