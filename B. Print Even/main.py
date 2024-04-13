lst = [int(i) for i in input().split()]


for i in range(lst[0], lst[1]+1):
  if i%2==0:
    print(i, end=" ")