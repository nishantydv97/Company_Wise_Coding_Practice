/*

Given an integer n, you need to print the following pattern pattern.

n=4
      Output :
       4444444
       4333334
       4322234
       4321234
       4322234
       4333334
       4444444

n=3
        Output :
         33333
         32223
         32123
         32223
         33333


*/




//============================================================================
// Name        : patt.cpp
// Author      : Nishant
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int mat[n - 1][2 * n - 1];
		for (int i = 0; i <  n ; i++) {
			int num = 0;
			int flag1 = i, flag2 = i, out = n;
			while (flag1 > 0) {
				cout << out--;
				mat[i][num] = out + 1;
				num += 1;
				flag1 -= 1;
			}
			int z = 2 * n - 2 * i - 2;
			while (z > 0) {
				cout << out;
				mat[i][num] = out;
				num += 1;
				z -= 1;
			}
			while (flag2 >= 0) {
				cout << out++;
				mat[i][num] = out - 1;
				num += 1;
				flag2 -= 1;
			}
			cout << "\n";
		}
		for (int i = n-1; i >=0; i--) {
			for (int j = 0; j < 2 * n - 1; j++) {
				cout << mat[i][j];
			}
			cout << "\n";
		}
	}
	return 0;
}
