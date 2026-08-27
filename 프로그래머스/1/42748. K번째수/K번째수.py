def solution(array, commands):
    answer = []
    
    for i in commands:
        start = i[0] - 1
        end = i[1]
        k = i[2]
        cop = array[start:end]
        cop.sort()
        answer.append(cop[k-1])
        cop = list()
        
    return answer