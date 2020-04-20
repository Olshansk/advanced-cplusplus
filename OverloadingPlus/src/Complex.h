#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

namespace olshansky {

    class Complex {
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex& other);
        const Complex& operator = (const Complex& other);

        double getReal() const;
        double getImaginary() const;
    };

    std::ostream& operator << (std::ostream& out, const Complex& complex);
    Complex operator + (const Complex& c1, const Complex& c2);
    Complex operator + (double d, const Complex& c);
    Complex operator + (const Complex& c, double d);
}

#endif
///*
// * Complex.h
// *
// *  Created on: 17 Oct 2014
// *      Author: johnwpurcell
// */
//
//#ifndef COMPLEX_H_
//#define COMPLEX_H_
//
//#include <iostream>
//using namespace std;
//
//namespace caveofprogramming {
//
//class Complex {
//private:
//	double real;
//	double imaginary;
//
//public:
//	Complex();
//	Complex(double real, double imaginary);
//	Complex(const Complex &other);
//	const Complex &operator=(const Complex &other);
//
//	double getReal() const {
//		return real;
//	}
//	double getImaginary() const {
//		return imaginary;
//	}
//};
//
//ostream &operator<<(ostream &out, const Complex &c);
//Complex operator+(const Complex &c1, const Complex &c2);
//Complex operator+(const Complex &c1, double d);
//Complex operator+(double d, const Complex &c1);
//
//} /* namespace caveofprogramming */
//
//#endif /* COMPLEX_H_ */
