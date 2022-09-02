#pragma once

/*
 specification of interfaces
*/

#include "interfaces.h"

// some types of object
class ObjectA : public IObject {};
class ObjectB : public IObject {};


// this creator can create A-objects
class CreatorA : public Creator {
public:
    virtual IObject* FactoryMethod() const override {
        return new ObjectA{};
    }
};

// this creator can create B-objects
class CreatorB : public Creator {
public:
    virtual IObject* FactoryMethod() const override {
        return new ObjectB{};
    }
};

/*
 as a result we have a flexible system
 in which we can replace sprecifications of objects
*/