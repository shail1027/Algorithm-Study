n = int(input())
dic = dict()

for i in range(n) :
    name, state = input().split()
    dic[name] = True
    
    if state == "leave" :
        del dic[name]
        
result = dict(sorted(dic.items(), reverse=True))

for key in result.keys() :
    print(key)

# n = int(input())
# lst = list()

# for i in range(n) :
#     temp = list()
#     temp = input().split()
    
#     if temp[1] == "enter" :
#         lst.append(temp[0])
#     elif temp[1] == "leave" :
#         lst.remove(temp[0])

# lst.sort(reverse=True)

# for _ in lst :
#     print(_)
