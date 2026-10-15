// Task 3: Find the nearest supermarket to Sara
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Sara's location: global variables
int saraX, saraY;

// Euclidean distance between two points (returns double, takes 4 parameters)
double calDistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((double)x2 - x1, 2) + pow((double)y2 - y1, 2));
}

// Returns the number (1, 2 or 3) of the supermarket with the smallest distance
int evaluateDistance(double d1, double d2, double d3)
{
    if (d1 <= d2 && d1 <= d3)
        return 1;
    else if (d2 <= d1 && d2 <= d3)
        return 2;
    else
        return 3;
}

int main()
{
    srand(time(0));

    // Sara's location (global)
    saraX = rand();
    saraY = rand();

    // Supermarkets' locations (local)
    int x1 = rand(), y1 = rand();
    int x2 = rand(), y2 = rand();
    int x3 = rand(), y3 = rand();

    double d1 = calDistance(saraX, saraY, x1, y1);
    double d2 = calDistance(saraX, saraY, x2, y2);
    double d3 = calDistance(saraX, saraY, x3, y3);

    int nearest = evaluateDistance(d1, d2, d3);

    cout << "Your Current Location is:" << endl;
    cout << "longitude: " << saraX << endl;
    cout << "latitude: " << saraY << endl;
    cout << "Supermarket #" << nearest << " is the nearest one" << endl;

    return 0;
}
