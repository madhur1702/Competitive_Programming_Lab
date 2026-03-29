#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> st;
    string s;
    //the quick brown fox jumps over the lazy dog
    //the five boxing wizards jump quickly
    getline(cin,s);
    for(char c : s)
    {
        if(c!=' ')
        {

            c = tolower(c);
            st.insert(c);
        }
    }

    if(st.size() == 26)
    {

        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
/*
//for printing missing character
    string a = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char,int> st;
    string s;
    set<char> stt;
    getline(cin,s);
    for(char c : a)
    {

        st[c] = 0;
    }
    for(char c : s)
    {

        if(c!=' ')
        {

            c = tolower(c);
            st[c]++;
            stt.insert(c);
        }
    }
    if(stt.size() == 26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
        cout<<"missing numbers:";
        for(auto it : st)
        {

            if(it.second == 0)
            {

                cout<<it.first;
            }
        }
    }
*/
    return 0;
}
