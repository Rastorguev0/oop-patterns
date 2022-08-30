#pragma once

#include "interfaces.h"

/*
 usually builder provides a non abstract complex product
 i. e. its goal is builing a specific product.
*/

// the model of complex object
class ComplexProduct {
public:
    void Add() {}
};

// one standart builder
class ConcreteBuilder1 : public IBuilder {
public:
    ConcreteBuilder1() : o(new ComplexProduct) {}

    virtual void BuildPart() override {
        o->Add();
    }

    ComplexProduct* GetResult() {
        return o;
    }
private:
    ComplexProduct* o;
};

// custom builder that counts the steps as example
class ConcreteBuilder2 : public IBuilder {
public:
    virtual void BuildPart() override {
        counter++;
    }

    int GetStepsCount() {
        return counter;
    }

    ComplexProduct* GetResult() {
        return 0;
    }
private:
    int counter = 0;
};


/*
 then we create concrete builder we need
 and provide it to the director as abstract builder.
 then we can get the construction result.
 for example:
*/

int main() {
    ConcreteBuilder1* builder = new ConcreteBuilder1{};
    Director director;

    director.Construct(builder);
    ComplexProduct* product = builder->GetResult();
    // ...

    delete product;
    delete builder;
}