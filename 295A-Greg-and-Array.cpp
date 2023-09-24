#include<bits/stdc++.h>
using namespace std;

long long n,m,k,i,x,y;
long long a[100005], b[100005], c[100005];
long long w[100005], q[100005], t[100005];
int main(){
	cin>>n>>m>>k;
	for(i = 1; i <= n; i++) cin>>a[i];
	for(i = 1; i <= m; i++) cin>>w[i]>>q[i]>>t[i];
	for(i = 1; i <= k; i++){
		cin>>x>>y;
		c[x] += 1;
		c[y+1] -= 1;
	}
	for(i = 1; i <= m; i++){
		c[i] += c[i-1];
		b[w[i]] += (t[i] * c[i]);
		b[q[i] + 1] -= (t[i] * c[i]);
	}
	for(i = 1; i <= n; i++){
		b[i] += b[i-1];
		cout<<a[i] + b[i] << " ";
	}
}
