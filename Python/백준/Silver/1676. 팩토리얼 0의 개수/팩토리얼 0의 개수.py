a = int(input())
sum = 1

for i in range(1, a+1) :
    sum *= i

arr = list(str(sum))
arr.reverse()

# print(arr)

cnt = 0

for i in arr :
    if int(i) == 0 :
        cnt += 1
    elif int(i) != 0 : 
        break
    
print(cnt)