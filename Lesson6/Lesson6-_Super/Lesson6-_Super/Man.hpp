    //
//  Man.hpp
//  Leson-3_Classes
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>
#include "People.hpp"
class Man: public People  {
public:
    Man(int age);
    void eatFood();
};

#endif /* Man_hpp */
