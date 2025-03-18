n = int(input())

for i in range(n) :
    k = input()
    temp = list()
    bol = False
    
    for j in k :
        if j == '(' :
            temp.append(j)
        
        elif j == ')' and len(temp) == 0 :
            bol = True
            break
        
        elif j == ')' :
            temp.pop()
        
    if bol :
        print("NO")
    
    elif len(temp) == 0 :
        print("YES")
    else : 
        print("NO")