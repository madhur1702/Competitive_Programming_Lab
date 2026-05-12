#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, j;

    while (cin >> i >> j)
    {
        int mx = 0;

        for (int n = min(i, j); n <= max(i, j); n++)
        {
            int x = n;
            int cnt = 1;

            while (x != 1)
            {
                if (x % 2 == 0)
                    x /= 2;
                else
                    x = 3 * x + 1;

                cnt++;
            }

            mx = max(mx, cnt);
        }

        cout << i << " " << j << " " << mx << endl;
    }

    return 0;
}
