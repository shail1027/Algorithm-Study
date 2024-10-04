dic = dict()
n = int(input())

for i in range(n) : 
    temp = int(input())

    if temp in dic :
        dic[temp] += 1
    else :
        dic[temp] = 1
        
answ = sorted(dic.items(), key = lambda x : (-x[1], x[0]))
# print(dic)
print(answ[0][0])