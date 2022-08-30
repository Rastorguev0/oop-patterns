#pragma once
/*
 abstract interfaces for factory and objects it creates.
 this is exactly what client work with
*/

class IObjectA {

};
class IObjectB {

};

class IAbstractFactory {
public:
    virtual IObjectA* CreateA() const = 0;
    virtual IObjectB* CreateB() const = 0;
};

/*
 how to use example:
*/
void CreateObjects(const IAbstractFactory* f) {
    IObjectA* A = f->CreateA();
    IObjectB* B = f->CreateB();
    // ...
    delete A;
    delete B;
}