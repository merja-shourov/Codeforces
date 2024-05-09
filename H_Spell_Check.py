
for _ in range(int(input())):
    n = int(input())
    user_name = input()
    real_name = "Timur"

    if( n != 5 ):
        print("NO")
    else:
        if( set(user_name) == set(real_name) ):
            print("YES")
        else:
            print("NO")