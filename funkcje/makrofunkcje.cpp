#include <iostream>
#include <cmath>

#define OBWOD(a, b) (a * 2 + b * 2)
#define POLE(a, b) (a * b)

#define PARAMETRY(a, b)                              \
  std::cout << "Podaj bok prostokata" << endl;       \
  std::cin >> a;                                     \
  std::cout << "Podaj drugi bok prostokata" << endl; \
  std::cin >> b;

using namespace std;
int main()
{
  int a;
  int b;
  PARAMETRY(a, b);

#ifdef POLE
  std::cout << "Pole:" << POLE(a, b) << endl;
#endif

#ifdef OBWOD
  std::cout
      << "Obwód:" << OBWOD(a, b) << endl;
#endif

  return 0;
}