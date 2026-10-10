class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int>s_freq;
        unordered_map<char, int>t_freq;
        char curChar;
        for(int i = 0; i < s.size(); i++){
            curChar = s[i];
            s_freq[curChar]++;
        }
        for(int i = 0; i < t.size(); i++){
            curChar = t[i];
            t_freq[curChar]++;
        }
        if(s_freq == t_freq){
            return true;
        }
        return false;
    }
};
