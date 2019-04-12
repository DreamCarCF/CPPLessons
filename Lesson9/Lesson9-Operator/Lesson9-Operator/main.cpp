//
//  main.cpp
//  Lesson9-Operator
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
class Point {
private:
    int x,y;
public:
    Point (int x, int y){
        this->x = x;
        this->y = y;
    };
    
    int getX(){
        return this->x;
    }
    
    int getY(){
        return this->y;
    }
    void add(Point p){
        add(p.getX(), p.getY());
    }
    void add(int x, int y){
        this->x+=x;
        this->y+=y;
    }
    
    void operator +=(Point p){  //运算符重载
        add(p);
    }
};


int main(int argc, const char * argv[]) {
    
//    Point p(10,10);
//    p.add(Point(23, 23)); //运算符重载
//    p+=Point(14, 14);
    
    Point *p = new Point(5,5);
    (*p)+=Point(2,2);
    
    std::cout << p->getY()<<"\n";
    return 0;
}

