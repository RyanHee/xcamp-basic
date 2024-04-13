n, m = map(int, input().split())

mat = []
for a in range(n):
    lst = [int(i) for i in input().split()]
    mat.append(lst)

output = 0
for i in range(n - 1):
    for j in range(m - 1):
        a = mat[i][j]
        if a == mat[i + 1][j]:
            output += 1
        if a == mat[i][j + 1]:
            output += 1

for i in range(n - 1):
    if mat[i][m - 1] == mat[i + 1][m - 1]:
        output += 1

for i in range(m - 1):
    if mat[n - 1][i] == mat[n - 1][i + 1]:
        output += 1
print(output)
