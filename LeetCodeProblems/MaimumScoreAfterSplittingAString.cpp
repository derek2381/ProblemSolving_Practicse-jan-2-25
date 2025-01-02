// ProblemLink
// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/?envType=daily-question&envId=2025-01-01


// Source Code

class Solution {
public:
    int maxScore(string s) {
        int z = 0, o = 0;

        for(char i : s){
            if(i != '0'){
                o++;
            }
        }

        int res = 0;

        for(int i = 0;i < s.length()-1;i++){
            char c = s[i];
            if(c == '0'){
                z++;
            }else{
                o--;
            }

            res = max(res,z+o);
        }
        

        return res;


    }
};