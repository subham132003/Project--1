#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float numb1;
  float numb2;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &numb1, &operator, & numb2);

  switch(operator)
    {
    case '/': answer = numb1/numb2;
      break;
    case '*': answer = numb1*numb2;
      break;
    case '+': answer = numb1+numb2;
      break;
    case '-': answer = numb1-numb2;
      break;
    case '^': answer = pow(numb1,numb2);
      break;
    case ' ': answer = sqrt(numb2);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",numb1,operator, numb2, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
