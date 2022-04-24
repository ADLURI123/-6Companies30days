// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    string fun(string a)
    {
        string res;
        vector <int> b(26,0);
        for(auto&i:a)
        {
            b[int(i-'a')]++;
        }
        for(auto&i:b)
        {
            res+=to_string(i);
            res+='#';
        }
        return res;
    }
    vector<vector<string>> groupAnagrams(vector<string>& a) 
    {
        string s;
        unordered_map <string,vector <string>> m;
        for(auto&i:a)
        {
            s=fun(i);
            if(m.find(s)==m.end())
            {
                m[s]={};
            }
            m[s].push_back(i);
        }
        vector <vector <string>> res;
        for(auto&i:m)
        {
            sort(i.second.begin(),i.second.end());
            res.push_back(i.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>s(n);
		for(auto &i: s)
			cin >> i;
		Solution obj;
		vector<vector<string>> ans = obj.groupAnagrams(s);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends