# https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/0000000000209a9f
t = int(input())
a = 0
while(t > 0):
    a += 1
    t -= 1
    s = input()
    ans = ''
    l = len(s)
    for i in range(l):
        if(s[i] == '0' and i == 0):
            ans += '0'
            continue
        if(int(s[i]) != 0 and s[i] >s[i-1] and i != 0):
            ans += '('*(int(s[i]) - int(s[i-1]))+s[i]
        if(i == 0 and s[i] != '0'):
            ans += '('*int(s[i])+s[i]
        elif(s[i] < s[i-1]):
            ans += ')'*(int(s[i-1]) - int(s[i]))+s[i]
        elif(s[i] == s[i-1]):
            ans += s[i]
    if(ans[-1] != ')'):
        ans += ')'*int(ans[-1])
    print("Case #",a,": ", ans, sep='')