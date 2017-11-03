/*

Mathison has discovered an old piece of paper with N integers written on it. Let's call this given sequence of numbers A[]. In his History class, Mathison has learnt that a trio of numbers is special if and only if their sum is divisible by a mythical constant M

.

Mathison tries to find out how many distinct triplets of numbers, from the piece of paper, have their sum divisible by M

. Unfortunately, this problem is quite hard to crack and he needs your help.

Input
The first line of the input file contains two space-separated integers, N
and M, representing the number of integers and the mythical constant.
The next line contains N space-separated integers, where the ith integer represents A[i]

.

Output
The output file should contain only one integer, the answer to Mathison's question.

Constraints

    1≤N≤2×105

1≤M≤104
0≤A[i]≤2×109

SAMPLE INPUT

10 5
1 10 4 3 2 5 0 1 9 5

SAMPLE OUTPUT

26

Explanation

There are 26 special trios: (0, 1, 2); (0, 1, 8); (0, 2, 5); (0, 2, 6); (0, 2, 9); (0, 3, 7); (0, 5, 8); (0, 6, 8); (0, 8, 9); (1, 2, 7); (1, 3, 4); (1, 5, 6); (1, 5, 9); (1, 6, 9); (1, 7, 8); (2, 4, 8); (2, 5, 7); (2, 6, 7); (2, 7, 9); (3, 4, 5); (3, 4, 6); (3, 4, 9); (5, 6, 9); (5, 7, 8); (6, 7, 8); (7, 8, 9);

Note: Here we only show the positions (0-indexed) in each trio.


*/


//============================================================================
// Name        : try.cpp
// Author      : Nishant
// Version     :
// Copyright   : public
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
#define ll long long
using namespace std;
int div1(ll num,ll mi){
	if(num%mi==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	ll n,m;
	ll cnt=0;
	cin>>n>>m;
	long long a[n];
	for(ll i =0;i<n;i++){
	    cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<n;j++){
			for(ll k=j+1;k<n;k++){
				ll sum=a[i]+a[j]+a[k];
				if(div1(sum,m))
					cnt++;
//					cout<<a[i]<<a[j]<<a[k]<<endl;
			}
		}
	}
	cout<<cnt;
	return 0;
}

