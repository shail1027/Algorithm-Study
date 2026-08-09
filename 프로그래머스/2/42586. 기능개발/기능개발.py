def solution(progresses, speeds):
    copy = progresses
    head = 0
    answer = []
    cnt = 0
    
    while True :
        for i in range(0, len(copy)):
            copy[i] += speeds[i]
        
        if copy[head] >= 100:
            for i in range(head, len(copy)):
                if copy[i] >= 100:
                    cnt += 1
                else: break
            
            head += cnt
            answer.append(cnt) 
            cnt = 0
            if sum(answer) == len(copy): break
        
    return answer