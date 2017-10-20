'''
given questions asked in Facebook,Amazon,apple,Adobe,Ola-Cab,SAP-Lab,intuit

Given an input stream of n integers the task is to insert integers to stream and print the median of the new stream formed by each insertion of x to the stream.

Example

Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5, 15)
1 goes to stream --> median 5 (5, 15, 1)
3 goes to stream --> median 4 (5, 15, 1, 3)

Input:
The first line of input contains an integer N denoting the no of elements of the stream. Then the next N lines contains integer x denoting the no to be inserted to the stream.

Output:
For each element added to the stream print the floor of the new median in a new line.

Constraints:
1<=N<=10^5+7
1<=x<=10^5+7

Example:
Input:
4
5
15
1 
3
Output:
5
10
5
4

'''





l=[]
for i in range(int(input())):
        l.append(int(input()))
        l.sort()
        ln=len(l)
        if ln==1:
                print(l[0])
        else:
                if ln%2==0:
                        z=(ln//2)-1
                        print(int((l[z]+l[z+1])/2))
                else:
                        z=int(ln/2)
                        print(l[z])


