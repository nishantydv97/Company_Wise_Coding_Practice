/*

Given a matrix of dimension r*c where each cell in the matrix can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

So, we have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. If it is impossible to rot every orange then simply return -1.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains two integers r and c, where r is the number of rows and c is the number of columns in the array a[]. Next line contains space separated r*c elements each in the array a[].

Output:
Print an integer which denotes the minimum time taken to rot all the oranges (-1 if it is impossible).

Constraints:
1 <= T <= 100
1 <= r <= 100
1 <= c <= 100
0 <= a[i] <= 2

Example:
Input:
2
3 5
2 1 0 2 1 1 0 1 2 1 1 0 0 2 1
3 5
2 1 0 2 1 0 0 1 2 1 1 0 0 2 1

Output:
2
-1

Explanation:
Testcase 1:
2 | 1 | 0 | 2 | 1
1 | 0 | 1 | 2 | 1
1 | 0 | 0 | 2 | 1

Oranges at positions {0,0}, {0, 3}, {1, 3} and {2, 3} will rot oranges at {0, 1}, {1, 0}, {0, 4}, {1, 2}, {1, 4}, {2, 4} during 1st unit time. And, during 2nd unit time, orange at {1, 0} got rotten and will rot orange at {2, 0}. Hence, total 2 unit of time is required to rot all oranges.

*/


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
int main(){
	
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		vector<vector<int>> v;
		rep(i,r){
			vector<int> vi;
			rep(j,c){
				int tmp;
				cin>>tmp;
				vi.pb(tmp);
			}
			v.pb(vi);
			vi.clear();
		}
		/*
		rep(i,r){
			rep(j,c){
				cout<<v[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		*/
		stack<pair<int,int>> stk1;
		stack<pair<int,int>> stk2;
		rep(i,r){
			rep(j,c){
				if(v[i][j]==2){
					stk1.push(mp(i,j));
				}
			}
		}
		int ans=0;
		while(!stk1.empty() || !stk2.empty()){
			if(stk1.empty()){
				while(!stk2.empty()){
					pair<int,int> p=stk2.top();
					int i,j;
					i=p.first;
					j=p.second;
					if(i-1<r && i-1>=0 && j<c && j>=0 && v[i-1][j]!=2 && v[i-1][j]!=0){
						stk1.push(mp(i-1,j));
						v[i-1][j]=2;
					}
					if(i+1<r && i+1>=0 && j<c && j>=0 && v[i+1][j]!=2 && v[i+1][j]!=0){
						stk1.push(mp(i+1,j));
						v[i+1][j]=2;
					}
					if(i<r && i>=0 && j-1<c && j-1>=0 && v[i][j-1]!=2 && v[i][j-1]!=0){
						stk1.push(mp(i,j-1));
						v[i][j-1]=2;
					}
					if(i<r && i>=0 && j+1<c && j+1>=0 && v[i][j+1]!=2 && v[i][j+1]!=0){
						stk1.push(mp(i,j+1));
						v[i][j+1]=2;
					}
					stk2.pop();
				}
			}else{
				while(!stk1.empty()){
					pair<int,int> p=stk1.top();
					int i,j;
					i=p.first;
					j=p.second;
					if(i-1<r && i-1>=0 && j<c && j>=0 && v[i-1][j]!=2 && v[i-1][j]!=0){
						stk2.push(mp(i-1,j));
						v[i-1][j]=2;
					}
					if(i+1<r && i+1>=0 && j<c && j>=0 && v[i+1][j]!=2 && v[i+1][j]!=0){
						stk2.push(mp(i+1,j));
						v[i+1][j]=2;
					}
					if(i<r && i>=0 && j-1<c && j-1>=0 && v[i][j-1]!=2 && v[i][j-1]!=0){
						stk2.push(mp(i,j-1));
						v[i][j-1]=2;
					}
					if(i<r && i>=0 && j+1<c && j+1>=0 && v[i][j+1]!=2 && v[i][j+1]!=0){
						stk2.push(mp(i,j+1));
						v[i][j+1]=2;
					}
					stk1.pop();
				}
			}
			ans++;
		}
		/*
		cout<<"\n";
		rep(i,r){
			rep(j,c){
				cout<<v[i][j]<<" ";
			}
			cout<<"\n";
		}
		*/
		//cout<<"\n";
		//cout<<"ans is "<<ans-1<<" "<<endl;
		ans--;
		rep(i,r){
			rep(j,c){
				if(v[i][j]==1){
					ans=-1;
				}
			}
		}

		cout<<ans<<"\n";
	}
	return 0;
}
