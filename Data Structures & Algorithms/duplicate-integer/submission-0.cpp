class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int>dict;

        for(auto num : nums){
            if(dict.find(num) != dict.end()){
                cout<<"number found in dict, means duplicate\n";
                return true;
            }
            dict[num]=1;
        }
        return false;
    }
};