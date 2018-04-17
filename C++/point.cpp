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
        Point(){
            std::cout << " Point\n";
        }
        ~Point(){
            std::cout << "~Point\n";
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
        Circle(){
            std::cout << " Circle\n";
        }
        ~Circle(){
            std::cout << "~Circle\n";
        }
        
};

class Line : public Point {
    
    private:
        Point a, b;
    public:   
        float getL(){
            return sqrt(pow(((double)a.getX()-b.getX()),2) + pow(((double)a.getY() - b.getY()),2));
        }
        void setAx(float x){
            a.setX(x);
        }
        void setBx(float x){
            b.setX(x);
        }
        void setAy(float y){
            a.setY(y);
        }
        void setBy(float y){
            b.setY(y);
        }
        float getAx(){
            a.getX();
        }
        float getBx(){
            b.getX();
        }
        float getAy(){
            a.getY();
        }
        float getBy(){
            b.getY();
        }
        Line (float Ax, float Ay, float Bx, float By) {
            setAx(Ax);
            setAy(Ay);
            setBx(Bx);
            setBy(By);
            std::cout << " Line\n";    
        }
        ~Line(){
            std::cout << "~Line\n";
        }
};

class Rectangle : public Point  {
    private:
        Point a,c;
        float s,l;
    public:
        Rectangle(float Ax, float Ay, float Cx, float Cy){
            setAx(Ax);
            setAy(Ay);
            setCx(Cx);
            setCy(Cy);
            std::cout << " Rectangle\n";
        }
        ~Rectangle(){
            std::cout << "~Rectangle\n";
        }
        Rectangle(const Rectangle& a){
            std::cout << " I am in copy constructor of Rectangle\n";
        } 
        void setAx(float x){
            a.setX(x);
        }
        void setCx(float x){
            c.setX(x);
        }
        void setAy(float y){
            a.setY(y);
        }
        void setCy(float y){
            c.setY(y);
        }
        float getAx(){
            a.getX();
        }
        float getCx(){
            c.getX();
        }
        float getAy(){
            a.getY();
        }   
        float getCy(){
            c.getY();
        }
        float getS(){
            return (getCy()-getAy())*(getCx()-getAx());
        }
        float getL(){
            return 2*(getCy()-getAy()+getCx()-getAx());
        }
};

class Triangle : public Point {
    private:
        Point a,b,c;
        float s,l;
    public:
       Triangle(float Ax, float Ay, float Bx, float By, float Cx, float Cy){
            setAx(Ax);
            setAy(Ay);
            setBx(Bx);
            setBy(By);
            setCx(Cx);
            setCy(Cy);
            std::cout << " Triangle\n";
        }
        ~Triangle(){
            std::cout << "~Triangle\n";
        }
        Triangle(const Triangle& a){
            std::cout << " I am in copy constructor of Triangle\n";
        }
        void setAx(float x){
            a.setX(x);
        }
        void setBx(float x){
            b.setX(x);
        }
        void setCx(float x){
            c.setX(x);
        }
        void setAy(float y){
            a.setY(y);
        }
        void setBy(float y){
            b.setY(y);
        }
        void setCy(float y){
            c.setY(y);
        }
        float getAx(){
            a.getX();
        }
        float getBx(){
            b.getX();
        }
        float getCx(){
            c.getX();
        }
        float getAy(){
            a.getY();
        }
        float getBy(){
            b.getY();
        }
        float getCy(){
            c.getY();
        }
        float getS(){
            return 0,5*fabs((getAx()-getCx())*(getBy()-getCy())-(getBx()-getCx())*(getAy()-getCy()));
        }
        float getL(){
            return sqrt(pow(getAx()-getBx(),2)+pow(getAy()-getBy(),2))+
                     sqrt(pow(getAx()-getCx(),2)+pow(getAy()-getCy(),2))+
                       sqrt(pow(getBx()-getCx(),2)+pow(getBy()-getCy(),2));
        }


};

int main() {

    float x,y,X,Y,k;
    std::cout << "Mtcreq x0:";
    std::cin >> x;
    std::cout << "Mtcreq y0:";
    std::cin >> y;
    std::cout << "Mtcreq x1:"; 
    std::cin >> X;
    std::cout << "Mtcreq y1:";   
    std::cin >> Y;
    k = (Y-y)/(X-x);

    for (int i=x+1; i < X; i++ ) {
        std::cout << "(" << i << "," << k*(i-x)+y << ")\n";
    }
    
    Circle c;
    c.setR(10);
    std::cout << "Shrjanagci yerkarutyun:" << c.getL() << "\n";

    Line l(1,1,5,6);
    std::cout << "Hatvaci yerkarutyun:" << l.getL() << "\n";

    Rectangle R(2,2,10,10);
    Rectangle r = R;
    std::cout << "Uxxankyan makers:" << R.getS() << "\n";
    std::cout << "Uxxankyan paragic:" << R.getL() << "\n";

    Triangle T(0,0,0,5,5,0);
    Triangle t = T;
    std::cout << "Yerankyan makeres:" << T.getS() << "\n";
    std::cout << "Yerankyan paragic:" << T.getL() << "\n";
       

    return 0;   
}



















