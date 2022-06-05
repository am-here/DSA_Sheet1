class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        sort(s.begin(),s.end());
        for(int i=0;i<s[0].size();i++)
        {
            if(s[0][i]==s[s.size()-1][i])
                ans+=s[0][i];
            else
                break;
        }
        return ans;
    }
};