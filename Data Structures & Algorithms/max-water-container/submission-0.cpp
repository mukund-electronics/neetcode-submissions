class Solution {
public:
    int maxArea(vector<int>& heights) {
        int sz = heights.size();

        int l = 0;
        int r = sz-1;
        int m = 0;
        while(l<r){
            int ll = heights[r];
            if(heights[l]<heights[r]){
                ll = heights[l];
            }
            cout<<"ll:"<<ll<<"::len:"<<r-l<<" ::  ";
            m = max(m, ll*(r-l));
            cout<<"max area : "<<m<<endl;

            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return m;
    }
};
