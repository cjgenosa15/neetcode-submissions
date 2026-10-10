class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>score;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                score.push_back(accumulate(score.begin(), score.end(), 0));
            }
            else if(operations[i] == "C"){
                score.pop_back();
            }
            else if(operations[i] == "D"){
                score.push_back(2 * score.back());
            }
            else{
                score.push_back(stoi(operations[i]));
            }
        }
        return(accumulate(score.begin(), score.end(), 0));
    }
};