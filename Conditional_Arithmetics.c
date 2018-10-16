#include <stdio.h>
#include <limits.h>


int sum(int number){
  int result=0;
  for (size_t i = 1; i <= number; i++) {
    if (i%3==0||i%5==0){
      result=result+i;
    }
  }
  return result;
}
int multiply(int number){
  int result=1;
  for (size_t i = 1; i <= number; i++) {
printf("Select a number in the range (1-100): " );
    if (i%3==0||i%5==0){
      result=result*i;
      if(LONG_MAX/result>i){
        printf("Overflow!\n" );
        break;
      }
    }
  }
  return result;
}
int main(int argc, char const *argv[]) {
  int selection=0;
  int number=0;
  long result=0;
  do {
  printf("Select Add (1) or Multiply (2): " );
  scanf("%d",&selection);
} while(selection < 1  || selection > 2);
do {
printf("Select a number in the range (1-100): " );
scanf("%d",&number);
} while(number < 1  || number > 100);
if (selection==1){
  result=sum(number);
}
else{
  result=multiply(number);
}
printf("resutl= %ld\n",result );
  return 0;
}
