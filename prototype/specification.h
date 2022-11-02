#pragma once
#include "interfaces.h"

struct ObjectA : public ICommonObject {
    ICommonObject* Clone() override {
        ObjectA* clone = new ObjectA;
        *clone = *this;
        return clone;
    }

    void Reset() override {
        data = 0;
    }
    int data = 0;
};

struct ObjectB : public ICommonObject {
    ICommonObject* Clone() override {
        ObjectB* clone = new ObjectB;
        *clone = *this;
        return clone;
    }

    void Reset() override {
        data = false;
    }
    bool data = false;
};


int main() {
    Client client(new ObjectA);
    client.Operation();
    return 0;
}