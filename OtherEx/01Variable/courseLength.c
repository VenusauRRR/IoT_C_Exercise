#include <stdio.h>

void askCourseLength(){
    int courseDay = 0;
    int dayAddOn = 0;
    int totalDays = 0;

    printf("How many days is your course? ");
    scanf("%d", &courseDay);
    printf("How many days you want to add on? ");
    scanf("%d", &dayAddOn);
    totalDays = courseDay + dayAddOn;
    printf("Oh you want the course to be %d days long.\n", totalDays);
    
}