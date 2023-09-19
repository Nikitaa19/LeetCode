class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int r=nums.size()-1;
        while(l<r){
            int m=l+(r-l)/2;
            int c=0;
            for(const int & ele:nums){
                if(ele<=m) 
                ++c;
            }
            if(c>m)
            r=m;
            else
            l=m+1;
        }
        return l;
    }
};