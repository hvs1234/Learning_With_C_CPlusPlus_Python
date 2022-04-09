a = 0
b = 1
for i in range(1,8):
    c = a+b
    print(c,end=" ")
    a,b = b,c
