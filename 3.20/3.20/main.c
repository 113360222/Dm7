#include <stdio.h>
int main() {
	int hours_worked;
	float hourly_rate, salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours_worked);
		if (hours_worked == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourly_rate);
		if (hours_worked <= 40)
			salary = hours_worked * hourly_rate;
		else
			salary = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
		printf("Salary is $%.2f\n", salary);
	}
	return 0;
}