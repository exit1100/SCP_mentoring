def plus(a,b):
    print(a+b)

def minus(a,b):
    print(a-b)

def multi(a,b):
    print(a*b)

def division(a,b):
   print(a//b)
   
def rest(a,b):
    print(a%b)

a, b = map(int,input().split())
plus(a,b)
minus(a,b)
multi(a,b)
division(a,b)
rest(a,b)

