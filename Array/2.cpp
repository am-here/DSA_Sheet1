class Solution {
public:
    void sortColors(vector<int>& A) {
        int z=0,o=0;
        for(auto i: A)
        {
            if(i==0)
                z++;
            else if(i==1)
                o++;
        }
        for(int i=0;i<A.size();i++)
        {
            if(z)
            {
                A[i]=0;
                z--;
            }
            else if(o)
            {
                A[i]=1;
                o--;
            }
            else
                A[i]=2;
        }
    }
};