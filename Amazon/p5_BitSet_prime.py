'''

Given two integers ‘L’ and ‘R’, write a program that finds the count of numbers having prime number of set bits in their binary representation in the range [L, R].

Input:
The first line consists of an integer T i.e number of test cases. The first and only line of each test case consists of two integers L and R. 

Output:
Print the required output.

Constraints: 
1<=T<=100
1<=L<=R<=100000

Example:
Input:
2
6 10
10 15 

Output:
4
5


'''


def is_prime(a):
    if a <2:
        return 0
    else:
        for i in range(2,a):
            if (a%i==0):
                return 0
        else:
            return 1
for i in range(int(input())):
    x,y=map(int,input().split())
    cnt=0
    for j in range(x,y+1):
        y=bin(j)
#        print(y)
        num=y.count("1")
        if is_prime(num):
            cnt+=1
    print(cnt)
