import sys

def conv(n, m):
    for i in range(n-1, m):
        if state[i] == 0: state[i] = 1
        else : state[i] = 0
        
n, m = map(int, input().split())
state = list(map(int, sys.stdin.readline().split()))

for i in range(m):
    f, a, b = map(int, input().split())
    if f == 1 :
        state[a-1] = b
    
    if f == 3 :
        state[a-1:b] = [0]*(b-a+1)
    if f == 4:
        state[a-1:b] = [1]*(b-a+1)
    
    if f == 2 :
        conv(a, b)
    
for _ in state :
    print(_, end=" ")
        
        

    