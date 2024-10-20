c=0
s = input()
for i in s:
    if i == "4" or i == "7":
        c+=1

for i in str(c):
    if i != "4" and i != "7":
        c = 0
        break
print("NO" if c==0 else "YES")
