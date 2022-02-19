/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

SORU 6. Klavyeden girilen sayıların en büyüğünü bulan bir C programı yazınız. Sayı girişi sıfır (0) ile sona erdirilsin.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int number;
    int max=0;
    printf("Please enter positive integer:");
    scanf("%d",&number);
    while(number>0){
        
        if(number>max){
            max=number;
        }
        printf("Please enter positive integer:");
        scanf("%d",&number);
        if(number==0)
         break;
        
    }
    printf("The biggest number:%d\n",max);

    return 0;
}

