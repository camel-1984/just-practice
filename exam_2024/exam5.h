// #pragma once
//
// #include <iostream>
//
// class MyString {
// public:
//     MyString() {
//         size_ = 0;
//         cap_ = 3;
//         arr_ = new char[3];
//         arr_[0] = '\0';
//     }
//
//     explicit MyString(const char* string) {
//         size_ = std::strlen(string);
//         cap_ = size_ * 2 + 1;
//         arr_ = new char[cap_];
//         std::strcpy(arr_,string);
//     }
//
//     MyString(const MyString& other) {
//         size_ = other.size_;
//         cap_ = other.cap_;
//         arr_ = new char[cap_];
//         std::strcpy(arr_,other.arr_);
//     }
//
//     MyString& operator=(const MyString& other) {
//         if (&other == this) {
//             return *this;
//         }
//         size_ = other.size_;
//         cap_ = other.cap_;
//         char* temp = new char[cap_];
//         std::strcpy(temp,other.arr_);
//         delete[] arr_;
//         arr_ = temp;
//         return *this;
//     }
//
//     MyString(MyString&& other) noexcept :
//     size_(other.size_), cap_(other.cap_), arr_(other.arr_) {
//         other.arr_ = nullptr;
//         other.cap_ = 0;
//         other.size_ = 0;
//     }
//
//     MyString& operator=(MyString&& other) noexcept {
//         if (&other == this) {
//             return *this;
//         }
//         size_ = other.size_;
//         cap_ = other.cap_;
//         delete[] arr_;
//         arr_ = other.arr_;
//         other.arr_ = nullptr;
//         other.cap_ = 0;
//         other.size_ = 0;
//         return *this;
//     }
//
//     virtual ~MyString() {
//         delete[] arr_;
//         std::cout << "no boom\n";
//     }
//
//     uint32_t GetSize() const {
//         return size_;
//     }
//
//     uint32_t GetCap() const {
//         return cap_;
//     }
//
//     virtual void MakeSound() const {
//         std::cout << "booom\n";
//     }
//
//     void PushBack(const char* string) {
//         uint32_t size = std::strlen(string);
//         while (size_ + size >= cap_ - 1) {
//             this->Resize();
//         }
//         for (int i = 0; i < size; i++) {
//             arr_[size_] = string[i];
//             size_++;
//         }
//     }
//
//     void PushBack(const char string) {
//         uint32_t size = 1;
//         while (size_ + size >= cap_ - 1) {
//             this->Resize();
//         }
//         for (int i = 0; i < size; i++) {
//             arr_[size_] = string;
//             size_++;
//         }
//     }
//
//     MyString& multiply(int mult) {
//         size_ *= mult;
//         return *this;
//     }
//
//     MyString* operator->() {
//         return this;
//     }
//
//     uint32_t& operator*() {
//         return size_;
//     }
//
//     MyString& operator()(int mult) {
//         return this->multiply(mult);
//     }
//
//     char& operator[](int idx) const {
//         if (idx >= size_) {
//             std::cerr << "omg";
//             std::exit(1);
//         }
//         return arr_[idx];
//     }
//
//     inline friend std::ostream& operator<<(std::ostream& os, const MyString& obj);
//
// protected:
//     uint32_t size_;
//     uint32_t cap_;
//     char* arr_ = nullptr;
//
//     void Resize() {
//         cap_ *= 2;
//         char* temp = new char[cap_];
//         std::strcpy(temp,arr_);
//         delete[] arr_;
//         arr_ = temp;
//     }
//
// };
//
//
//
//
//
// std::ostream& operator<<(std::ostream& os, const MyString& obj) {
//     for (int i = 0; i < obj.size_; i++) {
//         os << obj.arr_[i];
//     }
//     return os;
// }
//
// class MyStringi : virtual public MyString {
//
//     void MakeSound() const override {
//         std::cout << "sosi!\n";
//     }
//
// };
