#include <stdio.h>

struct time{
    int hour;
    int min;
    int sec;

};

struct time differenceBetweenTimePeriod(struct time t2, struct time t1){
    struct time diff;
    while (t2.sec > t1.sec) {
      --t1.min;
      t1.sec += 60;
   }
   diff.sec = t1.sec - t2.sec;
   while (t2.min > t1.min) {
      --t1.hour;
      t1.min += 60;
   }
   diff.min = t1.min - t2.min;
   diff.hour = t1.hour - t2.hour;

   return diff;
}

struct time AddTimePeriods(struct time t2, struct time t1){
    struct time add;
   add.hour = t1.hour + t2.hour;
    add.min = t1.min + t2.min;
    while (add.min > 60) {
      ++add.hour;
      add.min -= 60;
    }

    add.sec = t1.sec + t2.sec;
    while (add.sec > 60) {
      ++add.min;
      add.sec -= 60;
   }

    return add;
}

void main() {
    struct time startTime, stopTime, diff, add;

    printf("Enter the first time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &startTime.hour, &startTime.min, &startTime.sec);

    printf("Enter the second time. \n");
    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &stopTime.hour, &stopTime.min, &stopTime.sec);

    diff = differenceBetweenTimePeriod(startTime, stopTime);
    printf("\nTime Difference: %d:%d:%d - ", stopTime.hour, stopTime.min, stopTime.sec);
    printf("%d:%d:%d ", startTime.hour, startTime.min, startTime.sec);
    printf("= %d:%d:%d\n", diff.hour, diff.min, diff.sec);


    add = AddTimePeriods(startTime, stopTime);
    printf("\nTime Difference: %d:%d:%d + ", stopTime.hour, stopTime.min, stopTime.sec);
    printf("%d:%d:%d ", startTime.hour, startTime.min, startTime.sec);
    printf("= %d:%d:%d\n", add.hour, add.min, add.sec);
}
