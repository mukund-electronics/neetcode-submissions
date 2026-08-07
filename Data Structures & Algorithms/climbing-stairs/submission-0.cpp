class Solution {
public:
    int climbStairs(int n) {
        // 1 : 1
        // 2 : 2
        // 3 : 3
        // 4 : 5
        // 5 : 8       1 1 1 1 1 1, 1 1 1 2, 1 1 2 1, 1 2 1 1, 2 1 1 1, 2 2 1, 2 1 2, 1 2 2

        // n = (n-1) + (n-2)

        map<int, int>mp;

        mp[1] = 1;
        mp[2] = 2;

        for(int i=3;i<=n; i++){
            mp[i] = mp[i-1] + mp[i-2];
        }

        return mp[n];
    }
};
