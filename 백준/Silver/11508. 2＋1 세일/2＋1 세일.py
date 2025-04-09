n = int(input())
lst = list()

for _ in range(n) :
    temp = int(input())
    lst.append(temp)

lst.sort(reverse=True)
total = 0

for i in range(n) :
    if (i+1) % 3 == 0 :
        continue
    else :
        total += lst[i]

print(total)