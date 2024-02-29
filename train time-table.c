#include <stdio.h>
#include <string.h>

#define MAX_TRAINS 100

// Structure for time
struct TIME {
    int hour;
    int minute;
};

// Structure for train information
struct TRAIN_INFO {
    int train_no;
    char train_name[50];
    struct TIME departure_time;
    struct TIME arrival_time;
    char start_station[50];
    char end_station[50];
};

struct TRAIN_INFO timetable[MAX_TRAINS];
int num_trains = 0;

// Function to add a new train to the timetable
void add_train(int train_no, const char *train_name, int dep_hour, int dep_minute, int arr_hour, int arr_minute, const char *start_station, const char *end_station) {
    if (num_trains < MAX_TRAINS) {
        timetable[num_trains].train_no = train_no;
        strcpy(timetable[num_trains].train_name, train_name);
        timetable[num_trains].departure_time.hour = dep_hour;
        timetable[num_trains].departure_time.minute = dep_minute;
        timetable[num_trains].arrival_time.hour = arr_hour;
        timetable[num_trains].arrival_time.minute = arr_minute;
        strcpy(timetable[num_trains].start_station, start_station);
        strcpy(timetable[num_trains].end_station, end_station);
        num_trains++;
    } else {
        printf("Timetable is full. Cannot add more trains.\n");
    }
}

// Function to display the timetable
void display_timetable() {
    printf("Train No.\tTrain Name\tDeparture Time\tArrival Time\tStart Station\tEnd Station\n");
    for (int i = 0; i < num_trains; i++) {
        printf("%d\t\t%s\t\t%02d:%02d\t\t%02d:%02d\t\t%s\t\t%s\n",
               timetable[i].train_no, timetable[i].train_name,
               timetable[i].departure_time.hour, timetable[i].departure_time.minute,
               timetable[i].arrival_time.hour, timetable[i].arrival_time.minute,
               timetable[i].start_station, timetable[i].end_station);
    }
}

int main() {
    add_train(1, "Express", 8, 0, 10, 30, "Station A", "Station B");
    add_train(2, "Local", 9, 30, 11, 45, "Station C", "Station D");

    display_timetable();

    return 0;
}
