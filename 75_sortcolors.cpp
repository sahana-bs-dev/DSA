class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length = nums.size();
        for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
            
        }
        
    }
    }
};
