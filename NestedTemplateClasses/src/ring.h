#ifndef RING_H_
#define RING_H_
#include <iostream>
#include <vector>

using namespace std;

template <class T>
class ring {
private:
    vector<T> _data;
    int _cur_index = 0;

public:
    class iterator;

    ring(int size) {
//        _data.reserve(size);
        _data.resize(size);
    }

    void add(T t) {
        _data[_cur_index] = t;
        _cur_index = _cur_index == _data.size() - 1 ? 0 : _cur_index + 1;
    }

    T get(int i) {
        return _data[i];
    }

    int size() {
        return _data.size();
    }

};

template <class T>
class ring<T>::iterator {

};

# endif





////ring.h
//
//#pragma once
//#include <vector>
//
//// Note that this implementation of the ring class was written by
//// Paul T (DeveloperPaul123@github)
//template <typename T>
//class ring
//{
//	std::vector<T> _data;
//	int _cur_index;
//public:
//	class iterator;
//
//	ring(int size) : _cur_index(0) {
//		_data.reserve(size);
//		for(auto i = 0; i < size; i++)
//		{
//			_data.push_back(T());
//		}
//	}
//
//	void add(T value)
//	{
//		if (_cur_index < _data.size())
//		{
//			_data[_cur_index] = value;
//			_cur_index++;
//		}
//		else
//		{
//			_cur_index = 0;
//			_data[_cur_index] = value;
//		}
//
//	}
//
//	T get(int index)
//	{
//		if (index < _data.size())
//		{
//			return _data[index];
//		}
//		return T();
//	}
//
//	int size()
//	{
//		return static_cast<int>(_data.size());
//	}
//
//};
//
//template<typename T>
//class ring<T>::iterator
//{
//public:
//	void print() const;
//};
//
//template<typename T>
//void ring<T>::iterator::print() const
//{
//	std::cout << "Hello from iterator." << std::endl;
//}
