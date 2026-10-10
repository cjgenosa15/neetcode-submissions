class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        int curNum, count;
        for(int i = 0; i < nums.size(); i++){
            curNum = nums[i];
            if(hashset.count(curNum)){
                return true;
            }
            hashset.insert(curNum);
        }
        return false;
    }
};