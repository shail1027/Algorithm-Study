def solution(board, h, w):
    answer = 0
    directionH = [-1, 0, 0, 1]
    directionW = [0, -1, 1, 0]

    target = board[h][w]
    cnt = 0

    for i in range(4) :
        dh = h + directionH[i]
        dw = w + directionW[i]

        if dh < 0 or dh >= len(board[0]) or dw < 0 or dw >= len(board[0]) :
            continue
        else :
            if board[dh][dw] == target :
                cnt += 1
            
    answer = cnt
    return answer
