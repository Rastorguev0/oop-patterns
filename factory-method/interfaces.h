#pragma once

/*
 interfaces for creator class and object it creates
*/

class IObject {};

// creator doesn't have to be an interface class
// even doesn't have to has abstract methods (factory methods can be default-defined)
class Creator {
public:
    virtual IObject* FactoryMethod() const = 0;
    // and some other methods
    virtual void SomeMethod() {}
};
