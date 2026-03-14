class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int j=0;
        for(int i = 1; i <= nums.size(); i++){
            int found = 0;
            while(j < nums.size() && nums[j] < i){
                j++;
            }
            if(j < nums.size() && nums[j] == i){
                found = 1;
            }
            if(found == 0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};