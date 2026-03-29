#include <bits/stdc++.h>
using namespace std;

int main() {
    string key = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
    unordered_map<char, char> mp;
    for(int i=1;i<key.size();i++)
    {
        mp[key[i]] = key[i-1];
    }
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {

        if(s[i] == ' ')
        {
            cout<<" ";
        }else{
            cout<<mp[s[i]];
        }
    }
    return 0;
}
