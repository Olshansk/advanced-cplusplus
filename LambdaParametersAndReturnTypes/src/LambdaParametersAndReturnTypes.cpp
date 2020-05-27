#include <iostream>
#include <functional>

using namespace std;

void runDivide(double (*pDivide)(double a, double b)) {
  cout << pDivide(9, 3) << endl;
}

int main(int argc, char* argv[]) {

  auto pDivide = [](double a, double b) -> double {
    if (b == 0) {
      return 0;
    }
    return a/b;
  };

  std::function< double(double, double) > pDvidide2 = [](double a, double b) -> double {
    return a/b;
  };

  cout << pDivide(8,2) << endl;
  cout << typeid(pDivide).name() << endl;
  cout << pDvidide2(10,2) << endl;
  runDivide(pDivide);

  return 0;
}

// //============================================================================
// // Name        : LambdaParametersAndReturnTypes.cpp
// // Author      :
// // Version     :
// // Copyright   : Your copyright notice
// // Description : Hello World in C++, Ansi-style
// //============================================================================
//
// #include <iostream>
// #include <string>
// #include <vector>
//
// using namespace std;
//
// void testGreet(void (*greet)(string)) {
//     greet("Bob");
// }
//
// void runDivide(double (*divide)(double a, double b)) {
//     auto rval = divide(9, 3);
//     cout << rval << endl;
// }
//
// int main()
// {
//     auto pGreet = [](string name) { cout << "Hello " << name << endl;};
//
//     pGreet("Mike");
//
//     testGreet(pGreet);
//
//     auto pDivide = [](double a, double b) -> double {
//         if(b == 0.0) {
//             return 0;
//         }
//         return a/b;
//     };
//
//     cout << pDivide(10.0, 5.0) << endl;
//     cout << pDivide(10.0, 0.0) << endl;
//
//     runDivide(pDivide);
//
//     return 0;
// }
