#include <bits/stdc++.h>
using namespace std;
void solution(string s)
{
    map<char,int> mp;
    for(auto i: s)
    {
        if(i!=32)
        mp[i]++;
    }
    for(auto i: mp)
    {
        if(i.second > 1)
        cout << i.first << ", count = " << i.second << endl;
    }
}
int main()
{
    string s;
    getline (cin, s);
    solution(s);
    return 0;
}