// ví dụ 1
#include "stdio.h"
/*int main ()
{
    int num;
    for(num=1; num <100; num ++)
    {
        printf("Anh yeu em nhieu lam: \n \n ");
    }
    return 0;
}*/
// ví dụ 2
/*int main ()
{
    int i, j, max;
    printf("please enter the maxinum value: \n");
    printf("for which a table can be printed: \n");
    scanf("%d", &max);
    for ( i = 0, j = max; i <= max; i++, j--)
    {
        printf("\n %d + %d = %d", i, j, i + j);
    }
    return 0;
}*/
// ví dụ code tam giac vuong xuoi
/*int main () {
    int i, j, k;
    printf("Row= ");
    scanf(" %d", &k);
    for ( i = 1; i <= k; i++) {
        for (j =1; j<=i; j ++)
        {
            printf("*");
        }
        printf("\n");

    }
}*/
 // vi dụ code tam giác ngược
 int main ()
 {
     int r, i, j;
     printf("Enter: ");
     scanf("%d", &r);
     for(i=r; i>=1; i--){
         for(j=1; j<=i; j++){
             printf("*");
         }
         printf("\n");
     }
 }
// ví dụ:
