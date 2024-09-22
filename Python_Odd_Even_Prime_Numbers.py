odd = {( x * 2)+ 1 for x in range ( 0 , 10 )}
even = { ( y * 2 ) for y in range ( 0 , 10 )} 
prime = set()
print("Odd Numbers : " , odd )
print("Even Numbers : " , even )

for i in range ( 2, 20 ):
        j = 2
        f = 0
        while j <= i/2 :
            if i%j == 0:
                f = 1
            j += 1
        if f == 0:
            prime.add(i)

 

print("Prime Numbers : " , prime)

