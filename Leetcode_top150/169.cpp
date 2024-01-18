class Solution 
{
public:
    class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int max_c = 0;
        int ans = nums[0];
        for(int n:nums)
        {
            mp[n]++;
            if(mp[n]>max_c)
            {
                max_c = mp[n];
                ans = n;
            }
        }
        return ans;
    }
};
};