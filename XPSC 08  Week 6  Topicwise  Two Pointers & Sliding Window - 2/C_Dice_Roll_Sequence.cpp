/*   Author: Encode_Hridoy  Date: 15/02/2026 [20:45:14]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //order_of_key() //find_by_order
#define fast_IO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define ld long double
#define all(v) (v).begin(),(v).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fi first 
#define se second
#define pb push_back
#define endl "\n"

/*_____________________________ Push past your Limits !! _____________________________*/
const ll infl = 1e17 + 7;
const int inf = 1e8 + 7;
const int mod = 1e9 + 7;


void Hrid_solve(){
    int n;
    
    cin >> n;
    bool f=false;
    while(n--){
        ll x;
        cin >> x;
        if(x==67) f=true;
    }

    if(f) yes;
    else no;

}



/*_______________ Hardwork beats Talent, when Talent doesn't work hard!! _______________*/
int32_t main(){
    fast_IO;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     // freopen("output.txt", "w", stdout);
    // #endif

    int tc = 1;
    cin >> tc;
    for(int kase = 1; kase <= tc; kase++){
        // cout << "Case " << kase << ": \n";
        Hrid_solve();
    }

    return 0;
}