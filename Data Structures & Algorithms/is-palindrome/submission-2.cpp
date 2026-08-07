class Solution {
public:
    bool isPalindrome(string s) {
        int sz = s.size();
        cout<<"size:"<<sz<<endl;

        int l = 0;
        int r = sz-1;
        cout<<"l:"<<l<<" : r:"<<r<<endl;

        while(l<r){
            cout<<"\nleft :"<<s[l]<<" : right: "<<s[r];
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l]) != tolower(s[r])){
                cout<<" :: fail";
                return false;
            }
            l++;
            r--;
            cout<<" :: pass";
        }

        return true;

    }
};
