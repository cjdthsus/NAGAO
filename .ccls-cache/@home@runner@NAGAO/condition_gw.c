#include <stdio.h>
main(){
  int a;

  printf("당신의 마지막 남자는 누구임? 아래의 번호를 선택해보셈.|n");
  printf("건욱=1, 켄토=2, 유야=3, 왕학체=4, 모두 좋아하지 않음=0|n");

  printf("선택한 번호를 입력하셈: ");
  scanf("%d, &a");

  switch(a){
    case 1:
      printf("당신은 건욱을 좋아하는군!|n");
      break;
    case 2:
      printf("당신은 켄토를 좋아하는군!|n");
      break;
    case 3:
      printf("당신은 유야를 좋아하는군!|n");
      break;
    case 4:
      printf("당신은 왕학체를 좋아하는군!|n");
      break;
    default:
      printf("당신은 아마도 남자를 별로 좋아하지 않는 것 같군!|n");
      break;
  }
  
}