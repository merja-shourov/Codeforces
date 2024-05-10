n = int(input())
boob = list(map(int, input().split()))
buddy = list(map(int, input().split()))

ans = []
for i in range(n):
    if boob[i] not in buddy:
        ans.append(boob[i])

ans.sort(reverse=True)

for item in ans:
    print(item, end=" ")
