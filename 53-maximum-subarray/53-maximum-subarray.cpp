class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum=0,res=nums[0];
        for(auto&i:nums)
        {
            sum+=i;
            res=max(res,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return res;
    }
};