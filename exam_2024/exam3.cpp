// #include "exam3.h"
// #include "exam2.h"
// #include "exam1.h"
//
//
// char* GetArr(char* arr1, uint32_t& size, uint32_t& cap) {
//     char ch;
//     while(std::cin.get(ch) && ch != '\n') {
//         arr1[size] = ch;
//         size++;
//
//         if (size >= cap) {
//             cap *= 2;
//             char* new_arr = nullptr;
//             new_arr = new char[cap];
//             for (uint32_t i = 0; i < size; i++) {
//                 new_arr[i] = arr1[i];
//             }
//             arr1 = new_arr;
//         }
//     }
//     arr1[size] = '\0';
//     return arr1;
// }
//
//
//
// int main() {
//
//     arr = GetArr(arr1,size,cap);
//
//     Animal* a1 = new ILion(1,arr, 69);
//     a1->MakeSound();
//
//     Animal* a2 = new Camel(1,arr2);
//     a2->MakeSound();
//
//     Animal* b = new God(1, arr2, 1,1488);
//     b->MakeSound();
//
//     std::cout << *a1;
//
//     MyVec<Animal*> vec;
//     vec.push_back(a1).push_back(a2).push_back(b);
//
//     Drob drob(8,2);
//     Drob drob2(drob);
//     std::cout << drob2;
//
//     char* arr = new char[2];
//     int size = 0;
//     int cap = 2;
//     char ch;
//     while (std::cin.get(ch) && ch != '\n') {
//         if (size >= cap - 1) {
//             Rezize(arr, size, cap);
//         }
//         arr[size] = ch;
//         size++;
//     }
//     arr[size] = '\0';
//
//     std::cout << arr << '\n';
//
//     return 0;
// }
