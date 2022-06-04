class Solution {
public:
    int minMoves(vector<int>& A) {
        sort(A.begin(),A.end());
        int ans = 0;
        for(int i=1;i<A.size();i++)
            ans+=A[i]-A[0];
        return ans;
    }
};