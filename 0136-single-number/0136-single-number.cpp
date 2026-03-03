class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    for(int i=0;i<nums.size();i++){
    //     int num = nums[i];
    //     int count = 0;
    //     for(int j=0;j<nums.size();j++){
    //         if(num==nums[j]){
    //             count++;
    //         }
    //     }
    //     if(count==1){
    //         return num;
    //     }
       
    //    } 
    //    return nums[nums.size()-1];  This is the brute force method
    int res=0;
    for(int i=0;i<nums.size();i++){
        res=res^nums[i];
    }
    return res;
    }
    
};