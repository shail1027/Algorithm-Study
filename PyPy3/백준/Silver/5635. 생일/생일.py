n = int(input())
lst = list()

for i in range(n) :
    name, day, month, year = input().split()
    lst.append([name, int(day), int(month), int(year)])
    
age = sorted(lst, key = lambda x : (x[3], x[2], x[1]))

print(age[-1][0])
print(age[0][0])
