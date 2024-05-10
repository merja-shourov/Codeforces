import math
def sqrt_x( arr ):
    ans = 0
    for i in range(len(arr)):
        root_val = int(math.sqrt(arr[i]))
        if( root_val**2 != arr[i] ):
            ans = ans+1
    return ans

        

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    print(sqrt_x(arr))