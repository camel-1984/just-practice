// #include "parse2.h"
//
// void parse_command_line(int argc, char* argv[], std::string &input_file, std::string &output_file, bool &flag) {
//     for (int i = 1; i < argc; i++) {
//         char* arg = argv[i];
//         if (strcmp(arg, "-f") == 0) {
//             flag = true;
//         } else if (strcmp(arg, "-i") == 0 && i + 1 < argc) {
//             input_file = argv[++i];
//         } else if (strcmp(arg, "-o") == 0 && i + 1 < argc) {
//             output_file = argv[++i];
//         } else {
//             std::cerr << "ERROR";
//         }
//     }
// }
//
// void parse_input(std::vector<Parse2> &vec, std::string input_file) {
//     std::ifstream file(input_file);
//     if (!file.is_open()) {
//         std::cerr << "idiot";
//     }
//     std::string name;
//     int age;
//     while (file >> name >> age) {
//         vec.push_back(Parse2(name, age));
//     }
//     file.close();
// }
//
// void write(std::vector<Parse2> vec, std::string output_file) {
//     std::ofstream file(output_file);
//     if (!file.is_open()) {
//         std::cerr << "idiot";
//     }
//     for (Parse2 p : vec) {
//         file << p.get_name() << " " << p.get_age() << std::endl;
//     }
//     file.close();
// }
//
// Parse2::Parse2(std::string name, int age) {
//     this->name = name;
//     this->age = age;
// }
// Parse2::Parse2(){}
//
// Parse2::~Parse2(){}
//
// int Parse2::get_age() {
//     return age;
// }
//
// std::string Parse2::get_name() {
//     return name;
// }
//
// void Parse2::set_age(int age) {
//     this->age = age;
//
// }
//
// void Parse2::set_name(std::string name) {
//     this->name = name;
//
// }
//
