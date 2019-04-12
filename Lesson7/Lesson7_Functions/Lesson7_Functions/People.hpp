//
//  People.hpp
//  Leson-1_OOP
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
class People {
    private :
    int age;
    int sex;
    
    public :
    People ();
    People (int age, int sex);
    int getAge();
    int getSex();
    virtual void eatFood(); //虚函数
    virtual void singSong()=0; //抽象方法，可以将实现方法放到Man.cpp里去.
};
#endif /* People_hpp */
