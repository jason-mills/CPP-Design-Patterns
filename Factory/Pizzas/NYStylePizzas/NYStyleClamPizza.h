#pragma once

#include "../Pizza.h"

class NYStyleClamPizza : public Pizza{
public:
    void prepare() override;
    void bake() override;
    void cut() override;
    void box() override;
};