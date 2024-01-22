#include "DarkRoast.h"

DarkRoast::DarkRoast(){
    description = "Dark Roast Coffee";
}

DarkRoast::DarkRoast(const DarkRoast &darkRoast){
    std::cout << "dark roast copy" << std::endl;
    description = darkRoast.description;
}

double DarkRoast::cost(){
    return 0.99;
}