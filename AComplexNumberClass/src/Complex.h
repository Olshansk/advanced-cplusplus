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

        Complex(const Complex &other);

        const Complex &operator=(const Complex &other);

        double getReal() const {
            return real;
        }

        double getImaginary() const {
            return imaginary;
        }
    };

    std::ostream &operator<<(std::ostream &out, const Complex &c);

} // olshansky

#endif // COMPLEX_H_


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
//
//} /* namespace caveofprogramming */
//
//#endif /* COMPLEX_H_ */
