a=int(input())

if a==0 or a==1:
    print(1)
else:
    A=1
    A1=1
    curr=1
    while curr<a:
        x = A1
        A1 += A
        A = x
        A1=int(A1 % (1e9 + 7))
        curr+=1
    print(A1)