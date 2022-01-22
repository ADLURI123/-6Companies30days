class Solution {
public:
    int maxProfit(vector<int>& a) 
    {
        int res=0,b=INT_MAX;
        for(int i=0;i<a.size();i++)
        {
            res=max(res,a[i]-b);
            b=min(b,a[i]);
        }
        return res;
    }
};