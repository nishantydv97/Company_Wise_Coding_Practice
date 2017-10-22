'''

Given an array of items, an i-th index element denotes the item id’s and given a number m, the task is to remove m elements such that there should be minimum distinct id’s left.Print the number of distinct id’s.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows, the three lines of the input, the first line contains N, denoting number of elements in an array,second line contains N elements/ids, and third line contains the number M.

Output:
For each test case, print the minimum number of distinct ids.

Constraints:
1<=T<=100
1<=N<=100
1<=arr[i]<=10^6
1<=M<=100

Example:
Input:
2
6
2 2 1 3 3 3
3
8
2 4 1 5 3 5 1 3
2
Output:
1
3

'''


import collections
import operator
for t in range(int(input())):
	n=int(input())
	ar=[int(i) for i in input().strip().split(" ")]
	m=int(input())
	mset = collections.Counter(ar)
	sorted_ar=sorted(mset.items(),key=operator.itemgetter(1))
	sum=0
	j=0
	while(sum<m):
		sum+=sorted_ar[j][1]
		j+=1
#	print(sorted_ar)
	print(len(sorted_ar)-j)
