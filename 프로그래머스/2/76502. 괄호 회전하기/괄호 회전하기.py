def solution(s):
    string = list(s)
    stack = list()
    check = {')': '(', '}': '{', ']': '['}
    answer = 0
    isFale = False
    
    for i in range(len(s)):
        for j in string:
            if j in check.values():
                stack.append(j)
            if j in check.keys():
                if len(stack) == 0: continue
                elif (j, stack[-1])in check.items():
                    stack.pop()
                    isFale = True
                else: continue

        if len(stack) == 0 and isFale:
            answer += 1

        stack.clear()
        tmp = string[0]
        string.append(tmp)
        del string[0]
        
    return answer