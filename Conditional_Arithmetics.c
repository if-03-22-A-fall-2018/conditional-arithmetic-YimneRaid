#include <stdio.h>
#include <limits.h>


int sum(int number){
  long result=0;
  for (size_t i = 1; i <= number; i++) {
    if (i%3==0||i%5==0){
      result=result+i;
    }
  }
  printf("resutl= %ld\n",result );
  return result;
}
int multiply(int number){
  long result=1;
  int overflow=0;
  for (size_t i = 1; i <= number; i++) {
    if (i%3==0||i%5==0){
      result=result*i;
      if(LONG_MAX/result>i){
        overflow=1;
        break;
      }
    }
  }
  if (overflow==0) {
    printf("resutl= %ld\n",result );
  }
  else{
    printf("Overflow!\n");
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
else if (selection==2){
  result=multiply(number);
}
  return 0;
}
