 #include <stdio.h>
 #include <math.h>

float add()
{
	float x;
	float y;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f",  &y);
	printf("Result = %f\n", x+y);
}

float sub()
{
	float x;
	float y;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f",  &y);
	printf("Result = %f\n", x-y);
}
float mult()
{
	float x;
	float y;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f",  &y);
	printf("Result = %f\n", x*y);
}

float div()
{
	float x;
	float y;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f",  &y);
	printf("Result = %f\n", x/y);
}
float pw()
{
	float x;
	float y;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f",  &y);
	printf("Result = %f\n", pow(x, y));
}

float sqr()
{
	float x;
	printf("Your number is: ");
	scanf("%f", &x);
	printf("Result = %f\n", sqrt(x));
}

int main()
{	
	char choice;
	
	printf("Whats your opperation?(A = Addition, S = Subtraction, M = Multiplication, D = Division, P = Power, Q = SquareRoot)\n");
	scanf("%c", &choice);
	
	switch(choice)
	{
		case 'A':
			add();
			break;
		
		case 'S':
			sub();
			break;

		case 'M':
			mult();
			break;

		case 'D':
			div();
			break;

		case 'P':
			pw();
			break;

		case 'Q':
			sqr();
			break;

		default:
			printf("Enter a valid operation!\n");
			break;
	}

	return 0;
}
