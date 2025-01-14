import math

n, m = map(int, input().split())
lst = [x for x in range(n, m+1)]
# print(lst)
for i in lst : 
    if i == 2 :
        print(i)
    
    elif i > 2 : 
        isPrime = True
        for j in range(2, int(math.sqrt(i))+1) :
            if i % j == 0 :
                isPrime = False
                break
        
        if isPrime : 
            print(i)