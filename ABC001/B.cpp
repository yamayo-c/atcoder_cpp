/*
 * B - 視程の通報
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, tmp;
    double M;
    string VV;

    cin >> m;
    M = (double)m / 1000;
    
    if (M < 0.1)
    {
        VV = "00";
    }
    else if ((0.1 <= M) && (M <= 5))
    {
        tmp = M * 10;
        if (to_string(tmp).length() < 2)
        {
            VV = "0";
        }
        VV += to_string(tmp);
    }
    else if ((6 <= M) && (M <= 30))
    {
        tmp = M;
        VV = to_string(tmp + 50);
    }
    else if ((35 <= M) && (M <= 70))
    {
        tmp = (int)((M - 30) / 5 + 80);
        VV = to_string(tmp);
    }
    else if (70 < M)
    {
        VV = "89";
    }
    else
    {
        // Nothing
    }

    cout << VV;
    cout << endl;

    return 0;
}