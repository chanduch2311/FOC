#include<stdio.h>
int main()
{int A,B,C,option;
printf("\tcalculstor\n");
printf("\tenter the required numbers A and B\n");
scanf(" \t%d   \t%d",&A ,&B);
printf("\tenter the required option\n");
printf(" \t1.Addition\n \t2.subtraction\n \t3.mutlplication\n \t5.Remainder\n");
scanf("%d",&option);
switch(option)
{ case 1:
	 C=A+B;
	printf("\n sum = %d \n",C);
	break;
	case 2:
	C=A+B;
	printf("\n difference = %d \n",C);
	break;
	case 3:
	C=A*B;
	printf("\t quotient = %d \n",C);
	break;	
	case 4:
	C=A/B;
	printf("\t quotient = %d \n",C);
	break;
	case 5:
	C=A%B;
	printf("\t remainder = %d \n",C);
	break;
	deafult:
	printf("\t check your opinion\n");
    }
    return 0;
    }



