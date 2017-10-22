/*

Given 3 characters a, b, c. Find the number of strings of length n that can be formed from these 3 characters. Given that : we can use ‘a’ as many times as we want, ‘b’ maximum once, and ‘c’ maximum twice.

Input:
The first line of input contains an integer T denoting the number of test cases. The first and last line of each test case consists of an integer n. 

Output:
Print the total number of string that can be formed.

Constraints: 
1<=T<=20
1<=N<=20

Example:
Input:
2
3
5

Output:
19
71 

*/

#include<iostream>
using namespace std;

int cntstr(int ,int ,int);
// Driver code
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout << cntstr(n, 1, 2)<<endl;
        }
        // Total number of characters

    return 0;
}
int cntstr(int n, int bcnt, int ccnt)
{
    // Base cases
    if (bcnt < 0 || ccnt < 0) return 0;
    if (n == 0) return 1;
    if (bcnt == 0 && ccnt == 0) return 1;

    // Three cases, we choose, a or b or c
    // In all three cases n decreases by 1.
    int res = cntstr(n-1, bcnt, ccnt);
    res += cntstr(n-1, bcnt-1, ccnt);
    res += cntstr(n-1, bcnt, ccnt-1);

    return res;
}

