#include <stdio.h>

int main() {
    int a,b,i=1,evensum=0,oddsum=0;
    scanf("%d %d",&a,&b);
    while(i<=a)
    {
        if(i%b==0)
        {
        printf("%d ",i);
        if(i%2==0)
        evensum=evensum+i;
        else
        oddsum=oddsum+i;
		}
        i++;
    }
    
    printf("\n%d",evensum);
    printf("\n%d",oddsum);
}
