#include <iostream>
#include <cmath>


class Point {
    protected:
        float x;
        float y;
    public:
        void setX(float x){
            this->x = x; 
        }
        void setY(float y){
            this->y = y;
        }
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
        Point(float x = 0, float y = 0){
            this->x = x;
            this->y = y;
            std::cout << " Point\n";
        }
        ~Point(){
            std::cout << "~Point\n";
        }
        Point(const Point& p){
            std::cout << "I am in copy constructor Point\n";
            x = p.x;
            y = p.y;
        }
        long distance(Point b,Point d){
            return sqrt(pow(((double)b.getX()-d.getX()),2)+pow(((double)b.getY()-d.getY()),2));
        }
};

class Circle : public Point {

    private:
        float r;
    public:
        void setR(float r){
            this->r = r;
        }
        float getR(){
            return r;
        }
        float getL(){
            return 2*M_PI*r;
        }
        Circle(float r = 0){
            this->r = r;
            std::cout << " Circle\n";
        }
        ~Circle(){
            std::cout << "~Circle\n";
        }
        Circle(const Circle& c) :Point(c) {
            std::cout << "I am in copy constructor Circle\n";
            r = c.r;
        }
        
};

class Line : public Point {
    
    private:
        Point a;
    public:   
        long getL(){
            Point b(x,y);
            return distance(b,a);
        }
        void setAx(Point p){
            a.setX(p.getX());
        }
        void setX(Point p){
            this->x = p.getX();
        }
        void setAy(Point p){
            a.setY(p.getY());
        }
        void setY(Point p){
            this->y = p.getY();
        }
        float getAx(){
            return a.getX();
        }
        float getX(){
            return x;
        }
        float getAy(){
            return a.getY();
        }
        float getY(){
            return y;
        } 
        Line (Point p, Point d) {
            this->x = p.getX();
            this->y = p.getY();
            setAx(d.getX());
            setAy(d.getY());
            std::cout << " Line\n";    
        }
        ~Line(){
            std::cout << "~Line\n";
        }
        Line(const Line& l) :Point(l) {
            a = l.a;
            std::cout << "I am in copy constructor Line\n";    
        }
        void PrintCoord(Point p, Point d){
            float k = (d.getY()-p.getY())/(d.getX()-p.getX());
            for (int i=p.getX()+1; i < d.getX(); i++){
                std::cout << "(" << i << "," << k*(i-p.getX())+p.getY() << ")\n";
            }
        }
};

class Rectangle : public Point  {
    private:
        Point c; 
    public:
        Rectangle(Point p, Point d){
            this->x = p.getX();
            this->y = p.getY();
            setCx(d.getX());
            setCy(d.getY());
            std::cout << " Rectangle\n";
        }
        ~Rectangle(){
            std::cout << "~Rectangle\n";
        }
        Rectangle(const Rectangle& a) :Point(a){
            c = a.c;
            std::cout << " I am in copy constructor of Rectangle\n";
        } 
        void setX(Point p){
            this->x = p.getX();
        }
        void setCx(Point p){
            c.setX(p.getX());
        }
        void setY(Point p){
            this->y = p.getY();
        }
        void setCy(Point p){
            c.setY(p.getY());
        }
        float getX(){
            return x;
        }
        float getCx(){
            return c.getX();
        }
        float getY(){
            return y;
        }   
        float getCy(){
            return c.getY();
        }
        float getS(){
            return (getCy()-y)*(getCx()-x);
        }
        float getL(){
            return 2*(getCy()-y+getCx()-x);
        }
};

class Triangle : public Point {
    private:
        Point b,c;
    public:
       Triangle(Point p, Point d, Point m){
            this->x = p.getX();
            this->y = p.getY();
            setBx(d.getX());
            setBy(d.getY());
            setCx(m.getX());
            setCy(m.getY());
            std::cout << " Triangle\n";
        }
        ~Triangle(){
            std::cout << "~Triangle\n";
        }
        Triangle(const Triangle& a) :Point(a){
            b = a.b;
            c = a.c;
            std::cout << " I am in copy constructor of Triangle\n";
        }
        void setX(Point p){
            this->x = p.getX();
        }
        void setBx(Point p){
            b.setX(p.getX());
        }
        void setCx(Point p){
            c.setX(p.getX());
        }
        void setY(Point p){
            this->y = p.getY();
        }
        void setBy(Point p){
            b.setY(p.getY());
        }
        void setCy(Point p){
            c.setY(p.getY());
        }
        float getX(){
            return x;
        }
        float getBx(){
            return b.getX();
        }
        float getCx(){
            return c.getX();
        }
        float getY(){
            return y;
        }
        float getBy(){
            return b.getY();
        }
        float getCy(){
            return c.getY();
        }
        float getS(){
            return 0,5*fabs((x-getCx())*(getBy()-getCy())-(getBx()-getCx())*(y-getCy()));
        }
        float getL(){
            Point k(x,y);
            return distance(k,b)+distance(c,b)+distance(k,c);
        }


};

int main() {

    Point a,b,m(10,10);
    float aX,aY,bX,bY;
    std::cout << "Mtcreq x0:";
    std::cin >> aX; 
    a.setX(aX);
    std::cout << "Mtcreq y0:";
    std::cin >> aY;
    a.setY(aY);
    std::cout << "Mtcreq x1:"; 
    std::cin >> bX;
    b.setX(bX);
    std::cout << "Mtcreq y1:";   
    std::cin >> bY;
    b.setY(bY);
    Line l(a,b);
    l.PrintCoord(a,b);

    Circle c;
    c.setR(10);
    std::cout << "Shrjanagci yerkarutyun:" << c.getL() << "\n";
    std::cout << "Hatvaci yerkarutyun:" << l.getL() << "\n";

    Rectangle r(a,b);
    Rectangle i = r;
    std::cout << "Uxxankyan makers:" << r.getS() << "\n";
    std::cout << "Uxxankyan paragic:" << r.getL() << "\n";

    Triangle t(a,b,c);
    Triangle o = t;
    std::cout << "Yerankyan makeres:" << t.getS() << "\n";
    std::cout << "Yerankyan paragic:" << t.getL() << "\n";
       

    return 0;   
}

