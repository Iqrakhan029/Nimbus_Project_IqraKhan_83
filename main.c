#include <stdio.h>
#include <stdlib.h>

#define MAX_BINS 50


typedef struct {
    int location_id;
    int fill_level;     
    int priority;       
    int x, y;           
} Bin;


double mySqrt(double n) {
    if (n < 0) {
        return -1;   
    }
    if (n == 0 || n == 1) {
        return n;
    }
    double x = n;
    double y = 1.0;
    double precision = 0.000001;   

    while (x - y > precision) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

float distanceCalc(Bin a, Bin b) {
    return mySqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}


float fuelCalc(float dist) { return dist * 0.2f; }
