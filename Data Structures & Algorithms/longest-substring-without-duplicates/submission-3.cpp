class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz= s.size();

        int l =0;
        int mm=0;
        map<char, int>mp;
        for(int r=0; r<sz;r++){
           
           while(mp.find(s[r]) != mp.end()){
               mp.erase(s[l]);
               l++;
           }

           mp[s[r]] = r;
           mm = max(mm, r-l+1);
           
        }
        return mm;
    }
};
