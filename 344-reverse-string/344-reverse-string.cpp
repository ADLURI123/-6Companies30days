class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        char a;
        for(int i=0;i<s.size()/2;i++)
        {
            a=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=a;
        }
    }
};