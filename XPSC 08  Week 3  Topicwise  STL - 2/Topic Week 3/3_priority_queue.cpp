#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(9);
    pq.push(1);
    pq.push(2);
    pq.push(1);
    pq.push(4);
    cout << "sz " << pq.size() << endl;
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // // size=======
    // cout << "sz " << pq.size() << endl;
    // // empty======
    // cout << pq.empty() << endl;
    // pq.pop();
    // if (pq.empty())
    //     cout << "empty" << endl;
    // else
    //     cout << "not empty" << endl;

    // print===========
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop() ;
    }

    return 0;
}