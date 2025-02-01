 #include <stdio.h>
 #include <math.h>

float add()
{
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f",  &y);
	printf("%f\n", x+y);
}

float sub()
{
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f",  &y);
	printf("%f\n", x-y);
}
float mult()
{
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f",  &y);
	printf("%f\n", x*y);
}

float div()
{
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f",  &y);
	printf("%f\n", x/y);
}
float pw()
{
	float x;
	float y;
	scanf("%f", &x);
	scanf("%f",  &y);
	printf("%f\n", pow(x, y));
}

float sqr()
{
	float x;
	scanf("%f", &x);
	printf("%f\n", sqrt(x));
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
			printf("You are a stupid nigga\n");
			break;
	}

	return 0;
}
