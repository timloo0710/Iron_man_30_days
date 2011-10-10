#include <stdio.h>

int main(){
  int s[5]={31,65,92,-8,15};
  int jn[5]={0};
  int i,j;
  for( i=0;i<5;++i)
  {
     jn[i]=1;
     for( j=0;j<5;++j)
     {
       if (s[j]>s[i])
          jn[i]++;
     }
   }
  printf("得分\t排行\n");
   for( i=0;i<5;++i)
  {
  printf("%d\t%d\n",s[i],jn[i]);
   
  }
 return 0;
}
