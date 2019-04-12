//
//  main.cpp
//  Lesson12_Ref
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
class Point {
private:
    int x,y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    };
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void add(Point &p){ // & 符号 代表引用， 指针也可以， 避免内存不必要的消耗
        this->x+=p.x;
        this->y+=p.y;
    }
};
int main(int argc, const char * argv[]) {
    Point p(1,1);
    Point p1(2,3);
    p.add(p1);
    
    std::cout<<p.getY()<<"\n";
    return 0;
}
