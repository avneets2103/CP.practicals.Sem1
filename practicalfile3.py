#16
l=[1,2,3,4,5,6,7,8,9,10]        #list containing first 10 natural numbers
x=list(map(lambda y: y*y*y ,list(filter(lambda x:x%2==0,l))))
for i in range(len(x)):
    print("cube of",(i+1)*2,"is",x[i])
