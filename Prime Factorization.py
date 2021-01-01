import sys,math
def factorize(n):
    def isPrime(n):
        return not [x for x in range(2,int(math.sqrt(n))+1)
                    if n%x == 0]
    primes = []
    candidates = range(2, int(n+1))
    candidate = 2
    while not primes and candidate in candidates:
        if n%candidate == 0 and isPrime(candidate):
            primes = primes + [candidate] + factorize(n/candidate)
        candidate += 1            
    return primes

def condense(L):
  prime,count,list=0,0,[]
  for x in L:
    if x == prime:
      count = count + 1
    else:
      if prime != 0:
        list = list + [str(prime) + ' ^ ' + str(count)]
      prime,count=x,1
  list = list + [str(prime) + ' ^ ' + str(count)]
  return list

T = int(input())
num = []
for _ in range(T):
   N = int(input())
   num.append(N)

for i in range(len(num)):
   ans = condense(factorize(num[i]))
   print("Cases #"+str(i+1), end=": ")
   print(*ans, sep=" * ")
