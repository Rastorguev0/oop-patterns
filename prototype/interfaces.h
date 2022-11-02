#pragma once

/*
 this example shows client that need to create objects
 but client doesn't know WHAT concrete object and HOW TO create
 so initialize client with concrete object (prototype)
 and create new concrete objects by clonning the prototype
*/

struct ICommonObject {
    virtual ICommonObject* Clone() = 0;

    // often is useful but not required for prototype pattern
    virtual void Reset() = 0;
};


class Client {
public:
    Client(ICommonObject* PROTOTYPE) : m_PROTOTYPE_OBJECT(PROTOTYPE) {}
    ~Client() { delete m_PROTOTYPE_OBJECT; }

    // need to create concrete object
    void Operation() {
        ICommonObject* newObj = m_PROTOTYPE_OBJECT->Clone();
        newObj->Reset();
        // do something
    }

private:
    ICommonObject* m_PROTOTYPE_OBJECT;
};