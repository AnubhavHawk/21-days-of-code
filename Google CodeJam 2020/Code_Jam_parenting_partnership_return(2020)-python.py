# https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9
t = int(input())
a = 0
while(t > 0):
    a += 1
    t -= 1
    n = int(input())
    v = []
    for i in range(n):
        start, finish = map(int, input().split())
        v.append((finish, start, i ))
    v.sort()
    # print(v)
    v_original = v
    Jamie = []
    Cameron = []
    remain = []
    i = 0
    Jamie.append(v[0])
    for j in range(1, n):
        if(v[j][1] >= v[i][0]):
            Jamie.append(v[j])
            i = j
        else:
            remain.append(v[j])
    i = 0
    flag = 0
    # print("now Jamies: ", Jamie)
    # print("remai: ", remain)

    if(len(remain) == 0):
        print("Case #", a, ": ",  "C"*len(Jamie), sep = '')
        continue
    Cameron.append(remain[0])
    r_len = len(remain)
    for j in range(1, r_len):
        if(remain[j][1] >= remain[i][0]):
            Cameron.append(remain[j])
            i = j
        else:
            flag = 1
            break
    if(len(Cameron) + len(Jamie) != n):
        print("Case #", a, ": IMPOSSIBLE" , sep = '')
        continue
    if(flag == 1):
        print("Case #", a, ": IMPOSSIBLE" , sep = '')
        continue
    else:
        # print("Jamie: ", Jamie)
        # print("Cameron: ",Cameron)
        ans = ""
        flag = 0
        j_len = len(Jamie)
        c_len = len(Cameron)
        for i in range(n):
            for j in range(j_len):
                if(Jamie[j][2] == i):
                    ans += "J"
                    flag = 1
                    break
            if(flag == 1):
                flag = 0
                continue
            for j in range(c_len):
                if(Cameron[j][2] == i):
                    ans += "C"
                    break
        print("Case #", a, ": ",  ans , sep = '')
