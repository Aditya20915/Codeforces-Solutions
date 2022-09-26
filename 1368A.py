t = int(input())
while t:
    x = list(map(int, input().split()))
    temp = 0
    count = 0
    if x[0] > x[1]:
        n1 = x[0]
        n2 = x[1]
    else:
        n1 = x[1]
        n2 = x[0]
    while n1 <= x[2]:
        n2 += n1
        temp = n2
        n2 = n1
        n1 = temp
        count += 1
    print(count)
    t -= 1
