#include "Ducks/MallardDuck.h"
#include "Turkeys/TurkeyAdapter.h"
#include "Turkeys/WildTurkey.h"

void testDuck(Duck* duck);

int main(){
    MallardDuck duck;
    WildTurkey turkey;
    TurkeyAdapter turkeyAdapter(&turkey);

    testDuck(&duck);
    testDuck(&turkeyAdapter);

    return 0;
}

void testDuck(Duck* duck){
    duck->quack();
    duck->fly();
}