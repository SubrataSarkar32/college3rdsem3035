def func(x=0.0):
    return (1/(1+(x**2)))
a=float(input("Enter the lower limit:"))
b=float(input("Enter the upper limit:"))
n=float(input("Enter the number of division:"))
h=(b-a)/n
sum1=0
f1=func(0)
f2=func(1)
sum1=f1+f2
flag=0
for r in range(1,int(n),2):
    if(flag==0):
        sum1+=(5*func(r*h))
        flag=1
    elif(flag==1):
        sum1+=(6*func(r*h))
        flag=0
for r in range(2,int(n),2):
    sum1+=(func(r*h))
sum1*=(3*h/10)
print(sum1)

    
