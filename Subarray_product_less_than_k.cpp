class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) 
    {
        int sum =0,n=a.size(),i=0,j=0,prod=1;
        while(i<=j&&j<a.size())
        {
            prod=prod*a[j];
            if(prod<k)
            {
                sum+=(j-i+1);
                j++;
            }
            else
            {
                while(prod>=k&&i<j)
                {
                    prod=prod/a[i];
                    i++;
                }
                if(i==j)
                {
                    if(a[i]<k)
                    {
                        sum++;
                    }
                    j++;
                }
                else
                {
                    sum+=(j-i+1);
                    j++;
                }
            }
            
        }
        return sum;
    }
};