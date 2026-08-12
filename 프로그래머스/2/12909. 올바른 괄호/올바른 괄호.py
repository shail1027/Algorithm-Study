def solution(s):
    answer = True
    dic = {'(': ')'}
    stack = list()
    
    for i in s:
        if i == '(':
            stack.append(i)
        elif i == ')' and len(stack) != 0:
            if stack[-1] == '(':
                stack.pop()
            else: return False
        else: return False
    
    if len(stack) == 0: 
        return True
    else: 
        return False
