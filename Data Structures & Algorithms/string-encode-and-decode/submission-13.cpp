class Solution {
public:

    string encode(vector<string>& strs) {
        int size = strs.size();
        // cout<<"size of strs : "<<size<<endl;
        string ss;

        for(auto str:strs){
            // cout<<"\nstr :"<< str<<"";
            int len = str.size();
            // cout<<"len--"<<len<<"";
            ss +=to_string(len);
            ss += "#"+str;
            // cout<<"---ss--"<<ss;
        }

        return ss;
    }

    vector<string> decode(string s) {
        vector<string>str;
        int size = s.size();
        // cout<<"\n\n size of decode string : "<< size<<"\n";
        for(int i=0; i<size;){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            // cout<<"\nlen of str:"<<len;
            i = j+1;
            str.push_back(s.substr(i, len));
            i += len;
        }
        return str;
    }
};
