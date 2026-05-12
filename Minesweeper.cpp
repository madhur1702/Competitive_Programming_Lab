#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char a[100][100];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // 8 directions
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '*')
            {
                cout << "*";
            }
            else
            {
                int count = 0;

                for(int k = 0; k < 8; k++)
                {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >= 0 && ni < n && nj >= 0 && nj < m)
                    {
                        if(a[ni][nj] == '*')
                            count++;
                    }
                }

                cout << count;
            }
        }

        cout << endl;
    }

    return 0;
}
