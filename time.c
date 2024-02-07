#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        // Get current time
        time_t currentTime = time(NULL);
        struct tm *localTime = localtime(&currentTime);

        // Extract hour, minute, and second
        int hour = localTime->tm_hour;
        int minute = localTime->tm_min;
        int second = localTime->tm_sec;

        // Print the digital clock
        printf("%02d:%02d:%02d\r", hour, minute, second);
        fflush(stdout);

        // Delay for 1 second

            sleep(1); // Use the 'sleep' function to delay for 1 second

    }

    return 0;
}
