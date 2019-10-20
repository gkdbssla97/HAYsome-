/*9x9단 구구단, 포인터 연산 문제 출제 
원격 저장소에서 변경!*/
#include <stdio.h>

int main(void)
{
  for(int i = 1;i<10; i++){
         printf("%d단 \n",i);
    for(int j =1;j<10;j++){
      printf("%d x %d = %d ",i,j,i*j);
      printf("\n");
    }
    printf("-------------------------------------------------\n");
  }
  return 0 ;
}

      

