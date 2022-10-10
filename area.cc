#include <iostream>
#include <math.h>

using namespace std;

class AreaShape
{
    float area;

  public:
    AreaShape(float radius)
    {
        area = 3.14 * radius * radius;
    }
    AreaShape(int length, int breadth)
    {
        area = length * breadth;
    }
    AreaShape(float base, float height)
    {
        area = 0.5 * (base * height);
    }
    void display()
    {
        cout << "Area:\t" << area << endl;
    }
};
int main()
{
    int ch;
    float radius, height, base;
    int length, breadth;
    std::cout<<"enter the choice;1-area of circle,2-area of square,3-area of triangle";
    std::cin>>ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter Radius of the Circle:\t";
            cin >> radius;
            AreaShape area(radius);
            area.display();
        }
        break;

        case 2:
        {
            cout << "Enter Length and Breadth of the Rectangle:\t";
            cin >> length >> breadth;
            AreaShape area(length, breadth);
            area.display();
        }
        break;

        case 3:
        {
            cout << "Enter Base and Height of the Triangle:\t";
            cin >> base >> height;
            AreaShape area(base, height);
            area.display();
        }
        break;
        default:
            cout << "Invalid Choice";
        }
        return 0;
} 
