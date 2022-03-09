#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int l = s.length();
    for (int i = 0; i < l; i += 2)
    {
        if (s[i] == '1')
        {
            cnt1++;
        }
        else if (s[i] == '2')
        {
            cnt2++;
        }
        else
        {
            cnt3++;
        }
    }

    int a = 1;
    for (int i = 0; i < l; i++)
    {

        if (i % 2 == 1)
        {
            cout << '+';
        }
        else
        {
            if (a <= cnt1)
            {
                cout << 1;
                a++;
            }
            else if (a > cnt1 && a <= cnt1 + cnt2)
            {
                cout << 2;
                a++;
            }
            else if (a > cnt1 + cnt2 && a <= cnt1 + cnt2 + cnt3)
            {
                cout << 3;
                a++;
            }
        }
    }
    cout << "\n";
    return 0;
}