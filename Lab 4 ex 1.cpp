#include<iostream>
#include<iomanip>

using namespace std;

struct Rectangle {
    float length;
    float width;
};

struct Square {
    float length;
};

struct Circle {
    float radius;
};

//calling functions
float areaOfCircle(Circle c);
float areaOfRectangle(Rectangle r);
float areaOfSquare(Square s);
void findPerimeter(Rectangle, float& perimeter);
float findCost(float costt, float& perimeter);

int main()
{
    struct Rectangle r1, r2;
    struct Square s;
    struct Circle c;

    float area_circle, area_yard, area_rec, area_square, green_yard, cost_val;

    //circle
    cout << "Enter the value of the radius of the pond : " << endl;
    cin >> c.radius;

    //small rectangle
    cout << "Enter the length and width of the rectangular building : " << endl;
    cin >> r1.length >> r1.width;

    //land rectangle
    cout << "Enter the length and width of the land : " << endl;
    cin >> r2.length >> r2.width;

    //square
    cout << "Enter the length and width of the square building : " << endl;
    cin >> s.length;

    area_circle = areaOfCircle(c);
    area_rec = areaOfRectangle(r1);
    area_yard = areaOfRectangle(r2);
    area_square = areaOfSquare(s);

    green_yard = area_yard - (area_circle + area_rec + area_square);

    cout << "Area of the green yard is : " << setiosflags(ios::fixed) << setprecision(3) << green_yard << endl;

    //Perimeter
    float perimeter;
    findPerimeter(r2, perimeter);

    cout << "Perimeter of the yard is : " << perimeter << endl;
    
    cout << "Enter the cost : ";
    cin >> cost_val;

    float cost_yard = findCost(cost_val, perimeter);

    cout << "Cost to build the fence is : " << setiosflags(ios::fixed) << setprecision(2) << cost_yard << endl;
}

float areaOfCircle(Circle c)
{
    return (22.0 / 7) * c.radius * c.radius;
}

float areaOfRectangle(Rectangle r)
{
    return r.length * r.width;
}

float areaOfSquare(Square s)
{
    return s.length * s.length;
}

void findPerimeter(Rectangle r, float& perimeter)
{
    perimeter = 2 * (r.width + r.length);
}

float findCost(float costt, float& perimeter)
{
    float cost = costt * perimeter;
    return cost;
}