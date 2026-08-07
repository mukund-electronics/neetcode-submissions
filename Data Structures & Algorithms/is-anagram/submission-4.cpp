class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>m1;
        // map<char, int>m2;

        for(auto &m : s){
            //count<<"character : "<<m<<"\n";
            auto it = m1.find(m);
            if(it != m1.end()){
                //count<<"repeating\n";
                it->second++;
            }else{
                //count<<"first occurance\n";
                m1[m] = 1;
            }
        }
        //count<<"printing map\n";
        for(auto it : m1){
            //count<<it.first<<"::"<<it.second<<"\n";
        }

        for(auto &m : t){
            //count<<"\non m:"<<m<<"\n";
            auto it = m1.find(m);
            if(it != m1.end()){
                //count<<"item found, total count:"<<it->second<<"\n";
                if(it->second >0)
                    it->second--;
                //count<<"total count after subtraction:"<<it->second<<"\n";
                
                if(it->second == 0){
                    //count<<"erasing the key:"<<m<<"\n";
                    m1.erase(m);
                }

            }else{
                return false;
            }
        }

        //count<<"printing map\n";
        for(auto it : m1){
            //count<<it.first<<"::"<<it.second<<"\n";
        }

        if(m1.empty()){
            return true;
        }
        return false;

    }
};
