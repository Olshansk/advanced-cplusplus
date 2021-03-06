#include <iostream>
#include "Complex.h"

namespace olshansky {
    Complex::Complex(): real(0), imaginary(0) {
    }

    Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
    }

    Complex::Complex(const Complex& other) {
        real = other.real;
        imaginary = other.imaginary;
    }

    const Complex& Complex::operator = (const Complex& other) {
        this->imaginary = other.imaginary;
        this->real = other.real;
        return *this;
    }

    double Complex::getReal() const {
        return real;
    }

    double Complex::getImaginary() const {
        return imaginary;
    }


    bool Complex::operator == (const Complex& other) {
        return this->getImaginary() == other.getImaginary() && this->getReal() == other.getReal();
    }

    bool Complex::operator != (const Complex& other) {
        return this->getImaginary() != other.getImaginary() || this->getReal() != other.getReal();
    }

    Complex Complex::operator * () {
        return Complex(this->getReal(), -this->getImaginary());
    }

    std::ostream& operator << (std::ostream& out, const Complex& c) {
        out << "(" << c.getReal() << " + " << c.getImaginary() << "i)" << std::flush;
        return out;
    }

    Complex operator + (const Complex& c1, const Complex& c2) {
        return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    }

    Complex operator + (double d, const Complex& c) {
        return Complex(c.getReal() + d, c.getImaginary());
    }

    Complex operator + (const Complex& c, double d) {
        return Complex(c.getReal() + d, c.getImaginary());
    }

}

///*
// * Complex.cpp
// *
// *  Created on: 17 Oct 2014
// *      Author: johnwpurcell
// */
//
//#include "Complex.h"
//
//namespace caveofprogramming {
//
//ostream &operator<<(ostream &out, const Complex &c) {
//	out << "(" << c.getReal() << "," << c.getImaginary() << ")";
//	return out;
//}
//
//Complex operator+(const Complex &c1, const Complex &c2) {
//	return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
//}
//
//Complex operator+(const Complex &c1, double d) {
//	return Complex(c1.getReal()+d, c1.getImaginary());
//}
//
//Complex operator+(double d, const Complex &c1) {
//	return Complex(c1.getReal()+d, c1.getImaginary());
//}
//
//Complex::Complex(): real(0), imaginary(0) {
//	// TODO Auto-generated constructor stub
//
//}
//
//Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {
//
//}
//
//Complex::Complex(const Complex &other) {
//	real = other.real;
//	imaginary = other.imaginary;
//}
//
//const Complex &Complex::operator=(const Complex &other) {
//	real = other.real;
//	imaginary = other.imaginary;
//
//	return *this;
//}
//
//} /* namespace caveofprogramming */
