# https://www.hackerrank.com/contests/codenigma-7/challenges/acm-icpc-team
def  countSetBits(n): 
    count = 0
    while (n): 
        count += n & 1
        n >>= 1
    return count
def acmTeam(topic):
    team_max = 0
    combi = 0
    l = len(topic)
    for i in range(l-1):
        for j in range(i+1, l):
            total = int(topic[i], 2) | int(topic[j], 2)
            bits = countSetBits(total)
            if(bits > team_max):
                combi = 1
                team_max = bits
                continue
            if( bits >= team_max):
                team_max = bits
                combi += 1
    return [team_max, combi]

arr = ['10101', '11100', '11010','00101']
print(acmTeam(arr))