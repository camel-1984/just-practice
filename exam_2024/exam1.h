// #pragma once
// #include <iostream>
//
// template <typename T1, typename T2>
// class Drob {
// public:
//     explicit Drob(const T1 chis, const T2 znam) :
//         chis_(chis), znam_(znam), value(static_cast<double>(chis)
//              / static_cast<double>(znam)) {
//         if (znam == 0) {
//             std::cerr << "fail";
//             std::exit(1);
//         }
//     }
//
//     ~Drob() {
//         std::cout << "Allah akbar\n";
//     }
//
//     Drob(const Drob& other) {
//         znam_ = other.znam_;
//         value = other.value;
//         chis_ = other.chis_;
//     }
//
//     Drob& operator=(const Drob& other) {
//         if (&other == this) {
//             return *this;
//         }
//         this->chis_ = other.chis_;
//         this->znam_ = other.znam_;
//         return *this;
//     }
//
//     friend bool operator==(const Drob& one, const Drob& second) {
//         return one.value == second.value;
//     }
//
//     friend bool operator!=(const Drob& one, const Drob& second) {
//         return !(operator==(one,second));
//     }
//
//
//     Drob& operator++() {
//         this->value++;
//         this->chis_ += this->znam_;
//         return *this;
//     }
//
//     Drob operator++(int) {
//         Drob temp = *this;
//         this->value++;
//         this->chis_ += this->znam_;
//         return temp;
//     }
//
//     Drob& operator+=(Drob& other) {
//         this->chis_ += other.chis_;
//         this->znam_ += other.znam_;
//         this->value += other.value;
//         return *this;
//     }
//
//     const char& operator[](size_t idx) const {
//         return arr[idx];
//
//     }
//
//     Drob multi(int multik) {
//         chis_ *= multik;
//         return *this;
//     }
//
//     Drob& operator()(int multiplyer) {
//         this->multi(multiplyer);
//         return *this;
//     }
//
//     const double& operator*() const{
//         return value;
//     }
//
//     Drob* operator->()  {
//         return this;
//     }
//
//     friend std::ostream& operator<<(std::ostream& stream, const Drob& obj) {
//         stream << obj.chis_;
//         stream << "\n";
//         stream << "-";
//         stream << "\n";
//         stream << obj.znam_ << "\n";
//         stream << obj.value << "\n";
//         stream << "\n";
//         return stream;
//     }
//
// private:
//     T1 chis_;
//     T2 znam_;
//     double value;
//     char arr[4] = "alo";
// };
//
//
