import time
cnt0=0
cnt1=0
def fibonacci(n):
    global cnt0
    global cnt1
    if n==0:
        cnt0=cnt0+1
        return 0 
    elif n==1:
        cnt1=cnt1+1
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)

n = int(input())
st = time.time()
fibonacci(n)
print("%d %d"% (cnt0,cnt1))
print(time.time()-st)
