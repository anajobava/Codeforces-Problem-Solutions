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

    ll arr[1000002];
    arr[0] = 0;
    
    for(int i = 1; i <= n; i++){
        int a; cin>>a;
        arr[i] += a + arr[i-1];
    }

    int k; cin>>k;
    for(int i = 1; i <= k; i++){
        int b; cin>>b;
        int index = lower_bound(arr, arr + n, b) - arr;
        cout<<index<<endl;
    }
	return 0;
}
