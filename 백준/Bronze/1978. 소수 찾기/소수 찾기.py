import sys
import math

n = int(input()) 

lst = list(map(int, sys.stdin.readline().split())) 
cnt = 0  

for i in lst:
    if i == 2:  
        cnt += 1
    elif i > 2: 
        is_prime = True
        for j in range(2, int(math.sqrt(i)) + 1):  
            if i % j == 0: 
                is_prime = False
                break
        if is_prime:  
            cnt += 1

print(cnt)
