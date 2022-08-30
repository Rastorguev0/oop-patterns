#pragma once
/*
 concrete internal specification
*/

#include "interfaces.h"

// one objects family
class ConcreteObjectA1 : public IObjectA {};
class ConcreteObjectB1 : public IObjectB {};


// another one objects family
class ConcreteObjectA2 : public IObjectA {};
class ConcreteObjectB2 : public IObjectB {};


// and another one objects family
class ConcreteObjectA3 : public IObjectA {};
class ConcreteObjectB3 : public IObjectB {};


// concrete factory for the first objects family
class ConcreteFactory1 : public IAbstractFactory {
public:

    IObjectA* CreateA() const override {
        return new ConcreteObjectA1;
    }
    IObjectB* CreateB() const override {
        return new ConcreteObjectB1;
    }

};

// concrete factory for the second objects family
class ConcreteFactory2 : public IAbstractFactory {
public:

    IObjectA* CreateA() const override {
        return new ConcreteObjectA2;
    }
    IObjectB* CreateB() const override {
        return new ConcreteObjectB2;
    }

};

// concrete factory for the third objects family
class ConcreteFactory3 : public IAbstractFactory {
public:

    IObjectA* CreateA() const override {
        return new ConcreteObjectA3;
    }
    IObjectB* CreateB() const override {
        return new ConcreteObjectB3;
    }

};

/*
 then we create concrete factory we need
 and provide it to client as abstract factory.
 for example:
*/

int main() {
    IAbstractFactory* factory = new ConcreteFactory1{};
    CreateObjects(factory);
    delete factory;
}