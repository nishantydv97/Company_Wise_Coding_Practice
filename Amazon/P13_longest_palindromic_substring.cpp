#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb(x) push_back(x)
#define sz(x) ((int)(x).size())
#define rep(i, n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(ll i=(a);i<(b);i++)
#define all(x) (x).begin(), (x).end()
#define ldb ldouble

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<db, db> pdd;

void print_dp(vector<vector<int>>& dp){
	for(auto i : dp){
		for(auto j : i){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

void pre_process_dp(vector<vector<int>>& dp, string s, pair<int,int>& p){
	for(int i=0;i<dp.size();i++){
		dp[i][i]=1;
	}
	for(int i=1;i<dp.size();i++){
		if(s[i]==s[i-1]){
			dp[i-1][i]=1;
			p=make_pair(i-1,i);
		}else{
			dp[i-1][i]=0;
		}
	}
}

int main(){
	
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		vector<vector<int>> dp(n, vector<int>(n, 0));
		//print_dp(dp);
		pair<int,int> p;
		pre_process_dp(dp,s,p);
		//cout<<"\n";
		//print_dp(dp);
		int ans=1;
		
		FOR(i,2,n){
			int j,k;
			j=i;
			k=0;
			
			while(j<n){
				if(dp[k+1][j-1]==1 && s[k]==s[j]){
					dp[k][j]=1;
					if(abs(k-j)>ans){
						p=make_pair(k,j);
						ans=abs(j-k);
					}
				}else{
					dp[k][j]=0;
				}
				j++;
				k++;
			}
			
		}
		//cout<<"\n";
		//print_dp(dp);
		//cout<<"\n";
		cout<<"ans is "<<ans+1<<endl;
		FOR(i,p.first,p.second+1){
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
		
}
