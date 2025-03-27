// #pragma once
// #include <iostream>
//
// template <typename T>
// class MyVec {
//
// public:
//     MyVec() {
//         cap_ = new uint32_t(2);
//         size_ = new uint32_t(0);
//         arr = new T[2];
//     }
//     MyVec(const uint32_t& size, const T& value) {
//         size_ = new uint32_t(size);
//         cap_ = new uint32_t(2);
//         while(*cap_ <= *size_) {
//             *cap_ *= 2;
//         }
//         arr = new T[*cap_];
//         for (uint32_t i = 0; i < *size_; i++) {
//             arr[i] = value;
//         }
//     }
//     MyVec(const MyVec& other) {
//         size_ = other.size_;
//         cap_ = other.cap_;
//         arr = other.arr;
//     }
//     ~MyVec() {
//         std::cout << "good bye\n";
//     }
//
//     uint32_t& GetSize() const {
//         return *size_;
//     }
//
//     MyVec& resize() {
//         *cap_ *= 2;
//         T* new_arr = new T[*cap_];
//         for(uint32_t i = 0; i < *size_; i++) {
//             new_arr[i] = arr[i];
//         }
//         delete[] arr;
//         arr = new_arr;
//         return *this;
//     }
//     MyVec& push_back(const T& a) {
//         *size_ += 1;
//         while(*cap_ <= *size_) {
//             resize();
//         }
//         arr[*size_ - 1] = a;
//         return *this;
//     }
//
//     T& operator[](uint32_t idx) const {
//         return arr[idx];
//     }
//
//     MyVec& operator=(const MyVec& other) {
//         if (&other == this) {
//             return *this;
//         }
//         size_ = other.size_;
//         cap_ = other.cap_;
//         arr = other.arr;
//         return *this;
//     }
//
//     friend std::ostream& operator<<(std::ostream& stream, const MyVec& obj) {
//         for (uint32_t i = 0; i < obj.GetSize(); i++) {
//             stream << obj[i] << " ";
//         }
//         stream << "\n";
//         return stream;
//     }
//
// private:
//     T* arr = nullptr;
//     uint32_t* cap_ = nullptr;
//     uint32_t* size_ = nullptr;
// };
