lst = [int(i) for i in input().split()]

odd_lst=[]
even_lst=[]

for i in lst:
    if i%2==0:
        even_lst.append(i)
    else:
        odd_lst.append(i)

odd_lst.sort(reverse=True)
even_lst.sort()

for i in odd_lst:
    print(i, end=' ')
for i in even_lst:
    print(i, end=' ')