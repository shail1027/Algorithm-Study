import sys

n = int(input())
lst = list()

for i in range(n) :
    temp = list()
    temp = input().split()
    temp[0] = int(temp[0])
    lst.append(temp)

lst.sort(key = lambda x : x[0])

for j in lst :
    print(j[0], j[1])