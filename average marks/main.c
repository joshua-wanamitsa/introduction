#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i;i<4;i++){
    int math;
    int phy;
    int chem;
    printf("Please insert the marks for math,Physics and Chem in that order here\n");
   int marks[3]={scanf("%d",&math),scanf("%d",&phy),scanf("%d",&chem)};
   int average=(math+phy+chem)/3;
   printf("%d",average);
    }
    return 0;
}
