def solve(n, fromm, dest, help):
    if n==0:
        return
    solve(n-1, fromm, help, dest)
    print(fromm+'->'+dest)
    solve(n-1, help, dest, fromm)



n=int(input())

solve(n, 'A', 'B', 'C')