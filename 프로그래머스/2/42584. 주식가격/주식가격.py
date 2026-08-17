def solution(prices):
    answer = list()
    
    for i in range(0, len(prices)):
        index = i
        ans = 0
        for j in range(index + 1, len(prices)):
            ans += 1
            if prices[j] < prices[index]:
                break
        answer.append(ans)
                
    return answer 