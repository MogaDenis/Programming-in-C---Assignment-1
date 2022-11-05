#include <stdio.h>

int main()
{
	int given_hour, given_min;
	printf("Please enter the starting hours and minutes.\n");
	
	printf("Starting hours: ");
	scanf("%d", &given_hour);
	
	printf("Starting minutes: ");
	scanf("%d", &given_min);

	int add_hour, add_min;
	printf("Please enter the hours and minutes you want to add.\n");

	printf("Hours to add: ");
	scanf("%d", &add_hour);

	printf("Minutes to add: ");
	scanf("%d", &add_min);

	int final_hour = given_hour + add_hour;
	int total_minutes = given_min + add_min;

	int extra_hour = total_minutes / 60;
	int final_min = total_minutes % 60;

	final_hour += extra_hour;

	printf("The final time will be %d hours and %d minutes\n", final_hour, final_min);
	
	return 0;
}