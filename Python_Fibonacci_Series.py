a = -1
b = 1
num = 0
n = int(input("Enter the number terms "))
fibo = []
while n > num :
    s = a + b
    fibo.append(s)
    a = b
    b = s
    num += 1

print("The first " , n ,"terms of fibonacci series is " , fibo )
