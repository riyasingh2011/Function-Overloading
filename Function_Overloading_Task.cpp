#include <iostream>

using namespace std;
double area(double radius){
cout<< "Area of Circle :"<< (3.14*radius*radius) << endl;
}
double area(double base,double height){
cout<< "Area of Triangle :" << (0.5*base*height) << endl;
}
int area(int length,int breadth){
cout << "Area of Rectangle: " << length*breadth << endl;
}

int main()
{
    int l,w;
    int Shape;
    double rad,b,h;
    cout << "Choose the shape of which the area is required:\n 1.Circle \t2.Triangle \t3.Rectangle\n";
    cin >> Shape;
    switch(Shape)
    {
    case 1:
        cout<< "Enter the Radius:"<< endl;
        cin>> rad;
        area(rad);
        break;
    case 2:
        cout << "Enter the base and then height: "<< endl;
        cin>> b>> h;
        area(b,h);
        break;
    case 3:
        cout<< "Enter the length and then the width:"<<endl;
        cin>> l>>w;
        area(l,w);
        break;
    default:
        cout<<"Invalid Choice"<<endl;

    }

    return 0;
}
