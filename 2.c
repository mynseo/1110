#include <stdio.h>

int main() {
  int a,firstnum, tennum, onenum, newnum, sum, cycle=0;
  scanf("%d", &a);
  if(a<10)
    a*=10;
  firstnum=a;
  while(1){
    tennum=a/10;
    onenum=a%10;
    sum=tennum+onenum;
    a=onenum*10+sum%10;
    cycle++;
    if(firstnum==a)
      break;
  }
  printf("%d", cycle);
  return 0;
}
  