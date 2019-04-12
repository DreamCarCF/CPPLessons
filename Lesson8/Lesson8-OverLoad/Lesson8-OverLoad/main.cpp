//
//  main.cpp
//  Lesson8-OverLoad
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
class Hello {
public:
    void eatFood(){
        printf("Hello say : eat cake !~\n");
    }
    
    //函数重载
    //    void eatFood(char *name){
    //        printf("%s say : eat cake !~\n",name);
    //    }
    
    void eatFood(std::string name){
        std::string str = "eat fruits!~\n";
        str+=name;
        std::cout<<str<<"\n";
    }
};
int main(int argc, const char * argv[]) {
    Hello *h = new Hello();
    //    std::string name = "cfv";
    //    h->eatFood((char*)name.c_str());
    h->eatFood("cfv");
    return 0;
}
