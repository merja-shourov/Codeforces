str1 = "amaama"
str2 = "khokho"

def pelindrome(str):
    start = 0
    last = len(str)-1

    flag = 1
    while (start <= last ):
        if( str[start] != str[last] ):
            flag = 0
            break
        start = start+1
        last = last-1
    
    if flag:
        return True
    else:
        return False
    
def symmetrical(str):
    flag = 1
    if( len(str) % 2 ):
        mid = len(str)//2 + 1
    else:
        mid = len(str)//2

    start1 = 0
    start2 = mid

    while start1 < mid and start2 < len(str):
        if( str[start1] == str[start2] ):
            start1 = start1 + 1
            start2 = start2 + 1
        else:
            flag = 0
            break
    if flag:
        return True
    else:
        return False





