speed = int(input())
real = []
i = 0
j = 1
for i in range(speed):
    real.extend([0,1,2])
if i % 3 == 0:
    L[i] += 7*j
    real.append(L[i])
    j += 1

print(real)