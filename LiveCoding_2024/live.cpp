// #include "LiveCoding_2024.h"
//
// int main(int argc, char** argv) { // argv - указатель на массив указателей на C строки
//
//     // в функциях char** == char* argv[], но при инициализации нет, ибо важен размер массива
//
//     char* input_file = nullptr; // беру из массива указателей указатель на C сроку (соблюдаю типы)
//     int top = -1; // по дефолту если чета инициализировать, то -1
//
//     parse_command_line(argc, argv, input_file, top);
//
//     int capacity = 2;
//     int size = 0;
//
//     std::pair<char*, int>* pairs = new std::pair<char*, int>[capacity]; // массив пар указателей на C строки и int
//
//     // Подсчёт слов
//     count_words(input_file, pairs, size, capacity);
//
//     // Сортировка по частоте
//     sort_pairs(pairs, size);
//
//     // Вывод top-N самых популярных слов
//     for (int i = 0; i < top && i < size; i++) {
//         std::cout << pairs[i].first << "\n";
//     }
//
//     // Очистка памяти
//     free_memory(pairs, size);
//
//     return 0;
// }