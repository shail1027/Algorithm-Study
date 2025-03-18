n, k = map(int, input().split())
np = 1
kp = 1
nkp = 1

for i in range(1, n+1) : 
    np *= i

for i in range(1, k+1) : 
    kp *= i
    
for i in range(1, n-k+1) : 
    nkp *= i
    
print(int(np/(nkp*kp)))