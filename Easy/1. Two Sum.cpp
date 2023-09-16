class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int i=0;
        int j=nums.size()-1;
        int i1=0;
        int i2=0;
        while(i<j){
            if(v[i].first+v[j].first==target){
                i1=v[i].second;
                i2=v[j].second;
                break;
            }
            if(v[i].first+v[j].first<target)
            i++;
            if(v[i].first+v[j].first>target)
            j--;
        }
        return {i1,i2};
    }
};