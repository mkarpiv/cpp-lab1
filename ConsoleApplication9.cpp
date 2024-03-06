#include <iostream>

int main(){
    int num;
    std::cout << "enter number of rows: "; //вводимо к-сть рядків
    std::cin >> num;
    for (int i = 0; i < num; i++) {
        //перша частина
        for (int j = 1; j <= num - i; j++) {
            std::cout << " ";
        }
        //друга частина
        for (int j = 0; j <= i; j++) {
            std::cout << j;
        }
        //третя частина
        for (int j = 0; j <= i - 1; j++) {
            std::cout << j;
        }
        std::cout << '\n';
      }
   return 0;
}

  
