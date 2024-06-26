#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int var1,var2,intSum,intSub;
    float var3,var4,floatSum,floatSub;
    scanf("%d %d %f %f",&var1,&var2,&var3,&var4);
    
    intSum = var1+var2;
    intSub = var1-var2;
    
    floatSum = var3+var4;
    floatSub = var3-var4;
    
    printf("%d ",intSum);
    printf("%d\n",intSub);
    
    printf("%0.1f ",floatSum);
    printf("%0.1f\n",floatSub);
    
    
    return 0;
}
