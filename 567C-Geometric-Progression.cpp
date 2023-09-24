#include<bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define YES cout <<"YES\n"
#define NO cout << "NO\n"
#define debug cout << "Here Fine" << endl ;
#define mod(M, a) (M+(a%M))%M
using namespace std;
ll M = 1000000007;

int main(){
	flash;

	int n; cin>>n;
    int k; cin>>k;

    ll ans = 0;
    ll vect[200005];

    map<ll, ll> rightmap, leftmap;

    for(int i = 1; i <= n; i++){
        cin>>vect[i];
        rightmap[vect[i]]++;
    }

    leftmap[vect[1]]++; rightmap[vect[1]]--;
    for(int i = 2; i < n; i++){
        rightmap[vect[i]]--;
        if(vect[i] % k == 0) ans += leftmap[vect[i] / k] * rightmap[vect[i] * k];
        leftmap[vect[i]]++;
    }
    cout<<ans;
	return 0;
}
