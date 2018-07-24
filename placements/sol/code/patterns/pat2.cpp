#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<i;k++) cout<<" ";
		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	for(int i=n-1;i>=1;i--){
		for(int k=1;k<i;k++) cout<<" ";
		for(int j=i;j<=n;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}


/*
###########################input########################   
7
###########################output#######################
1 2 3 4 5 6 7 
 2 3 4 5 6 7 
  3 4 5 6 7 
   4 5 6 7 
    5 6 7 
     6 7 
      7 
     6 7 
    5 6 7 
   4 5 6 7 
  3 4 5 6 7 
 2 3 4 5 6 7 
1 2 3 4 5 6 7 
*/
