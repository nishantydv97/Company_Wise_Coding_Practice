'''
above questions asked in amazon Hiring Chalanges

Akash is interested in a new function F such that,

F(x) = GCD(1, x) + GCD(2, x) + ... + GCD(x, x)

where GCD is the Greatest Common Divisor.
Now, the problem is quite simple. Given an array A of size N, there are 2 types of queries:
1. C X Y : Compute the value of F( A[X] ) + F( A[X + 1] ) + F( A[X + 2] ) + .... + F( A[Y] ) (mod 10^9 + 7)
2. U X Y: Update the element of array A[X] = Y

Input:
First line of input contain integer N, size of the array.
Next line contain N space separated integers the elements of A.
Next line contain integer Q, number of queries.
Next Q lines contain one of the two queries.

Output:
For each of the first type of query, output the required sum (mod 10^9 + 7).

Constraints:
1 <= N <= 106
1 <= Q <= 105
1 <= Ai <= 5*105

For Update ,
1 <= X <= N
1 <= Y <= 5*105

For Compute ,
1 <= X <= Y <= N
SAMPLE INPUT

3
3 4 3
6
C 1 2
C 1 3
C 3 3
U 1 4
C 1 3
C 1 2

SAMPLE OUTPUT

13
18
5
21
16

Explanation

A[1] = 3, A[2] = 4, A[3] = 3
F(3) = GCD(1, 3) + GCD(2, 3) + GCD(3, 3) = 1 + 1 + 3 = 5.
F(4) = GCD(1, 4) + GCD(2, 4) + GCD(3, 4) + GCD(4, 4) = 1 + 2 + 1 + 4 = 8.

First query, the sum will be F(3) + F(4) = 5 + 8 = 13 (mod 10^9 + 7).
Second query, the sum will be F(3) + F(4) + F(3) = 5 + 8 + 5 = 18 (mod 10^9 + 7).
Third query, the sum will be F(3) = 5 (mod 10^9 + 7).
Fourth query will update A[1] = 4.
Fifth query, the sum will be F(4) + F(4) + F(3) = 8 + 8 + 5 = 21 (mod 10^9 + 7).
Sixth query, the sum will be F(4) + F(4) = 8 + 8 = 16 (mod 10^9 + 7).


'''


def gcd(a,b):
	if a==0:
		return b
	else:
		return(gcd(b%a,a))

def f(c):
	sum=0
	for i in range(1,c+1):
		sum+=gcd(i,c)
	return sum

n=int(input())
a=[int(i) for i in input().strip().split(" ")]
qn=int(input())
q=[]
for i in range(qn):
	z=input().strip().split(" ")
	q.append(z)
#print(q)
for i in range(len(q)):
	if q[i][0]=='C':
		s1=0
		for j in range(int(q[i][1]),int(q[i][2])+1):
#			print("value of j  is :",j)
			s1+=f(a[j-1])
		print(s1)
	else:
		a[int(q[i][1])-1]=int(q[i][2])
