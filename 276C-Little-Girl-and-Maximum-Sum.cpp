#include<bits/stdc++.h>
using namespace std;

long long n,m,i,x,y,sum,a[200005], b[200005];
int main(){
	cin>>n>>m;
	for(i = 0; i < n; i++) cin>>a[i];
	for(i = 1; i <= m; i++){
		cin>>x>>y;
		b[x] += 1;
		b[y+1] -= 1;
	}
	for(i = 1; i <= n; i++) b[i] += b[i-1];
	sort(a, a + n);
	sort(b + 1, b + n + 1);
	for(i = 0; i < n; i++){
		sum += a[i] * b[i+1];
	}
	cout<<sum;
}
