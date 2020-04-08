def good_string(s, l , r):
    freq = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    count = 0
    l = l - 1
    r = r - 1
    # print("first", s[l], s[r])
    for i in s[l: r]:
        v = ord(i)
        if(v>= 65 and v <= 90):
            freq[v - 65] += 1
            continue
        if(v >= 97 and v <= 122):
            freq[v - 97] += 1
            continue
    # print("before: ", freq)
    while(r - l >= 10):
        # print("while loop", l, r)
        v1 = ord(s[r])
        v2 = ord(s[l])
        l += 1
        # print(freq)
        if(v1>= 65 and v1 <= 90):
            freq[v1 - 65] += 1
        if(v2 >= 65 and v2 <= 90):
            freq[v2 - 65] -= 1
        if(v1 >= 97 and v1 <= 122):
            freq[v1 - 97] += 1
        if(v2 >= 97 and v2 <= 122):
            freq[v2 - 97] -= 1
        for i in "HackerEarth":
            v = ord(i)
            if(v>= 65 and v <= 90):
                freq[v - 65] -= 1
                continue
            if(v >= 97 and v <= 122):
                freq[v - 97] -= 1
                continue
        for i in range(26):
            if(freq[i] < 0):
                break
        count += 1
    return count
s = input()
n = int(input())
for i in range(n):
    l, r = map(int, input().split())
    count = good_string(s, l, r)
    print(count)