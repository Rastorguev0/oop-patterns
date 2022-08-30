#pragma once
/*
 abstract interface for builder.
 we can see the methods of builder are not pure virtual, they are default-empty
 so concrete builder can override exactly what it needs to.
*/

class IBuilder {
public:
    virtual void BuildPart() {}
};


/*
 director is another one object of this pattern.
 it manages the construction.
*/
class Director {
public:
    void Construct(IBuilder* builder) {
        //for (...) {
            builder->BuildPart();
        //}
    }
};