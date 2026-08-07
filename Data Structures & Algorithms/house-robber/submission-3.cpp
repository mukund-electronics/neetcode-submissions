class Solution {
public:
    int rob(vector<int>& nums) {
        int sz = nums.size();
        if(sz==0)
            return 0;
        if(sz==1)
            return nums[0];
        int mm1 = nums[0];
        int mm2 = nums[1];
        
        map<int, int>mp1;
        mp1[0] = nums[0];
        map<int, int>mp2;
        mp2[1] = nums[1];

        cout<<"1st\n";
        for(int i=1; i<sz ; i++){
            //mp1[nums[i]] = mp1[nums[i-2]]+nums[i];
            int a = mp1[i-2]+nums[i];
            cout<<a<<" ";
            mm1 = max(mm1, a);
            mp1[i] = mm1;
            cout<<"mm1 :"<<mm1<<endl;
        }

        cout<<"2nd\n";
        for(int i=2; i<sz; i++){
            int a = mp2[i-2]+nums[i];
            cout<<a<<" ";
            mm2 = max(mm2, a);
            mp2[i] = mm2;
            cout<<"mm2 : "<<mm2<<endl;
        }

        return max(mm1, mm2);
    }
};
