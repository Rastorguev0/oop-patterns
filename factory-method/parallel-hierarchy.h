#pragma once

/*
 this is example of parallel hierarchy of classes
 factory methods can produce
*/

// manipulator lvl 1
class Manipulator {};

// manipulator lvl 2
class LineManipulator : public Manipulator {};

// manipulator lvl 2
class CircleManipulator : public Manipulator {};


// figure lvl 1
class Figure {
public:
    // default-defined method has a place to be
    virtual Manipulator* CreateManipulator() { return new Manipulator{}; }
    // and some other figure methods
};

// figure lvl 2
class LineFigure : public Figure {
public:
    virtual Manipulator* CreateManipulator() override { return new LineManipulator{}; }
};

// figure lvl 2
class CircleFigure : public Figure {
public:
    virtual Manipulator* CreateManipulator() override { return new CircleManipulator{}; }
};

/*
 as a result we have delegated manipulation duties from figure classes to manipulator classes
 and at the same time we clearly support the logical structure of figures and manipulators
*/