/*
 * C - 風力観測
 */

#include <bits/stdc++.h>
#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

using namespace std;

string OutDir(int deg);
int OutW(int dis);

int main()
{
    int Deg, Dis;
    int W;
    cin >> Deg >> Dis;
    string Dir;

    // 風向
    Deg *= 10;
    Dir = OutDir(Deg);

    // 風力
    if ((W = OutW(Dis)) == 0)
    {
        Dir = "C";
    }

    cout << Dir << " " << W;
    cout << endl;

    return 0;
}

string OutDir(int deg)
{
    string Dir;

    if ((1125 <= deg) && (deg < 3375))
    {
        Dir = "NNE";
    }
    else if ((3375 <= deg) && (deg < 5625))
    {
        Dir = "NE";
    }
    else if ((5625 <= deg) && (deg < 7875))
    {
        Dir = "ENE";
    }
    else if ((7875 <= deg) && (deg < 10125))
    {
        Dir = "E";
    }
    else if ((10125 <= deg) && (deg < 12375))
    {
        Dir = "ESE";
    }
    else if ((12375 <= deg) && (deg < 14625))
    {
        Dir = "SE";
    }
    else if ((14625 <= deg) && (deg < 16875))
    {
        Dir = "SSE";
    }
    else if ((16875 <= deg) && (deg < 19125))
    {
        Dir = "S";
    }
    else if ((19125 <= deg) && (deg < 21375))
    {
        Dir = "SSW";
    }
    else if ((21375 <= deg) && (deg < 23625))
    {
        Dir = "SW";
    }
    else if ((23625 <= deg) && (deg < 25875))
    {
        Dir = "WSW";
    }
    else if ((25875 <= deg) && (deg < 28125))
    {
        Dir = "W";
    }
    else if ((28125 <= deg) && (deg < 30375))
    {
        Dir = "WNW";
    }
    else if ((30375 <= deg) && (deg < 32625))
    {
        Dir = "NW";
    }
    else if ((32625 <= deg) && (deg < 34875))
    {
        Dir = "NNW";
    }
    else
    {
        Dir = "N";
    }

    return Dir;
}

int OutW(int dis)
{
    int W = 12;
    int w[] = {0, 15, 93, 201, 327, 477, 645, 831, 1029, 1245, 1467, 1707, 1959};

    for (int i = 0; i < SIZE_OF_ARRAY(w) - 1; i++)
    {
        if ((w[i] <= dis) && (dis < w[i + 1]))
        {
            W = i;
        }
    }

    return W;
}