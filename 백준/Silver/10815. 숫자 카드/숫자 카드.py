import sys

n = int(input())
card = sys.stdin.readline().rstrip().split(" ")
m = int(input())
sang = sys.stdin.readline().rstrip().split(" ")
card = set(card)

for i in sang :
    if i in card :
        print("1", end=" ")
    else :
        print("0",end=" ")
 