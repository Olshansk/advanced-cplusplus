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

    class iterator2;

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

    iterator2 begin() {
        return iterator2(0, *this);
    }

    iterator2 end() {
        return iterator2(_size, *this);
    }

};

template<class T>
class ring2<T>::iterator2 {
private:
    ring2<T>& _ring2;
    int _pos;

public:
    iterator2(int pos, ring2<T>& ring2): _pos(pos), _ring2(ring2) {
    }

    iterator2& operator ++ (int) {
        _pos++;
        return *this;
    }

    iterator2& operator ++ () {
        _pos++;
        return *this;
    }

    T& operator *() {
        return _ring2.get(_pos);
    }

    bool operator != (const iterator2& other) {
        return _pos != other._pos;
    }
};

#endif