'''

For a given array find out the GCD of the array.

Input:
First line of input contains the number of test cases 'T'. First line of test case contain an the size 'N' of array. Second line of test cases contain the array elements.


Output:
Find GCD and print it in seperate line. 


Constraints:
1 <= T <= 32
1 <= N <= 20
1 <= Arr[i] <= 100


Example:
Input:
1
2
5 10

Output:
5

'''

def gcd(n,m):
	if n==0:
		return m
	else:
		return gcd(m%n,n)
for i in range(int(input())):
	n=int(input())
	z=[int(i) for i in input().strip().split(" ")]
	res=z[0]
	for i in range(1,len(z)):
		res=gcd(res,z[i])
	print(res)
