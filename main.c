#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void main()
{

	char robotsname[] = "ROBO";
	int batteryChargeStatus = 100;
	double temperature = 0;
	double velocity = 34.5678;
	char status[9] = "Idle";
	char choice[30];
	double temptemperature = 0;

	while (1) {
		printf(" Which variable to check?\n N-robots name, \n B-battery charge status(integer in%), \n T-temperature,\n V-velocity,\n S-status.\n");
		gets(choice);

		if (strncmp(choice, "N", 1) == 0) {
			printf("My name is %s\n", robotsname);
			printf("If you want to change the name, enter new name\n");
			gets(robotsname);
			printf("My name is %s\n", robotsname);

		}
		else if (strncmp(choice, "B", 1) == 0) {
			printf("Battery charge status is %d percent\n", batteryChargeStatus);
			printf("If you want to change the value, enter new value\n");
			scanf_s("%d", &batteryChargeStatus);
			printf("Battery charge status is %d percent\n", batteryChargeStatus);
		}

		else if (strncmp(choice, "T", 1) == 0) {
			printf("Temperature is %lf *C\n", temperature);
			printf("If you want to change the value, enter new value\n");
			scanf_s("%lf", &temptemperature);
			if(-80<temptemperature && temptemperature<30) {
				temperature=temptemperature;
				printf("Temperature is %lf *C  (%lf Kelvins)\n", temperature, temperature + 273.15);
				if (temperature >= 0) {
					printf("Absolute value of temperature is %lf *C \n", temperature);
				}
				else {
					printf("Absolute value of temperature is %lf *C \n", temperature * (-1.0));
				}

			}else {
				printf("The temperature is to hight or to low\n");
				printf("The temperature should be in the range -80 to 30\n");
			}
						
		}
		else if (strncmp(choice, "V", 1) == 0) {
			printf("Velocity is %lf km/h", velocity);
			printf("If you want to change the value, enter new value\n");
			scanf_s("%lf", &velocity);
			printf("Velocity is %lf km/h (%E km/h)\n", velocity, velocity);
			
		}
		else if (strncmp(choice, "S", 1) == 0) {
			printf("Status is %s", status);
			printf("If you want to change the status, enter new status: Exploring / Sampling / Returning / Idle\n");
			gets(status);
			printf("Status is %s\n", status);

		}
		else {
			printf("Number of bytes reserved for each variable type\n");
			printf("char %d\n", sizeof(char));
			printf("int %d\n", sizeof(int));
			printf("float %d\n", sizeof(float));
			printf("double %d\n", sizeof(double));
		}
		

	}

}


	