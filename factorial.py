#finds factorial of large numbers like(100,200,500,1000,2000...)

def findprod(p,q):
    
    #multiplies the digits of array with a number
    
    l=[]
    carry=0
    for i in range(0,len(p)):
        m=int(p[i])*q
        d=carry+m                                   #finding product, storing the digit at unit place in array, storing the carry 
        l.append(d%10)
        carry=(d-(d%10))//10
    l.append(carry)
    return l
        
def fact(n):

    #finds factorial by multiplying the digits stored in the array with next number
    
    res=['1']                                       #initializing array to 1
    for i in range(2,n+1):
        p=findprod(res,i)                           #multiplying the array with next number
        res=p
    return res
        
def main():
    
    #driver function
    
    n=int(input())                                      #takes input (the number whose factorial is to be calculated
    z=fact(n)                                           #calls fact() 
    for i in range(len(z)-1,-1,-1):                     #prints result
        print(z[i],end='')
    
main()
