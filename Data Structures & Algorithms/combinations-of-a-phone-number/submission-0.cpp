class Solution {
public:
    vector<string> result;
    string mp[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> solve(string digits, int index, string current){
        if(index >= digits.size()){
            result.push_back(current);
        }

        string letters = mp[digits[index]-'0'];

        for(char l : letters){
            current.push_back(l);    
            solve(digits, index+1, current);
            current.pop_back();
        }

        return result;
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0){
            return result;
        }

        solve(digits, 0, "");

        return result;
    }
};
