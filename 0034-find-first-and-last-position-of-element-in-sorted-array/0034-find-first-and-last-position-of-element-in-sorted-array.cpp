class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                s.push_back(i);
            }
        }
        if(s.size()!=0){
            return {s.front(),s.back()};
        }
        return {-1,-1};
    }
};