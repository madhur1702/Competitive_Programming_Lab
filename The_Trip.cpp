#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int n;

    while (cin >> n && n != 0) {

        vector<int> a(n);
        int total = 0;

        // input expenses
        for (int i = 0; i < n; i++) {
            double x;
            cin >> x;

            a[i] = round(x * 100); // convert to cents
            total += a[i];
        }

        int avg = total / n;

        long long exchange = 0;

        for (int i = 0; i < n; i++) {

            if (a[i] < avg)
                exchange += (avg - a[i]);
        }

        cout << "$" << fixed << setprecision(2)
             << exchange / 100.0 << endl;
    }

    return 0;
}
