import sys

n = int(input())

for i in range(n) :
    num = int(input())
    # lst = list()
    lst = list(map(int, sys.stdin.readline().split()))
    # print(lst)
    pmax, pmin = max(lst), min(lst)
    print(pmin, end=" ")
    print(pmax)

