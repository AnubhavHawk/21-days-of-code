# https://www.hackerearth.com/challenges/competitive/march-circuits-20/algorithm/dislikes-and-party-567b9605/
n = int(input())
dislikes = set()
for i in range(10):
    pairs = list()
    for id in range(10):
        pairs.append(int(input()))
        # print("current pair: ", pairs)
        for j in range(1, len(pairs)):
            a = frozenset([i+1, pairs[j]])
            # print("value: ", a)
            dislikes.add(a)
            # print("now set: ", dislikes)

total = (n * (n-1))>>1
print(total - len(dislikes))