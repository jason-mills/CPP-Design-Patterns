#pragma once

#include "../Pizza.h"

class NYStyleCheesePizza : public Pizza{
public:
    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;
};