#include <stdio.h>
int main()
{
    int i,res=0,a[100],n,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i = 0; i < n; i++) 
    {  
        for(int j = i + 1; j < n; j++)
         {  
            if(a[i] == a[j])  
                printf("%d\n", a[j]); 
                p=a[i];
                res++; 
         }  
    }

    if(res>(n/2))
    printf("majority is %d",p);
    else
    {
        printf("no majority");
    }
    

    
}