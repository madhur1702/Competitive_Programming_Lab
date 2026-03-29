// MADHUR BHANDARKAR
// SHOEMAKER'S PROBLEM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of tc

    while (t--)
    {
        int n;
        cin >> n; // number of jobs

        vector<int> fine(n), time(n);
        vector<int> index(n);

        // input time,fine and store original index (1-based)
        for (int i = 0; i < n; i++)
        {
            cin >> time[i];
            cin >> fine[i];
            index[i] = i + 1;
        }

        vector<double> ratio(n); // stores fine/time ratio

        // calculate ratio for each job
        for (int i = 0; i < n; i++)
        {
            ratio[i] = (double)fine[i] / time[i];
        }

        //Sorting
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // sort by higher ratio first
                // if ratios are equal, smaller index comes first
                if (ratio[i] < ratio[j] || 
                   (ratio[i] == ratio[j] && index[i] > index[j]))
                {
                    swap(ratio[i], ratio[j]);
                    swap(fine[i], fine[j]);
                    swap(time[i], time[j]);
                    swap(index[i], index[j]);
                }
            }
        }

        // output the job order
        for (int i = 0; i < n; i++)
        {
            cout << index[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
