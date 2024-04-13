string = input()

lst=[0]*26

for c in string:
    if c=='?':
        break
    else:
        lst[ord(c)-97]+=1

for i in lst:
    print(i,end=' ')