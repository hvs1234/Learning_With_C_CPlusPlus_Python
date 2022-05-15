n = int(input("Enter the last term of the pattern:"))
k = n-1
for i in range(0,n+1):
    for j in range(0,k):
        print(end=" ")
    k-=1
    for j in range(0,i+1):
        print("#",end=" ")
    print("\r")
