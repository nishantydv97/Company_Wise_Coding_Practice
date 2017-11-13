'''

Given a String of length N reverse the words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. Each case contains a string containing spaces and characters.
 

Output:
For each test case, output a single line containing the reversed String.

Constraints:
1<=T<=20
1<=Lenght of String<=2000


Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr


'''


for i in range(int(input())):
	z=input()
	z=z.split(".")
	i=len(z)-1
	k=''
	for i in range(len(z)-1,-1,-1):
		k+=z[i]+'.'
	print(k[:-1])
