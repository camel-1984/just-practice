// #pragma once
//
// #include <iostream>
//
// class String {
// public:
//     String(char* ch, const int& size, const int& cap);
//     String(const String& other) = default;
//     virtual ~String() = default;
//
//     void GetSize() const;
//     void GetCap() const;
//     char* GetCh() const;
//
//     virtual void MakeSount();
//
//     void Resize() {
//         cap_ *= 2;
//         char* new_ch = new char[cap_];
//         for (int i = 0; i < size_; i++) {
//             new_ch[i] = ch_[i];
//         }
//         delete[] ch_;
//         ch_ = new_ch;
//     }
//
//     char& operator[](int& idx) {
//         return *(ch_+idx);
//     }
//
//     String& operator=(const String& other);
//
// protected:
//     char* ch_;
//     int size_;
//     int cap_;
//
// };
//
// class MyString : public String {
// private:
//     bool flag_;
// public:
//
//     MyString(char* ch, const int& size, const int& cap, const bool& flag);
//     void MakeSount() override;
//
// };
//
// inline std::ostream& operator<<(std::ostream& stream, const MyString& obj) {
//     if (obj.GetCh()) {
//         stream << obj.GetCh();
//     }
//     return stream;
// }
//
//
