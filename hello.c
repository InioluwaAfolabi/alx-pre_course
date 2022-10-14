#include <stdio.h>
int main()
{
	int age;
	printf( "Input your age here: " );
	scanf( "%d", &age );
	if ( age < 70 )
	{
		printf("You are really young!\n");
	}
	else if (age == 70) {
		printf( "Your are almost inn your old age!\n" );
	}
	else {
		printf( "You are way too old\n" );
	}
	return (0);
}
