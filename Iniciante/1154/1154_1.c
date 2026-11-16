#include <stdio.h>

int main()
{ int x=0, cont=0;
  float media=0;
    while (x>=0){
    scanf ("%d",&x);

    if (x>=0) {media+=x;
    
    cont++;
    }
    }
    printf ("%.2f\n",media/cont);
    
   
    
    

    return 0;
}