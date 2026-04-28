class Solution {
public:
    int minStartValue(vector<int>& nums) {
    //     int sum = 0;
    //     int min_sum = 0;
    //     for(int i=0;i<nums.size();i++){
    //         sum+=nums[i];
    //         if(sum<min_sum){
    //             min_sum = sum;
    //         }
    //     }

    //   return 1-(min_sum);  
    int startvalue =1 ;
    
    while(true){
    int sum = startvalue;
    int flag=1;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum<1){
            flag=0;
            break;
        }
    }
    if(flag==1){
     return startvalue;
    }
    
    startvalue++;
}
    }
};