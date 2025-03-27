// #include "LiveCoding_2024.h"
//
// void parse_command_line(int argc, char** argv, char*& input_file, int& top) { // C-строка == (char*)
//     for (int i = 1; i < argc; i++) {
//         char* arg = argv[i]; // так как argv[i] - указатель на C строку, то arg - тоже указатель на C строку
//         if (std::strcmp(arg, "--input") == 0 && i + 1 < argc) { // функция std::strcmp (определена в <cstring> в C++)
//             // используется для побайтного сравнения двух C-строк (char*)
//
//             input_file = argv[++i];
//         } else if (std::strcmp(arg, "--top") == 0 && i + 1 < argc) {
//             top = std::atoi(argv[++i]); // <cstdlib> преобразует C-строку (char*) в int.
//             if (top <= 0) {
//                 std::cerr << "Invalid value for --top: " << argv[i] << std::endl;
//                 return;;
//             }
//         } else {
//             std::cerr << "Unknown argument: " << arg << std::endl;
//             return;;
//         }
//     }
//     if (input_file == nullptr) {
//         std::cerr << "Error: --input is required" << std::endl;
//         return;;
//     }
//     if (top == -1) {
//         std::cerr << "Error: --top is required" << std::endl;
//         return;;
//     }
// }
//
// void to_lower(char* &word) {
//     if (word == nullptr) return;
//     for (int i = 0; i < std::strlen(word); i++) {
//         word[i] = std::tolower(word[i]);
//     }
// }
//
// void resize(std::pair<char*, int>* &pairs, int &capacity) {
//
//     int new_capacity = capacity * 2;
//     std::pair<char*, int>* new_pairs = new std::pair<char*, int>[new_capacity];
//
//     for (int i = 0; i < capacity; i++) {
//         new_pairs[i] = pairs[i];
//     }
//
//     delete[] pairs;
//     pairs = new_pairs;
//     capacity = new_capacity;
// }
//
// int find_word(std::pair<char*, int>* pairs, int size, const char* word) {
//     for (int i = 0; i < size; i++) {
//         if (std::strcmp(pairs[i].first, word) == 0) {
//             return i;
//         }
//     }
//     return -1; // по дефолту возвращаем -1, если не нашли
// }
//
// void count_words(const char* filename, std::pair<char*, int>*& pairs, int& size, int& capacity) {
//     std::ifstream file(filename);
//     if (!file) {
//         std::cerr << "Error: Unable to open file " << filename << std::endl;
//         exit(1);
//     }
//
//     const int BUFFER_SIZE = 1024;
//     char buffer[BUFFER_SIZE]; // создаем c - stile string == char*
//
//     while (file.getline(buffer, BUFFER_SIZE)) { // имеет разный синтаксис для разных типов данных
//         // из file считывается строка и записывается в buffer пока не встретится '\0' или не достигнет buffer_size
//
//         char* token = std::strtok(buffer, " "); // разбиваем С-строку на С-подстроки с разделителем в виде пробела
//         // после первой итерации необходимо обновить токен с 1 параметром nullptr
//
//         to_lower(token);
//         while (token != nullptr) {
//
//             int index = find_word(pairs, size, token);
//             if (index != -1) {
//                 pairs[index].second++;
//             } else {
//                 if (size == capacity) {
//                     resize(pairs, capacity);
//                 }
//                 pairs[size].first = new char[std::strlen(token) + 1];
//                 std::strcpy(pairs[size].first, token);
//                 pairs[size].second = 1;
//                 size++;
//             }
//
//             token = std::strtok(nullptr, " ");
//             to_lower(token);
//         }
//     }
//
//     file.close();
// }
//
// void free_memory(std::pair<char*, int>* pairs, int size) {
//     for (int i = 0; i < size; i++) {
//         delete[] pairs[i].first; // иду по массиву указателей, чтобы удалить каждый указатель на C-строку
//     }
//     delete[] pairs; // удаляю сам массив
// }
//
// void sort_pairs(std::pair<char*, int>* pairs, int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = i; j < size; j++) {
//             if (pairs[i].second < pairs[j].second) {
//                 swap(pairs[i], pairs[j]);
//             }
//         }
//     }
// }
//
