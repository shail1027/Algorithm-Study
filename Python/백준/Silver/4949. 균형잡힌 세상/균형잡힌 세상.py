while True:
    k = input()
    if k == ".":
        break  
    
    stack = []
    is_valid = True 

    for i in k:
        if i == "(" or i == "[":
            stack.append(i)
        elif i == ")":
            if len(stack) == 0 or stack.pop() != "(":
                is_valid = False
                break
        elif i == "]":
            if len(stack) == 0 or stack.pop() != "[":
                is_valid = False
                break

    if is_valid and len(stack) == 0:
        print("yes")
    else:
        print("no")
