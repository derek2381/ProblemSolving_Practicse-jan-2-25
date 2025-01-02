// problem link
// https://leetcode.com/problems/count-vowel-strings-in-ranges/description/?envType=daily-question&envId=2025-01-02


// Source Code
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> arr(n+1, 0);
        vector<int> res;
        set<char> st = {'a','e','i','o','u'};

        for(int i = 0;i < n;i++){
            string str = words[i];
            if(st.find(str[0]) != st.end() && st.find(str[str.length()-1]) != st.end()){
                arr[i+1] += arr[i]+1;
            }else{
                arr[i+1] += arr[i];
            }
        }

        for(int i : arr){
            cout << i << " ";
        }

        for(vector<int> i : queries){
            int s = i[0];
            int e = i[1];

            res.push_back(arr[e+1]-arr[s]);
        }

        return res;


        
    }
};