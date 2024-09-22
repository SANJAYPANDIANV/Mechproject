n = int(input("No. of employees working in the company "))
salary = []
count = 0
for i in range(n) :
    print("The current No : " , (i + 1) , "employees\' salary ")
    s = int(input())
    salary.append(s)

for i in range(len(salary)) :
    annual_salary = (salary[i] * 12)
    print("The current No : " , (i + 1) , "employees\' salary per annum " , annual_salary)

    if annual_salary >= 100000 :
        count = count + 1

print("No. of employees who are gaining more than the 1 lakhs is : " , count )
        
