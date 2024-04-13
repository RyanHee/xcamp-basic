import math

m, n=map(int, input().split())

print(math.factorial(m+n)//(math.factorial(m)*math.factorial(n)))