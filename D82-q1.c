/*Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. */
#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight light;

    light = RED;

    switch (light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid Traffic Light");
    }

    return 0;
}