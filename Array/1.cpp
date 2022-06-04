class Solution {
public:
    int findDuplicate(vector<int>& A) {
        int a=A[0],b=A[0];
        do{
            a=A[a];
            b=A[A[b]];
        }while(a!=b);
        b=A[0];
        while(a!=b){
            a=A[a];
            b=A[b];
        }
        return a;
    }
};