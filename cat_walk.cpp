#include<iostream>
#include<cmath>
using namespace std;
struct Point
{
    int x, y;
};
float triangleArea(Point p1, Point p2, Point p3) {
   return abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y - p2.y))/2.0);
}
string isInside(Point p1, Point p2, Point p3, Point p) {     //check whether p is inside or outside
   float area = triangleArea (p1, p2, p3);          //area of triangle ABC
   float area1 = triangleArea (p, p2, p3);         //area of PBC
   float area2 = triangleArea (p1, p, p3);         //area of APC
   float area3 = triangleArea (p1, p2, p);        //area of ABP

   if (area == area1 + area2 + area3)
    return "YES";
    else
        return "NO";        
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, x1, x2, y1, y2, a, b, c, d;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        // Point A = {x, y};
        // Point B = {x1, y1};
        // Point C = {x2, y2};
        // Point D = {x - a + b, y - c + d};
        int p1 = x - a + b; //-1
        int p2 = y - c + d; //0
        if (p1>=x1&&p1<=x2&&p2>=y1&&p2<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }
    return 0;
}