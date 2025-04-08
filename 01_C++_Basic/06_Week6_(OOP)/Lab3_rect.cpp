#include <iostream>

using namespace std;
class Rectangle{
    private:
    double width;
    double height;
    double area;
    double circumference;
public:
    Rectangle()
    {
        width=0;
        height=0;
        area=0;
        circumference=0;
    }
    Rectangle(double width, double height){
        this->width = width;
        this->height = height;
        this->area = width * height;
        this->circumference = 2 * (width + height);
    }
    void setWidth(double width){
        this->width = width;
    }
    void setHeight(double height){
        this->height = height;
    }
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    double getArea(){
        return area;
    }
    double getCircumference(){
        return circumference;
    }
    friend void class_Rectangle(Rectangle r);
};
void class_Rectangle(Rectangle r)
{
    cout << "entre Rectangle width" << endl;
    cin>>r.width ;
    cout << "entre Rectangle height" << endl;
    cin>>r.height ;
    r.area=r.width*r.height;
    cout << "Area of Rectangle: " << r.area << endl;
    r.circumference=2*(r.width+r.height);
    cout << "Circumference of Rectangle: " << r.circumference << endl;
}

int main()
{
    Rectangle R1;
    class_Rectangle(R1);
    return 0;
}