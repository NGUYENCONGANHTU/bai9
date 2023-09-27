// ví dụ 1
#include "stdio.h"
/*#define COFFEE_PRICE 2.5
#define COFFEE_PRICE 2.0
#define SMOOTHIE_PRICE 3.0*/
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
        printf("\n %d +%d = %d", i, j, i + j);
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
 /*int main ()
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
 }*/
// ví dụ: tán gái
/*int main() {
    char answer;
    int count=0;
    do {
        printf("Crush oi , em co yeu anh khong? (y/n): ");
        scanf(" %c", &answer);
        fflush(stdin);
        if (answer == 'y' || answer == 'Y') {
            printf("Oh,vay la em ko yeu anh a!\n");
        } else {
            printf("tao se doi may!\n");
        }
        count++;
        if(count<3){
            printf("Em chưa yêu thì sao? Anh sẽ đợi em đến khi em yêu anh thôi!\n");
        }
    } while (answer<3);

    return 0;
}*/
/*
int main ()
{
    char ans;
    int count=0;
    do {
        printf("em co lam ny anh khong: ");
        scanf(" %c", &ans);
        fflush(stdin);
        count++;
    }
    while (ans !='y'&& count<3);

    return 0;
}*/
#include <stdio.h>

int main() {
    int count = 0;
    float total = 0;
    char choice;
    float price;
    char meal[50];

    do {
        printf("Nhap mon an: ");
        scanf("%s", meal);
        printf("Nhap gia tien: ");
        scanf("%f", &price);
        total += price;
        count++;
        printf("Ban co muon tiep tuc khong? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (count > 0) {
        printf("Tong tien: %.2f \n", total);
    } else {
        printf("Khong co mon an nao duoc nhap gia tien.\n");
    }

    return 0;
}
