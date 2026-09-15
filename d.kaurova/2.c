#include <stdio.h>
#include <time.h>

int main(){
	time_t timeUTC;
	time(&timeUTC);

	timeUTC -= 28800;

	struct tm *time;
	time = gmtime(&timeUTC);

	char buff[50];

	size_t result = strftime(buff, sizeof(buff), "%d.%m.%Y %H:%M:%S", time);

	printf("time in california rn: %s\n", buff);
	return 0;
}
