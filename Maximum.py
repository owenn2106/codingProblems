def findLargestSumPair(arr, n): 
    if arr[0] > arr[1]: 
        first = arr[0] 
        second = arr[1]       
    else: 
        first = arr[1] 
        second = arr[0] 
      
    for i in range(2, n): 
        if arr[i] > first: 
            second = first 
            first = arr[i] 
        elif arr[i] > second and arr[i] != first: 
            second = arr[i] 
      
    return (first + second)

ans = []
loop = int(input())
for _ in range(loop):
    count = int(input())
    num = input()
    arr = num.split()
    arr = [int(j) for j in arr]
    n = len(arr)
    if n < count or n > count:
        print("You need to input "+str(count)+" numbers.")
    else:
        ans.append(findLargestSumPair(arr, n))

for i in range(len(ans)):
    print("Case #"+str(i+1)+": "+str(ans[i]))