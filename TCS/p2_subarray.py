'''

Mathison has been playing quite a lot with some array A[] of length N

. A subarray of the given array is called funny if it starts and ends with the same number.

Your task is to find the length of the longest funny subarray of the given array.

Input
The first line of the input file contains an integer, N
, representing the number of integers in the given array.
The second line of the input file contains N space-separated integers, where the ith integer represents A[i]

.

Output
The output file should contain only one integer, the length of the longest funny subarray.

Constraints

    1≤N≤106

1≤A[i]≤105

    A subarray is a subset of consecutive elements of an array.

SAMPLE INPUT

9
2 2 3 1 2 2 3 1 1

SAMPLE OUTPUT

6

Explanation

The longest funny subarray has a length of 6. There are two possible choices: [2,2,3,1,2,2]
and [1,2,2,3,1,1].

'''



n=int(input())
a=list(map(int,input().split()))
d={}
for i in range(len(a)):
    if a[i] in d:
        d[a[i]].append(i)
    else:
        d[a[i]]=[i]
        
#print(d)
c=1
for l in d:
    lst=d[l]
    x=len(lst)
    if x==1:continue
    c=max(c,lst[x-1]-lst[0]+1)
print(c)
