#include <iostream>

void fibonachi(long number, int* saved_results) {
    int array_count = 0;
    long var1 = 0;
    long var2 = 0;
    long sum = 0;
    if (number > 1) {
        for (int i = 0; i < number; i++) {
            sum = var1 + var2;
            var1 = var2;
            var2 = sum;
            if (i == 1) {
                sum = 1;
                var2 = 1;
            }
            saved_results[array_count++] = sum;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int size = 0;
    std::cout << "Введите число: ";
    std::cin >> size;
    int* saved_results = new int[size];
    std::cout << "Числа Фибоначчи: ";

    fibonachi(size, saved_results);
    for (int i = 0; i < size; i++)
    {
        std::cout << saved_results[i] << " ";
    }
    delete[] saved_results;
    return 0;
}