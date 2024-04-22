

for _ in range(int(input())):
    n = int(input())

    rem = n % 7 
    last_dig_n = n%10

    if n%7 == 0 :
        print(n)
    elif (last_dig_n + (7-rem)) < 10 : 
        print( n+(7-rem) )
    else:
        print(n-rem)