# https://www.hackerrank.com/contests/codenigma-7/challenges/reduced-string
def superReducedString(s):
    s = list(s)
    i = 0
    while(i < len(s)-1):
        if(s[i] == s[i+1]):
            del(s[i])
            del(s[i])
            i = 0
        else: 
            i+=1
    ans = ''
    for i in range(len(s)):
        ans += s[i]
    if(ans == ''):
        return "Empty String"
    return ans
print(superReducedString('baab'))