class Solution {
public:
    bool isPalindrome(string s) {
        string cln = "";
        for(int i = 0; i < s.size(); i++){
            char curr = s[i];
            if(isalnum(curr)){
                cln += tolower(curr);
            }
        }
        int left = 0;
        int right = cln.size() - 1;
        while (left < right){
            if(cln[left] != cln[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
