class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int>div;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0){
                div.push_back(i);
            }
        }
        for(int i=0;i<div.size();i++){
            sum = sum+div[i];
        }
       return sum; 
    }
};