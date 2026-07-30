#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mxn = 40;
    vector<int> Allprime;
    vector<bool> prime(mxn + 1, true);
    for (int i = 2; i*i <= mxn; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= mxn; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= mxn; i++)
    {
        if (prime[i])
            Allprime.push_back(i);
    }
    for (int i = 0; i <11; i++)
    {
        cout << Allprime[i] << " ";
    }

    return 0;
}