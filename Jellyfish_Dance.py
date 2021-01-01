day = int(input())
views = input()
views = views.split()
views = [int(j) for j in views]
n = len(views)
ans = []
if n < day or n > day:
    print("You need to input "+str(day)+" numbers.")
else:
    friend = int(input())
    for _ in range(friend):
        num = input()
        num = num.split()
        num = [int(k) for k in num]
        if len(num) < 2 or len(num) > 2:
            print("You need to input 2 numbers.")
        else:
            if num[0] == num[1]:
                ans.append(views[num[0]-1])
            else:
                add = sum(views[num[0]-1:num[1]])
                ans.append(add)

for i in range(friend):
    print("Case #"+str(i+1)+": "+str(ans[i]))