n = int(input())

arr = []
def f(s,n):
    if(s.count('(')==n):
        if(s.count(')')==n):
            arr.append(s)
        else:
            f(s+')',n);
    elif(s.count(')')==n):
        if(s.count('(')==n):
            arr.append(s)
        else:
            f(s+'(',n)
    else:
        f(s+'(',n)
        f(s+')',n)




f('(',n)
print(arr)