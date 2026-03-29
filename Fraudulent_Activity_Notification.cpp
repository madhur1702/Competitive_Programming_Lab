// Madhur Bhandarkar
// FRAUDULENT ACTIVITY NOTIFICATION

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d; // n = number of days, d = trailing days

    vector<int> a(n);

    // input expenditures
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0; // cnt of notifications

    // start checking from day d
    for(int i = d; i < n; i++)
    {
        vector<int> temp;

        // take last d days data
        for(int j = i - d; j < i; j++)
        {
            temp.push_back(a[j]);
        }

        // sorting
        sort(temp.begin(), temp.end());

        double median;

        // for odd number
        if(d % 2 == 1)
        {
            median = temp[d / 2];
        }
        else
        {
            //for even number
            // average of two middle elements
            median = (double)(temp[d / 2] + temp[d / 2 - 1]) / 2;
        }

        // check notification condition
        if(a[i] >= 2 * median)
        {
            cnt++;
        }
    }

    // output
    cout << cnt << endl;

    return 0;
}
