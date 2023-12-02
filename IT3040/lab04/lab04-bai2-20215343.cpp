#include <iostream>
#include <cmath>
#include <iomanip>
#include <utility>
using namespace std;
using Point = pair<double, double>;

double area(Point a, Point b, Point c)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    // Calculate the area of triangle using coordinates of 3 points
    double area = abs((a.first * (b.second - c.second) + b.first * (c.second - a.second) +
                       c.first * (a.second - b.second)) *
                      0.5);
    return area;
}

int main()
{
    cout << setprecision(2) << fixed;
    cout << area({1, 2}, {2.5, 10}, {15, -5.25}) << endl;
    return 0;
}