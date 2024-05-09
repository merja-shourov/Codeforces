

for _ in range( int(input()) ):
        n = int(input())
        word = input()

        unique_char = list(set(word)) # {} -> []
        length = len(unique_char)

        result = length* 2 + ( n- length )
        print(result)
