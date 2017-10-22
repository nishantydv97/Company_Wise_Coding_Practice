'''
bellow questions asked in morgan stanley

Given an odd number in the form of string, the task is to make largest even number possible from the given number provided one is allowed to do only one swap operation, if no such number is possible then print the input string itself.

Examples:

Input : 1235785
Output :1535782
Swap 2 and 5.

Input:
Thr first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, the only line of the input contains an odd number in the form of string.

Output:
For each test case print the largest possible even number that could be formed by using one swap operation only.

Constraints:
1<=T<=100
1<=N<=106

Example:
Input:
3
789
536425
1356425
Output:
798
536524
1356524

'''



t = int(input())
for z in range(t):
    a = input()
    t2 = a
    k = int(a[len(a)-1])
    a = list(a)
    temp = []
    for i in range(len(a)-1):
        if(int(a[i])%2==0):
            t1 = a[i]
            a[i] = a[len(a)-1]
            a[len(a)-1]  = t1
            print(a)
            temp.append(''.join(a))
            print(temp)
            t1 = a[i]
            a[i] = a[len(a) - 1]
            a[len(a) - 1] = t1
    if(len(temp)!=0):
        print(max(temp))
    else:
        print(t2)
