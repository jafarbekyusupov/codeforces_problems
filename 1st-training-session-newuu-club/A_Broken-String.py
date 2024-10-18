t = int(input())
for i in range(t):
    cnt = 0
    s = input()
    n = len(s) 
    for i in range(n//2):
        if int(s[i]) != int(s[n-1-i]):
            cnt+= int(s[i]) - int(s[n-1-i]) if int(s[i]) > int(s[n-1-i]) else int(s[n-1-i]) - int(s[i]) 
    print(cnt)
