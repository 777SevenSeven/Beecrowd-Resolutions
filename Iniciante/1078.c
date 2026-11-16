
#include <stdio.h>
int main()
{
    
    int n = 0, x = 0, valorR = 0;
    scanf("%d", &n);
    
     while ( x < 10 ){ 
        x++;
        valorR = n * x;
  
    printf("%d x %d = %d\n", x, n, valorR);
    }
    return 0;
}
