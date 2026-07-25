#include<bits/stdc++.h>
using namespace std;

long long t, n;

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		long long sumI = 0;
		for (int i = 0; i < n; i++) {
			long long inp = 0;
			cin >> inp;
			sumI += inp;
		}
		cout << sumI - (long long)(n - 1) << endl;
	}
}