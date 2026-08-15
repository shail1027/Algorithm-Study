def solution(skill, skill_trees):
    answer = 0
    
    for i in skill_trees:
        stack = list(skill[::-1])
        valid = True
        
        for j in i:
            if j not in skill: continue
            if len(stack) != 0 and j == stack[-1]:
                stack.pop()
            else: 
                valid = False
                break
                
        if valid:
            answer += 1
        
        stack.clear()
    return answer