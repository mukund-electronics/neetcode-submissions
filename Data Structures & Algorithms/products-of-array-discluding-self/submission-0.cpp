class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>right;
        vector<int>left;
        vector<int>ans;

        int sz = nums.size();
        cout<<"size:"<<sz<<endl;
        for(int i=0; i<sz-1; i++){
            int m = nums[i+1];
            for(int j=i+2; j<sz; j++){
                m = m*nums[j];
            }
            // cout<<m<<" ";
            right.push_back(m);
        }
        right.push_back(1);
        for(auto it : right){
            cout<<it<<",";
        }
        cout<<endl;

        left.push_back(1);
        for(int i=1; i<sz; i++){
            int m = nums[0];
            for(int j=1; j<i; j++){
                m = m*nums[j];
            }
            // cout<<m<<" ";
            left.push_back(m);
        }
        for(auto it : left){
            cout<<it<<",";
        }
        cout<<endl;

        for(int i=0; i<sz ;i++){
            int mm = right[i]*left[i];
            cout<<mm<<" ";
            ans.push_back(mm);
        }


        return ans;
    }
};
