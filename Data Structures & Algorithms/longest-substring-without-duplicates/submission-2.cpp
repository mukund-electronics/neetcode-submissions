class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>mp;

        int l=0;
        int m=0;
        for(int r=0; r<s.size(); r++){
            cout<<"on char : "<<s[r]<<" :: ";
            // auto it = mp.find(s[r]);
            while(mp.find(s[r]) != mp.end()){
                cout<<"repeating char found :"<< s[r]<<", shift left window\n";
                mp.erase(s[l]);
                l++;
            }
            mp[s[r]]= r;
            
            cout<<"l:"<<l<<"::r:"<<r<<" :: ";
            m = max(m, (r-l)+1);
            cout<<"max : "<<m<<endl;
        }
        return m;
    }
};
