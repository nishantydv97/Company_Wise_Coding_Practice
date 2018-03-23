s1=input()
s2=input()
l1=len(s1)
l2=len(s2)
if l1<l2:
    l1,l2=l2,l1
    s1,s2=s2,s1
maxl=0
maxs=''
#print(s1)
#print(s2)
#print(l1)
#print(l2)
for i in range(l1):
    for j in range(l2):
        if s1[i] is s2[j]:
            i1=i
            j1=j
            t=0
            ms=''
            while(i1<l1 and j1<l2 and (s1[i1] is s2[j1])):
                ms+=s1[i1]
                t+=1
                i1+=1
                j1+=1
#                print(i1,j1)
            if t>maxl:
                maxl=t
                maxs=ms
#            print(maxs)
        
print(maxs)
print("length of the maximum comman substring are :",maxl)

'''
input 
prashant
nishant

output are 

shant
length of the maximum comman substring are : 5

'''
