class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = needle.size();
        int y = haystack.size();
        if(x>y)
            return -1;
        for(int i=0;i<=y-x;i++)
        {
            if(haystack.substr(i,x)==needle)
                return i;
        }
        return -1;
    }
};