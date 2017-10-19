'''
Given questionn asked in Amazon placement


Given an array of distinct integers, print all the pairs having positive value and negative value of a number that exists in the array.

NOTE: If there is no such pair in the array , print "0".

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of an integer n.The next line of each test case consists of n spaced integers.

Output:
Print all the required pairs in the increasing order of their absolute numbers.

Constraints: 
1<=T<=100
1<=n<=1000
-1000<=a[i]<=1000

Example:
Input:
2
6
1 -3 2 3 6 -1
8
4 8 9 -4 1 -1 -8 -9

Output:
-1 1 -3 3 
-1 1 -4 4 -8 8 -9 9

'''
# solution are as fallows 
for t in range(int(input())):
	l=int(input())
	a=[int(i) for i in input().strip().split(" ")]
	a.sort()
	ar=[]
	for x in a:
        	if (-x in a) and (-x not in ar) and (x not in ar):
            		ar.append(x)
	if not ar:
		print(0,end=" ")
	else:
		ar.sort(reverse=True)
		for y in ar:
			print(y,-y,end=" ")
	print()
