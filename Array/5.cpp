class Solution {
public:
    void moveZeroes(vector<int>& A) {
        int k = 0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i])
            {
                swap(A[i],A[k++]);
            }
        }
    }
};