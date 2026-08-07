class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>dt;
        vector<int>ans;
        for(auto num:nums)
            dt[num]++;

        for(auto d:dt){
            cout<<d.first<<" :: "<<d.second<<endl;
        }

        priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
        >qu;

        for(auto &d:dt){
            qu.push({d.second, d.first});

            if(qu.size()>k)
                qu.pop();
        }

        while(!qu.empty())
        {
            ans.push_back(qu.top().second);
            qu.pop();
        }

        return ans;
    }
};
