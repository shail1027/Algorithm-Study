n = int(input())

dic = dict()
cnt = 0
     

for i in range(n):
    cow, bridge = map(int, input().split())

    if cow in dic and dic[cow] != bridge : 
        dic[cow] = bridge
        cnt += 1
    else :
        dic[cow] = bridge
        
print(cnt)