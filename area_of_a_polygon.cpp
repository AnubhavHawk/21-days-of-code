#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
struct Point
{
    float x, y;
};
float crossProduct(Point p1, Point p2)
{
    return (p1.x * p2.y - p2.y * p2.x);
}
float areaOfPolygon(vector<Point> v, int n)
{
    float sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += crossProduct(v[i], v[(i+1)%n]);
    }
    return abs(sum)/2.0;
}
int main()
{
    Point p1 = {0, 0};
    Point p2 = {2, 0};
    Point p3 = {1, 5};
    vector <Point> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    int n = v.size();
    cout<<"area: "<<areaOfPolygon(v, n);
    return 0;
}