a = int(input())

def is_prime(n):
    if n%2==0:
        return False
    for i in range(3, int(n**0.5)+1, 2):
       #print(i)
        if n%i==0:
            return False
    return True

if a>=2:
    print(2, end=" ")
for i in range(3, a, 2):
    if (is_prime(i)):
        print(i, end=" ")