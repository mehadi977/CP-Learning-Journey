// Problem Link:
// ekta container jekhane duita data type er valu eksathe rakha jai
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pair<string, int> student = make_pair("sakib", 19);
    student = {"rakib", 11};

    cout << student.first << " " << student.second << endl;
    
    student.first = "sojib";

    auto [name, roll] = student;
    // name="ff";
    cout << name << " " << roll << endl;
    return 0;
}
