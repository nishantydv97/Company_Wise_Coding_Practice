//============================================================================
// Name        : codes for first n prime number .cpp
// Author      : Nishant
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<vector>
#define ll long long int
#include<math.h>
int main() {
	int n=1000;
	int arr[n-2];
	for(int i=2,j=0;j<=n-1;j++,i++){
		arr[j]=i;
	}
	bool ar[n-2];
	for(int i=0;i<n-1;i++){
		ar[i]=true;
	}
//	int cnt=0;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-1;j++){
//			cout<<arr[j]<<" "<<arr[i]<<" "<<ar[j]<<" "<<arr[j]%arr[i]<<endl;
			if(arr[i]!=arr[j] and arr[j]%arr[i]==0 and ar[j]==true){
//				cnt+=1;
//				arr[j]=0;
				ar[j]=false;
//				cout<<"   dd   "<<endl;
			}
		}
	}
	/*
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n-1;i++){
		cout<<ar[i]<<" ";
	}
	*/
	cout<<"\n";
	for(int i=0;i<n-1;i++){
		if(ar[i]){
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl;
//	cout<<cnt<<endl;
	return 0;
}

