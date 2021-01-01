loop = int(input())
ans = []
for u in range(loop):
    num = int(input())
    L = []
    for _ in range(num):
        n = input().split()
        L.extend(n)

    L = [int(k) for k in L]
    for j in range(num):
        add = []
        i = 0
        i += j
        for _ in range(num):
            add.append(L[i])
            i = i + num

        j += 1
        
        if i == num:
            break

        ans.append(sum(add))
print(ans)   