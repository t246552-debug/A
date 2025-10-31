#include <stdio.h>

int main()
{
  int k;
  printf("GPAいくつだった?");
  scanf("%d",&k);
  
  if (4.0>k>=3.5)
{
      printf("素晴らしい！天才だね!");
} 
 
　else if(k<=2.5)
{
　 printf("もっとがんばろっか笑");
}
   else
{
   printf("いい調子だね！！");
    
}
    
    return 0;
}