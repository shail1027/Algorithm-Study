def solution(triangle):
    n = len(triangle)
    tri = triangle[::-1]         
    lst = [0] * (n+1)            

    for row in tri:
        for j in range(len(row)):
            lst[j] = row[j] + max(lst[j], lst[j+1])

    return lst[0]