class Solution {
	public:
	vector<int> firstNegInt(vector<int>& arr, int k) {
		// write code here
		vector<int>ans;
		queue<int>q;
		int l = 0, r = 0;
		while (r<arr.size())
			{
			if (arr[r]<0)
				q.push(arr[r]);
			if (r - l + 1 == k)
				{
				if (!q.empty())
					{
					ans.push_back(q.front());
					if (q.front() == arr[l])
						q.pop();
					
				}
				else
					ans.push_back(0);
				r++;
				l++;
			}
			else
				r++;
		}
		return ans;
	}
};
// Problem Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    return 0;
}
