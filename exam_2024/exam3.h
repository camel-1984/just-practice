// #pragma once
// #include <iostream>
//
// inline char arr1[2];
// inline uint32_t size = 0;
// inline uint32_t cap = 2;
// inline char* arr = nullptr;
// inline char arr2[6] = "Camel";
//
// template <typename F>
// void Rezize(F*& arr, int& size, int& cap) {
//     int new_cap = cap * 2;
//     F* new_arr = nullptr;
//     new_arr = new F[new_cap];
//     for (int i = 0; i < size; i++) {
//         new_arr[i] = arr[i];
//     }
//     delete[] arr;
//     arr = new_arr;
//     cap = new_cap;
// }
//
// char* GetArr(char* arr1, uint32_t& size, uint32_t& cap);
//
// class Animal {
// public:
//     Animal(const int& amount, char* type) :
//         amount_(amount), type_(type) {}
//
//     virtual ~Animal() = default;
//
//     virtual void MakeSound() const {
//         std::cout << "Я ЖИВОТНОЕ!\n";
//     }
//     virtual char* GetType() = 0;
//
//     char& operator[](const int& idx) const {
//         return *(type_+idx);
//     }
//
//     Animal& operator++() {
//         amount_++;
//         return *this;
//     }
//
//
//     friend std::ostream& operator<<(std::ostream& stream, const Animal& obj);
//
// protected:
//     int amount_;
//     char* type_;
// };
//
// class ILion : virtual public Animal {
// public:
//     ILion(const int& amount, char* type, const int& sm) :
//         Animal(amount, type), sm_(sm) {}
//
//
//     void MakeSound() const override {
//         std::cout << "Я ЛЕВ!\n";
//     }
//
//     char* GetType() override {
//         return type_;
//     }
// protected:
//     int sm_;
// };
//
// class Camel : virtual public Animal {
// public:
//     Camel(const int& amount, char* type) :
//         Animal(amount, type){}
//
//     void MakeSound() const override {
//         std::cout << "Я ВЕРБЛЮД!\n";
//     }
//
//     char* GetType() override {
//         return type_;
//     }
// protected:
//     const char Kspot = 'G';
// };
//
// class God : public Camel, public ILion {
// public:
//     God(const int& amount, char* type, const int& sm, short time) :
//        Animal(amount, type),
//        ILion(amount, type, sm),
//        Camel(amount, type),
//        time_(time) {}
//
//
//     void MakeSound() const final {
//         std::cout << "Я БОГ!\n";
//     }
//
//     char* GetType() final {
//         return type_;
//     }
// private:
//     short time_;
// };
//
// inline std::ostream& operator<<(std::ostream& stream, const Animal& obj) {
//     stream << obj.amount_ << " " << obj.type_ << "\n";
//     return stream;
// }
