class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        // vector<int> temp(k);
        // int j=0;
        // for(int i=0;i<k;i++){
        //     temp[i]=nums[n+i-k];
        // }
       
        // for(int i=n-1;i>=k;i--){
        //     nums[i]=nums[i-k];
        // }

        //  for(int i=0;i<k;i++){
        //     nums[i]=temp[i];
        // This is brute approach}
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
      


    }      
       
};