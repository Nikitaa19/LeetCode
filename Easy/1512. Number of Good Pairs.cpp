class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     int n=nums.size(), cnt=0;
       unordered_map<int, int> mp;
       for(auto & it : nums)
       mp[it]++;
       for(auto & pair : mp){
           n=pair.second;
           cnt+=((n)*(n-1))/2;
       } 
       return cnt;
    }
};