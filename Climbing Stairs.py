length = int(input())
num = input()
ans = []

list1 = num.split()
rev = list1[::-1]
if len(list1) > length or len(list1) < length:
    print("You must only input "+str(length)+" numbers of integers")
else:
    j = 1
    if j == length:
            print("Application ended.")
    else:
        for i in range(0, length):
            if rev[i] == '1':
                ans.append(i+1)
            else:
                i += 1
                j += 1
        
        u = len(ans)-1
        if u == 0:
            print(*ans, sep=" ")
        else:
            for _ in range(len(ans)):
                ans[u] = ans[u]-ans[u-1]
                if u == 1:
                    break
                else:
                    u -= 1
                
            ans = ans[::-1]
            print(*ans, sep=" ")