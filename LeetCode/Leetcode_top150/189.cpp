class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        //cout<<k<<endl;
        vector<int> save1;
        vector<int> save2;
        for(int i=0;i<len-k;i++)
        {
            save1.push_back(nums[i]);
        }
        for(int i=len-k;i<len;i++)
        {
            save2.push_back(nums[i]);
        }
        for(int i=0;i<k;i++)
        {
            nums[i] = save2[i];
        }
        for(int i=k;i<len;i++)
        {
            nums[i] = save1[i-k];
        }
    }
};