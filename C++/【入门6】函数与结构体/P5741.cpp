#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int Chinese, Maths, English;
    int Sum;
};
int main()
{
    int n;
    cin >> n;
    vector<student> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].Chinese >> s[i].Maths >> s[i].English;
        s[i].Sum = s[i].Chinese + s[i].Maths + s[i].English;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(s[i].Sum - s[j].Sum) > 10)
            {
                continue;
            }
            int d1 = abs(s[i].Chinese - s[j].Chinese);
            int d2 = abs(s[i].Maths - s[j].Maths);
            int d3 = abs(s[i].English - s[j].English);
            if (d1 <= 5 && d2 <= 5 && d3 <= 5)
            {
                cout << s[i].name << " " << s[j].name << "\n";
            }
        }
    }
    return 0;
}