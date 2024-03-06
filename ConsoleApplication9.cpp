#include <iostream>

int main(){
    int num;
    std::cout << "enter number of rows: "; //ввести к-сть рядків
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        //виводимо пробіли
        for (int j = 1; j <= num - i; j++) {
            std::cout << " ";
        }
        //перша частина ялинки з числами
        for (int j = 0; j <= i; j++) {
            std::cout << j;
        }
        //друга частина ялинки з зірочками
        for (int j = 0; j <= i - 1; j++) {
            std::cout << j;
        }
        std::cout << '\n';
      }
   return 0;
}

  