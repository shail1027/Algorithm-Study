import sys

card = int(input())
cardL = list(map(int, sys.stdin.readline().split()))
dic = dict()

for i in cardL :
    if i in dic :
        dic[i] += 1
    else :
        dic[i] = 1
        
# print(dic)

cardI = int(input())
cardIL = list(map(int, sys.stdin.readline().split()))
for i in cardIL :
    if i in dic :
        print(dic[i], end=" ")
    else : print("0 ", end="")