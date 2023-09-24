#include<bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define YES cout <<"YES\n"
#define NO cout << "NO\n"
#define debug cout << "Here Fine" << endl ;
#define mod(M, a) (M+(a%M))%M
using namespace std;
ll M = 1000000007;

int capacity[200001], current[200001];

void solve(set<int>& notFull){
	int n; cin>>n;
	if(n == 1){
		int a; cin>>a; a--;
		int b; cin>>b;
		auto it = notFull.lower_bound(a);
		while(b > 0){
			if(it == notFull.end()) break;
			else{
				if(b >= capacity[*it] - current[*it]){
					b = b - (capacity[*it] - current[*it]);
					current[*it] = capacity[*it];
					it = notFull.erase(it++);
				} else {
					current[*it] += b;
					b = 0;
				}
			}
		}
	}
	if(n == 2){
		int a; cin>>a;
		a--;
		cout<<current[a]<<endl;
	}
}

int main(){
	flash;
	int n; cin>>n;

	for(int i = 0; i < n; i++){
		cin>>capacity[i];
	}

	set<int> notFull;
	for(int i = 0; i < n; i++){
		notFull.insert(i);
	}

	int t = 1;
	cin>>t;
	while(t--){
		solve(notFull);
	}
	return 0;
}
