class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto num:nums){
            st.insert(num);
        }

        int ans = 0;
        for(auto num : st){
            cout<<"num:"<<num<<"\n";
            int len = 1;
            if(st.find(num-1) == st.end()){
                // int len = 0;
                while(st.find(num+1) != st.end()){
                    len++;
                    num++;
                }
            }
            ans = max(ans, len);
        }

        return ans;
    }
};
