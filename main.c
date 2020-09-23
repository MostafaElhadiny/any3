#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z=8;
    int arra[z];
    printf("please enter the elements of array\n");
    for(int i=0;i<z;i++){
      scanf("%d",&arra[i]);

          for(int a=0;a<i;a++){
            if(arra[a]==arra[i])
            {
              printf("sorry, can't add this number\n");
              i--;
              break;
            }

          }
      }

int sum(int arra[],int n){
    int mag=0;
for (int v=0; v < n; v++){
    mag =mag + arra[v];
}
return mag;
}

printf("\t%d\t is the sum of the array \n",sum(arra,z));
}
