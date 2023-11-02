#include <stdio.h>

struct time {
  int hour;
  int min;
  int sec;
};

int main() {
  struct time time1, time2, diff_time;

  printf("Enter start time (hour, minute, second): ");
  scanf("%d %d %d", &time1.hour, &time1.min, &time1.sec);

  printf("Enter end time (hour, minute, second): ");
  scanf("%d %d %d", &time2.hour, &time2.min, &time2.sec);
  diff_time.sec = time2.sec - time1.sec;
  if (diff_time.sec < 0) {
    diff_time.sec += 60;
    diff_time.min--;
  }
  diff_time.min = time2.min - time1.min;
  if (diff_time.min < 0) {
    diff_time.min += 60;
    diff_time.hour--;
  }

  diff_time.hour = time2.hour - time1.hour;

  printf("The time difference is %d hours, %d minutes, and %d seconds.\n", diff_time.hour, diff_time.min, diff_time.sec);

  return 0;
}

