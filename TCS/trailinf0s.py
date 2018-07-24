# Python3 program to 
# count trailing 0s 
# in n!
 
# Function to return 
# trailing 0s in 
# factorial of n
def findTrailingZeros(n):
     
    # Initialize result
    count = 0
 
    # Keep dividing n by
    # powers of 5 and
    # update Count
    i=5
    while (n/i>=1):
        count += int(n/i)
        i *= 5
 
    return int(count)
 
# Driver program 
n = 100
print("Count of trailing 0s "+
    "in 100! is",findTrailingZeros(n))
 
# This code is contributed by Smitha Dinesh Semwal

