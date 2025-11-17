#include <bits/stdc++.h>
using namespace std;

char a[15][15];
char b[15][15];
char tmp[15][15];
char tmp2[15][15];
int n;



bool isSame()
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (b[i][j] != tmp[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
bool isSame1()
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (b[i][j] != tmp2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}



bool judge5()
{
    for (int i = 1; i <= n; i++) // 90°
    {
        for (int j = 1; j <= n; j++)
        {
            tmp2[j][n + 1 - i] = tmp[i][j];
        }
    }
    // for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout<<tmp[i][j];} cout<<"\n"; }
    bool Same = isSame1();
    if (Same)
    {
        return true;
    }
        for (int i = 1; i <= n; i++) // 90°
        {
            for (int j = 1; j <= n; j++)
            {
                tmp[j][n + 1 - i] = tmp2[i][j];
            }
        }
    Same = isSame();
    if (Same)
    {
        return true;
    }
        for (int i = 1; i <= n; i++) // 90°
        {
            for (int j = 1; j <= n; j++)
            {
                tmp[j][n + 1 - i] = tmp2[i][j];
            }
        }
    Same = isSame1();
    if (Same)
    {
        return true;
    }
    return false;
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 1; i <= n; i++) // 90°
    {
        for (int j = 1; j <= n; j++)
        {
            tmp[j][n + 1 - i] = a[i][j];
        }
    }
    // for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout<<tmp[i][j];} cout<<"\n"; }
    bool Same = isSame();
    if (Same)
    {
        cout << "1\n";
        return 0;
    }
        for (int i = 1; i <= n; i++) // 90°
        {
            for (int j = 1; j <= n; j++)
            {
                tmp2[j][n + 1 - i] = tmp[i][j];
            }
        }
    Same = isSame1();
    if (Same)
    {
        cout << "2\n";
        return 0;
    }

        for (int i = 1; i <= n; i++) // 90°
        {
            for (int j = 1; j <= n; j++)
            {
                tmp[j][n + 1 - i] = tmp2[i][j];
            }
        }
    Same = isSame();
    if (Same)
    {
        cout << "3\n";
        return 0;
    }


    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {
            tmp[i][n + 1 - j] = a[i][j];
        }
    }

    Same = isSame();
    if (Same)
    {
        cout << "4\n";
        return 0;
    }

    if(judge5())
    {
        cout<<"5\n";
        return 0;
    }

    




    bool nochange = true;
    for (int i = 1; i <= n; i++) // 90°
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                nochange = false;
                cout << "7\n";
                return 0;
            }
        }
    }
    cout << "6\n";
    return 0;
}