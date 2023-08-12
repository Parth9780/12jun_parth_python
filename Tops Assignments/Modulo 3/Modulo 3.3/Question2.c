//WAP of addition, subtraction, Multiplicatin and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main ()
{
	int a,b;
	int ch;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	printf("1.Addition\n2.Subtriction\n3.Multiplication\n4.Division\n5.Modulo\nEnter the choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("Addition is :%d",a+=b);
			break;
		case 2:
			printf("subtriction is:%d",a-=b);
		    break;
		case 3:
		    printf("multiplication is:%d",a*=b);
			break;
		case 4:
			printf("division is:%d",a/=b);
			break;
		case 5:
			printf("module is:%d",a%=b);
			break;
		default:		
			printf("invalid choice");
			break;		
	}
}         

