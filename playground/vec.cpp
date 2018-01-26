#include "allocore/io/al_App.hpp"
// #include <iostream> // secretly included
using namespace al;
using namespace std;

int main() {
  Vec3f a(0, 0, 1), b(0, 1, 0);

  cout << a << endl;
  cout << b << endl;

  cout << a.dot(b) << endl;
  cout << cross(a, b) << endl;

  Vec3f c(1, 1, 1);

  cout << a.dot(c) << endl;
  cout << cross(a, c) << endl;
  cout << a.cross(c) << endl;

  a.lerp(b, 0.5);
  cout << a << endl;
}
