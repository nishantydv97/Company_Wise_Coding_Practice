'''

You are in a party of N people, where only one person is known to everyone. Such a person may be present in the party, if yes, (s)he doesn’t know anyone in the party. Your task is to find the stranger (celebrity) in party.

Input:
The first line of input contains an element T denoting the number of test cases. Then T test cases follow. Each test case consist of 2 lines. The first line of each test case contains a number denoting the size of the matrix M. Then in the next line are space separated values of the matrix M.

Output:
For each test case output will be the id of the celebrity if present (0 based index). Else -1 will be printed.

User Task:
You will be given a square matrix M[][] where if an element of row i and column j  is set to 1 it means ith person knows jth person. You need to complete the function getId() which finds the id of the celebrity if present else return -1. The function getId() takes two arguments, the square matrix M and its size N.

Note: 
M[i][i] will be equal to zero always.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 50
2 <= N <= 501
0 <= M[][] <= 1

Example:
Input :
2
3
0 1 0 0 0 0 0 1 0
2
0 1 1 0
Output :
1
-1

Explanation :
Testcase 1:
For the above test case the matrix will look like
0 1 0 
0 0 0
0 1 0
Here,  the celebrity is the person with index 1 ie id 1
Testcase 2:
The matrix will look like
0 1
1 0
Here, there is no such person who is a celebrity (a celebrity should know no one).

'''

#User function Template for python3
'''
Function Arguments :
		@param  :m (boolean matrix of size n*n), n(no of rows and cols )
		@return : Integer
'''
def getId(m,n):
    i=0
    j=len(m)-1
    while(i<=j):
        #print(i,j)
        if(m[i][j]):
            i+=1
        else:
            j-=1
    f1=1
    for k in range(n):
        if(m[i][k]):
            f1=0
    f2=1
    for k in range(n):
        if(k==i):
            if(m[k][i]):
                f2=0
        else:
            if(m[k][i]==0):
                f2=0
    if(f1&f2):
        return i
    else:
        return -1
    # code here



#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

#Contributed by :Nagendra Jha

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        a = list(map(int,input().strip().split()))
        k = 0
        m = []
        for i in range(n):
            row = []
            for j in range(n):
                row.append(a[k])
                k+=1
            m.append(row)
        print(getId(m,n))
# } Driver Code Ends
