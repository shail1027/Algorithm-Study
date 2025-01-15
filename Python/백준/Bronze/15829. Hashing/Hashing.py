from string import ascii_lowercase
import math

alpha = dict()
cnt = 1

for i in ascii_lowercase:
    alpha[i] = cnt
    cnt += 1

r = 31
M = 1234567891

n = int(input())
a = list(input())

value = 0
cnt = 0

for i in a:
    v = alpha[i]

    ri = int(math.pow(r, cnt))

    value += v * ri
    cnt += 1

print(value % M)
