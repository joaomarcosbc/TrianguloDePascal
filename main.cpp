#include <iostream>

using namespace std;

int fatorial(int n) {
  
  if (n == 0) {
    return 1;
  }
  else {
    return n * fatorial(n-1);
  }
};

float combinacaoSimples(int n1, int n2) {
  return fatorial(n1) / (fatorial(n2) * (fatorial(n1 - n2)));
};

class TrianguloPascal {
  public:

    int number;

  TrianguloPascal(int value) {
    this->number = value;
  }


  void print() {
    for (int a = 0; a < number; a++) {
      for (int b = 0; b < a + 1; b++) {
        cout << combinacaoSimples(a, b) << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  TrianguloPascal t = TrianguloPascal(10);

  t.print();
}

