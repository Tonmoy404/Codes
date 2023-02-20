#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define c1 cout << "-1" << endl
using namespace std;

int main()
{
   // fast;
    cout<<"Enter first Expression: ";
    string s, s2;
    cin>>s;
    cout<<"Enter Second Expression: ";
    cin>>s2;

    int c = 0;
    char p = s[0];
    for (int i = 3; i < s.size(); ++i)
    {
        if (s[i] == p)
        {
            ++c;
            break;
        }
        while (s[i] != '|' && i < s.size())
            ++i;
    }
    if (c == 0)
        cout << s << endl;
    cout << endl;
    string sx = "";
    sx.push_back(s[0]);
    string sxp = "";
    sxp.push_back(s[0]);
    string k = "->";
    sx += k;
    sxp.push_back('^');
    sxp += k;

    for (int i = 3; i < s.size(); ++i)
    {
        if (s[i] == p)
        {
            ++i;
            while (s[i] != '|' && i < s.size())
            {
                sxp.push_back(s[i]);
                ++i;
            }
            sxp.push_back(p);
            sxp.push_back('^');
            sxp.push_back('|');
        }
        else
        {
            while (s[i] != '|' && i < s.size())
            {
                sx.push_back(s[i]);
                ++i;
            }
            sx.push_back(p);
            sx.push_back('^');
            sx.push_back('|');
        }
    }
    if (sx[sx.size() - 1] == '|')
        sx.pop_back();
    if (sxp[sxp.size() - 1] == '|')
        sxp.pop_back();
    sxp.push_back('|');
    sxp.push_back('E');
    cout << sx << endl;
    cout << sxp << endl;
    cout << endl;

    char p2 = s2[0];
    string ts = "";
    ts.push_back(p2);
    ts += k;
    if (c == 0)
    {
        for (int i = 3; i < s2.size(); ++i)
        {
            if (s2[i] == p)
            {
                ++i;
                string x = "";
                while (s2[i] != '|' && i < s2.size())
                {
                    x.push_back(s2[i]);
                    ++i;
                }
                for (ll j = 3; j < s.size(); ++j)
                {
                    if (s[j + 1] == '|')
                    {
                        ts.push_back(s[j]);
                        ts += x;
                    }
                    else
                    {
                        ts.push_back(s[j]);
                    }
                    if (j + 1 == s.size())
                        ts += x;
                }
            }
            else
            {
                while (s2[i] != '|' && i < s2.size())
                {
                    ts.push_back(s2[i]);
                    ++i;
                }
            }
            if (i < s2.size())
                ts.push_back(s2[i]);
        }
    }
    else
    {
        if (sx.size() == 3)
        {
            for (int i = 3; i < s2.size(); ++i)
            {
                if (s2[i] == p)
                {
                    ++i;
                    string x = "";
                    while (s2[i] != '|' && i < s2.size())
                    {
                        x.push_back(s2[i]);
                        ++i;
                    }
                    for (ll j = 3; j < s.size(); ++j)
                    {
                        if (s[j + 1] == '|')
                        {
                            ts.push_back(s[j]);
                            ts += x;
                        }
                        else
                        {
                            ts.push_back(s[j]);
                        }
                        if (j + 1 == s.size())
                            ts += x;
                    }
                }
                else
                {
                    while (s2[i] != '|' && i < s2.size())
                    {
                        ts.push_back(s2[i]);
                        ++i;
                    }
                }
                if (i < s2.size())
                    ts.push_back(s2[i]);
            }
        }
        else
        {
            for (int i = 3; i < s2.size(); ++i)
            {
                if (s2[i] == p)
                {
                    ++i;
                    string x = "";
                    while (s2[i] != '|' && i < s2.size())
                    {
                        x.push_back(s2[i]);
                        ++i;
                    }
                    for (ll j = 3; j < sx.size(); ++j)
                    {
                        if (sx[j + 1] == '|')
                        {
                            ts.push_back(sx[j]);
                            ts += x;
                        }
                        else
                        {
                            ts.push_back(sx[j]);
                        }
                        if (j + 1 == sx.size())
                            ts += x;
                    }
                }
                else
                {
                    while (s2[i] != '|' && i < s2.size())
                    {
                        ts.push_back(s2[i]);
                        ++i;
                    }
                }
                if (i < s2.size())
                    ts.push_back(s2[i]);
            }
        }
    }
    ll cc = 0;
    for (int i = 3; i < ts.size(); ++i)
    {
        if (ts[i] == p2)
        {
            ++cc;
            break;
        }
        while (ts[i] != '|' && i < ts.size())
            ++i;
    }
    if (cc == 0)
    {
        cout << ts << endl;
        cout << endl;
    }
    else
    {
        cout << ts << endl;
        string sx2 = "";
        sx2.push_back(ts[0]);
        string sxp2 = "";
        sxp2.push_back(ts[0]);
        sx2 += k;
        sxp2.push_back('^');
        sxp2 += k;

        for (int i = 3; i < ts.size(); ++i)
        {
            if (ts[i] == p2)
            {
                ++i;
                while (ts[i] != '|' && i < ts.size())
                {
                    sxp2.push_back(ts[i]);
                    ++i;
                }
                sxp2.push_back(p2);
                sxp2.push_back('^');
                sxp2.push_back('|');
            }
            else
            {
                while (ts[i] != '|' && i < ts.size())
                {
                    sx2.push_back(ts[i]);
                    ++i;
                }
                sx2.push_back(p2);
                sx2.push_back('^');
                sx2.push_back('|');
            }
        }
        if (sx2[sx2.size() - 1] == '|')
            sx2.pop_back();
        if (sxp2[sxp2.size() - 1] == '|')
            sxp2.pop_back();
        sxp2.push_back('|');
        sxp2.push_back('E');
        if (sx2.size() != 3)
            cout << sx2 << endl;
        cout << sxp2 << endl;
        cout << endl;
    }
    return 0;
}
