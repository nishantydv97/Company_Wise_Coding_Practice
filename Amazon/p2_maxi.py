'''
this question asked in Amazon and TCS

Rahul and Ankit are the only two waiters in Royal Restaurant. Today, the restaurant received N orders. The amount of tips may differ when handled by different waiters, if Rahul takes the ith order, he would be tipped Ai rupees and if Ankit takes this order, the tip would be Bi rupees.
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than X orders and Ankit cannot take more than Y orders. It is guaranteed that X + Y is greater than or equal to N, which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.


Input:

•    The first line contains one integer, number of test cases.
•    The second line contains three integers N, X, Y.
•    The third line contains N integers. The ith integer represents Ai.
•    The fourth line contains N integers. The ith integer represents Bi.

 

Output:
Print a single integer representing the maximum tip money they would receive.
 

Constraints:
1 ≤ N ≤ 105
1 ≤ X, Y ≤ N; X + Y ≥ N
1 ≤ Ai, Bi ≤ 104

 

Example:

Input:

2
5 3 3
1 2 3 4 5
5 4 3 2 1
8 4 4
1 4 3 2 7 5 9 6 
1 2 3 6 5 4 9 8

 

Output:

21
43

'''

t=int(input())

for i in range(t):
	n,x,y=list(map(int,input().split()))
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))
	a=a[:n]
	b=b[:n]
	#print type(x)
	sum=0
	d=[abs(m-n) for m,n in zip(a,b)]
	#print d
	a1=[x1 for _,x1 in sorted(zip(d,zip(a,b)),reverse=True)]
	#print a1
	for i in a1:
			if i[0]>i[1]:
				if(x>0):
					sum=sum+i[0]
					x=x-1
				else:
					sum=sum+i[1]
					y=y-1
					continue;
			else:
				if(y>0):
					sum=sum+i[1]
					y=y-1
				else:
					sum=sum+i[0]
					x=x-1

	print (sum)
