#include<bits/stdc++.h>
using namespace std;
void aaa(){
	map<int,int>mp;
	int n;cin>>n;
	int fl=0;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		mp[x]++;
		if(mp[0]>=3&&mp[1]>=1&&mp[2]>=2&&mp[3]>=1&&mp[5]>=1&&fl==0) {
			fl=i;
		}
	}
	cout<<fl<<endl;

}
int main(){
	int t;cin>>t;
	while(t--) aaa();
}
