n = int(input())
arr = list(map(int, input().split()))
x = int(input())

if x not in arr:
    print(-1)
else:
    for i in range(n):
        if( arr[i] == x ):
            print(i)
            break

    