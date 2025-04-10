import sys
import heapq

input = sys.stdin.readline

x = int(input())

hip = list()

for _ in range(x) :
    temp = int(input())
    if temp == 0 :
        if len(hip) == 0 :
            print("0")
        else :
            print(heapq.heappop(hip))
    else :
        heapq.heappush(hip, temp)