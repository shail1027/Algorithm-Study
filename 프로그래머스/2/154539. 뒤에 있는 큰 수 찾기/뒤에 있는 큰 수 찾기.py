def solution(numbers):
    answer = [-1] * len(numbers)
    stack = list()
    
    for i in range(0, len(numbers)):
        if len(stack) != 0:
            while len(stack) != 0:
                if numbers[i] > numbers[stack[-1]]:
                    answer[stack[-1]] = numbers[i]
                    stack.pop()
                else: 
                    break
        stack.append(i)        
    
    return answer