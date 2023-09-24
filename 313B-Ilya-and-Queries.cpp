#include<bits/stdc++.h>
using namespace std;

string str;
int i,m,x,y,a[100005];
int main(){
		cin>>str;
		for(i = 1; i <= str.size(); i++){
            if(str[i-1] == str[i]) a[i] = a[i-1] + 1;
            else a[i] = a[i-1];
		}
    cin>>m;
		vector<int> res;
		for(i = 1; i <= m; i++){
				cin>>x>>y;
				res.push_back(a[y-1]-a[x-1]);
		}
    for(i = 0; i < res.size(); i++) cout<<res[i]<<endl;
}
