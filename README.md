# test_10_23



#include <stdio.h>

int main() 
{
	double a,b;
	char n;
	double result;
	
	 scanf("%lf%c%lf",&a,&n,&b);
	 switch(n)
	 {
	 	case '+':result=a+b;break;
	 	case '-':result=a-b;break;
	 	case '*':result=a*b;break;
	 	case '/':
	 	if(b=0)
	 	{
	 		
	 		printf("Divisior can not be 0!");
	 		
		}
		else
		{
			result=a/b;
		}
		break;
		default:
			printf("Unknown operator!");
			break;
     }
	 	printf("%.2f",result);

    return 0;
}
