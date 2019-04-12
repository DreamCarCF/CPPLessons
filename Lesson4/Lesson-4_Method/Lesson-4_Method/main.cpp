//
//  main.cpp
//  Lesson-4_Method
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
class Object {
public:
    Object(){//构造方法，写一些初始化的操作
        printf("Create Object\n");
    };
    
    ~Object(){//析构方法
        printf("Delete Object\n");
    }
};

void runObject() {
                 //如果打开大括号，执行步骤如下：
                                //Create Object
                                // Delete Object
                                //RunObject End
                                // End
    //    {  
    Object obj;
    //    }
    printf("RunObject End\n"); //如果注释掉大括号，执行步骤如下
                                //Create Object
                                //RunObject End
                                // Delete Object
                                //  End
}

int main(int argc, const char * argv[]) {
    //    Object *obj = new Object();
    //    delete obj;
    runObject();
    printf("End\n");
    return 0;
}
