// #include "exam4.h"
//
// String::String(char* ch, const int& size, const int& cap) :
//     ch_(ch), size_(size), cap_(cap) {}
//
// void String::GetCap() const {
//     std::cout << size_ << "\n";
// }
//
// char* String::GetCh() const {
//     return ch_;
// }
//
// void String::GetSize() const {
//     std::cout << cap_ << "\n";
// }
//
// void String::MakeSount() {
//     std::cout << "kia!\n";
// }
//
// String& String::operator=(const String& other) {
//     if (&other == this) {
//         return *this;
//     }
//     size_ = other.size_;
//     cap_ = other.cap_;
//     char* new_arr = new char[cap_];
//     for (int i = 0; i< size_; i++) {
//         new_arr[i] = other.ch_[i];
//     }
//     delete[] ch_;
//     ch_ = new_arr;
//     return *this;
// }
//
// MyString::MyString(char* ch, const int& size, const int& cap, const bool& flag) :
//           String(ch,size,cap), flag_(flag){}
//
// void MyString::MakeSount() {
//     std::cout << "boo!\n";
//
// }

// int main() {
     // char arr[] = "abfsdgsgsg";
     // MyString obj(arr, 3, 7,  true);
     // std::cout << obj;
//
// }
