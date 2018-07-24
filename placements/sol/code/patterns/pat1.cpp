#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=i;
		int q=i;
		int def=n-1;
		for(int j=0;j<t;j++){
			cout<<q<<" ";
			q+=def;
			def-=1;
		}
		cout<<"\n";
	}
	return 0;
}

/*
#################input################ 
5

#################output###############
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 
*/
