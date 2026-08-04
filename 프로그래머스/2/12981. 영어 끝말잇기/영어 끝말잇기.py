def solution(n, words):
    answer = []
    is_fail = False
    is_First = True
    last_word = ""
    word = list()
    cnt = 0
    loop = 0
    
    for i in words:
        cnt += 1
        # print("==", cnt, last_word, word, loop, "==")
        if is_First == True :
            word.append(i)
            last_word = i[-1]
            is_First = False
            continue
        else:  
            if i[0] != last_word: 
                print(i, i[0], last_word, cnt, end="\n")
                is_fail = True
                answer.append(cnt)
                answer.append(loop+1)
                # print("12")
                break
            if i in word:
                is_fail = True
                answer.append(cnt)
                answer.append(loop+1)
                # print("13")
                break
                
        last_word = i[-1]        
        word.append(i)
        
        if cnt >= n:
            loop += 1
            cnt = 0
            
    # print(last_word)
    # print(answer)
    if is_fail == False:
        return (0, 0)
    else: return answer