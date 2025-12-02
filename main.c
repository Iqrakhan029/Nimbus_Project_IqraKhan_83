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
void logRouteToFile(int route[], int count, float totalDist, float fuel) {
FILE *fp = fopen("route_log.txt", "w");
if (!fp) {
printf("Error opening file!\n");
return;
}
fprintf(fp, "Smart Waste Collection – Route Log\n");
fprintf(fp, "Route Order (location IDs): ");
for (int i = 0; i < count; i++)
fprintf(fp, "%d ", route[i]);

fprintf(fp, "\nTotal Distance: %.2f\nFuel Used: %.2f\n", totalDist, fuel);  
fclose(fp);  
printf("\nRoute saved to route_log.txt\n");

}

int selectNextBin(Bin bins[], int used[], int count, int currentIndex) {
int index = -1;

for (int p = 1; p <= 3; p++) {  
    for (int i = 0; i < count; i++) {  
        if (!used[i] && bins[i].priority == p && bins[i].fill_level > 50) {  
            if (index == -1) index = i;  
        }  
    }  
    if (index != -1) return index;  
}  

  
float minDist = 1e9;  
for (int i = 0; i < count; i++) {  
    if (!used[i]) {  
        float d = distanceCalc(bins[currentIndex], bins[i]);  
        if (d < minDist) {  
            minDist = d;  
            index = i;  
        }  
    }  
}  
return index;

}
