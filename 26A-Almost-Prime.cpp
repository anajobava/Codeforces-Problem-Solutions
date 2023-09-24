#include<bits/stdc++.h>
using namespace std;

int num[3001], pfactors[3001];

int main(){
    int n, res = 0;
		cin>>n;
    for(int i = 2; i <= n; i++){
        if(num[i] == 0){
            for(int j = i+i; j <= n; j+=i){
                num[j] = 1;
                pfactors[j] += 1;
            }
        }
        if(pfactors[i] == 2) res++;
    }
    cout<<res<<endl;
    return 0;
};
