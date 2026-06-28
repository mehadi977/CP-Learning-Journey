// // Nive approse
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     bool isprime = true;
//     for (int i = 2; i < n ; i++)
//     {
//         if (n % i == 0)
//         {
//             isprime = false;
//             break;
//         }
//     }
//     if (isprime)
//         cout << "Prime";
//     else
//         cout << "Not";

//     return 0;
// }

// optimal----------
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "Prime";
    else
        cout << "NO";

    return 0;
}