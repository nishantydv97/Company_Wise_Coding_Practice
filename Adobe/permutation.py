'''program for printing all the possible permutation of the number '''

def permutation(arr,l,r):
    if(l==r):
        print(arr)
    else:
        for i in range(l,r+1):
            arr[l],arr[i]=arr[i],arr[l]
            permutation(arr,l+1,r)
            arr[l],arr[i]=arr[i],arr[l]
arr=["a","b","c"]
l=len(arr)
permutation(arr,0,l-1)
