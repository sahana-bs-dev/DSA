class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>counts;
        for(int i=0;i<arr.size();i++){
            int count = 0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            for(int k=0;k<counts.size();k++){
                if(counts[k]==count){
                if(arr[i] != arr[k]){
                    return false;
                }
                }
            }
            counts.push_back(count);
        }
        return true;
    }
};