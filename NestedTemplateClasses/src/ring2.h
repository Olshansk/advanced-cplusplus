#ifndef RING2_H_
#define RING2_H_

#include <MacTypes.h>
#include <iostream>

template <class T>
class ring2 {
private:
    int _size;
    int _index;
    T* _values;

public:
    ring2(int size): _size(size), _index(0), _values(NULL) {
        _values = new T[size];
    }

    ~ring2() {
        delete [] _values;
    }

    void add(T t) {
        _values[_index] = t;
        _index = _index == (_size - 1) ? 0 : _index + 1;
    }

    T& get(int i) {
        return _values[i];
    }

    int size() {
        return _size;
    }

};

#endif