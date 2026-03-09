class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
    //     long long num=0;
    //     for(int i=0;i<digits.size();i++){
    //         num=num*10+digits[i];
    //     }
    //     long long n = num+1;
    //     vector<int> arr;

    //     while(n > 0){
    //     arr.push_back(n% 10);
    //      n = n / 10;
    // }
    // reverse(arr.begin(), arr.end());
    // return arr;

    for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    
 }
};