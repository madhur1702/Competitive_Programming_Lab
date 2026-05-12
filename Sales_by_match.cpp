#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }

    int pairs = 0;

    for(auto it : mp)
    {
        pairs += it.second / 2;
    }

    cout << pairs;

    return 0;
}
