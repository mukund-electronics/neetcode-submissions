class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>dict;
        vector<int>ans;

        for(int i=0; i<nums.size();i++){
            if(!dict.empty()){
                auto it = dict.find(nums[i]);
                if(it != dict.end()){
                    cout<<"target found\n";
                    ans.push_back(it->second);
                    ans.push_back(i);
                    return ans;
                }
            }
            dict[target-nums[i]] = i;
        }
        return ans;
    }
};
