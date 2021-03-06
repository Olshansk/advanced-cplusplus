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

    std::ostream& operator << (std::ostream& out, const Complex& c) {
        out << "(" << c.getReal() << " + " << c.getImaginary() << "i" << ")";
        return out;
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
//Complex::Complex(): real(0), imaginary(0) {
//	// Nothing to do here
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
