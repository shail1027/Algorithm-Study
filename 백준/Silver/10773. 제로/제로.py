n = int(input())

arr = list()

for i in range(n):
    a = int(input())
    if a == 0 :
        arr.pop()
        
    else :
        arr.append(a)

print(sum(arr))