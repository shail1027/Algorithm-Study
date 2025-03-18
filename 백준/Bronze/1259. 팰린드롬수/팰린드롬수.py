while True :
    arr = input()
    if int(arr) == 0 : break
    
    arr = list(arr)
    if arr == arr[::-1] : 
        print("yes")

    else :
        print("no")