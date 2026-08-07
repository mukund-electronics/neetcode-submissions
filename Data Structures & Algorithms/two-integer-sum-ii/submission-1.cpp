class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz = numbers.size();
        vector<int>ans;

        int l=0;
        int r=sz-1;

        while(l<r){
            if(numbers[l]+numbers[r] > target)
                r--;
            
            if(numbers[l]+numbers[r] < target)
                l++;
            
            if(numbers[l]+numbers[r] == target)
            {
                ans.push_back(l+=1);
                ans.push_back(r+=1);
                return ans;
            }
            
        }
        return ans;
    }
};
