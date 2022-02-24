# codechef.com/problems/POLIN/
t=int(input())
while t>0:
    l1=[]
    l2=[]
    n=int(input())
    for i in range(0,n):
        x,y=map(int,input().split())
        l1.append(x)
        l2.append(y)
    s1=set(l1)
    s2=set(l2)
    n1=len(s1)
    n2=len(s2)
    ans=n1+n2
    print(ans)
    t-=1
    
    
