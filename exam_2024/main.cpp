// #include <fstream>
// #include  <iostream>
//
// class Writer {
// public:
//     virtual void Sound() = 0;
//
//     virtual void write(const char* str) const = 0;
//
//
//     Writer* operator->() {
//         return this;
//     }
// };
//
// class file_writer : virtual public Writer {
// public:
//     file_writer() = delete;
//
//     explicit file_writer(const char* o_path) {
//         size = std::strlen(o_path);
//         cap = size * 2 + 1;
//         o_path_ = new char[cap];
//         for (int i = 0; i < size; i++) {
//             o_path_[i] = o_path[i];
//         }
//     }
//
//     file_writer(const file_writer& other) {
//         o_path_ = new char[other.cap];
//         for (int i = 0; i < other.size; i++) {
//             o_path_[i] = other.o_path_[i];
//         }
//         size = other.size;
//         cap = other.cap;
//     }
//
//     file_writer& operator=(const file_writer& other) {
//         if (this == &other) {
//             return *this;
//         }
//         char* temp = new char[other.cap];
//         for (int i = 0; i < other.size; i++) {
//             temp[i] = other.o_path_[i];
//         }
//         delete[] o_path_;
//         o_path_ = temp;
//         size = other.size;
//         cap = other.cap;
//         return *this;
//     }
//
//     ~file_writer() {
//         delete[] o_path_;
//     }
//
//     file_writer(const file_writer&& other) = delete;
//     file_writer operator=(const file_writer&& other) = delete;
//
//     void write(const char* str) const override {
//         size_t size = std::strlen(str);
//         std::ofstream file(o_path_);
//         if (!file.is_open()) {
//             std::cerr << "was not opened!\n";
//             std::exit(1);
//         }
//
//         for (int i = 0; i < size; i++) {
//             file << str[i];
//         }
//         file.close();
//     }
//
//     void Sound() override {
//         std::cout << "sound1\n";
//     }
//
//     // friend std::ostream& operator<<(std::ostream& stream, const file_writer& obj);
//     //
//     // char& operator[](const int idx) const {
//     //     if (idx >= size) {
//     //         std::cerr << "out of range\n";
//     //         std::exit(1);
//     //     }
//     //     return o_path_[idx];
//     // }
//
// private:
//     char* o_path_;
//     size_t size;
//     size_t cap;
// };
//
// class console_writer : virtual public Writer {
// public:
//     void Sound() final {
//         std::cout << "sound2\n";
//     }
//
//     void write(const char* str) const override {
//         size_t size = std::strlen(str);
//         for (int i = 0; i < size; i++) {
//             std::cout << str[i];
//         }
//         std::cout << '\n';
//     }
// };
//
// // std::ostream& operator<<(std::ostream& stream, const file_writer& obj) {
// //     if (obj.o_path_ != nullptr) {
// //         for (int i = 0; obj.size; i++) {
// //             stream << obj.o_path_[i];
// //         }
// //     }
// //     return stream;
// // }
//
// int main() {
//
//     file_writer f_writer("/Users/rostislavmolcanov/Documents/itmo/it/c++/practice/txt");
//     f_writer.write("Hello");
//     file_writer obj("/Users/rostislavmolcanov/Documents/itmo/it/c++/practice/txt2");
//     f_writer = obj;
//     f_writer.write("Hello2");
//
//     console_writer c_writer;
//     c_writer.write("Hello");
//
//     // std::cout << f_writer;
//
//     Writer* obj0 = new file_writer("/Users/rostislavmolcanov/Documents/itmo/it/c++/practice/txt");
//     Writer* obj01 = new console_writer();
//     std::vector<Writer*> vec;
//     vec.push_back(obj0);
//     vec.push_back(obj01);
//     vec[0]->write("alo");
//     vec[1]->write("alo2");
//
// //     file_writer f_writer("path/to/file"); /////
// //     console_writer c_writer{};
// //
// //     file_writer file_writer_1 = file_writer; /////////
// //     file_writer file_writer_2(file_writer);
// //
// //     c_writer.write("HELLO!"); /////////
// //     f_writer.write("HELLO!");
// //
// //     array {file_writer, console_writer};
// //     array[0].write("Hello!");
// //     array[1].write("Hello!");
// }