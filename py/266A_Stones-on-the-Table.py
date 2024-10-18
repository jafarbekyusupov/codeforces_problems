n=int(input())
s = input()
p = s[0]
c = 0
for i in s:
    if i == p:
        c+=1
    p = i
print(c-1)
