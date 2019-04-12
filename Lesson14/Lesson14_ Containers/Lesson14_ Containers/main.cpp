//
//  main.cpp
//  Lesson14_ Containers
//
//  Created by cfv on 2019/4/12.
//  Copyright © 2019 SpeedUp. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std  ;
int main(int argc, const char * argv[]) {
    std::list<std::string> l;
    l.push_back("Eat");
    l.push_back("ice cream");
    
    for (std::list<std::string>::iterator it = l.begin(); it != l.end(); it++) {
        std::cout<<*it<<"\n";
    }
    
    std::map<std::string, std::string> m;
//    m.insert(std::pair<string, string> ("Eat","I want eat now"));
//    m.insert(pair<string, string>("name","cfrank"));
//    cout<<m.at("Eat")<<"\n";     //比较麻烦的方法
    m["name"] ="cfv";
    cout<<m["name"]<<"\n";
    
    return 0;
}
