// #include "fmain.h"
// #include <fstream>
//
// // void f(int*arr, int n);
// //
// // void reverse(int* arr, int n);
// //
// // void modify(int *ptr);
// //
// // enum Day {sunday = 0, monday = 1, tuesday};
// //
// // using custom_t = std::string;
// // typedef std::vector<custom_t> custom_vector_t;
// //
// // namespace mine {
// //     int x = 1;
// // }
// //
// // std::vector <int> first_three_multiples(int num);
// //
//
// // void swap(int* px, int* py) {
// //     int temp = *px;
// //     *px = *py;
// //     *py = temp;
// // }
// //
// // struct Point {
// //     int x;
// //     int y;
// // };
//
// int main() {
//     //
//     // char local_str[] = "Hello world";
//     // char* read_Only_local_str = "Hello world";
//     //
//     // Point* ptr = new Point;
//     // ptr->x = 15;
//     // ptr->y = 30;
//     //
//     // std::cout << "x: " << ptr->x << ", y: " << ptr->y << std::endl;
//     // delete ptr;
//     //
//     // int x = 10;
//     // int y = 1488;
//     //
//     // swap(&x,&y);
//     //
//     // // std::cout << x << ' ' << y;
//     //
//     // printf("здравствуй, мир\n");
//     // char* first_string;
//     // first_string = "Hello world";
//     // char second_string[] = "Hello world";
//     // char* third_string = "Hello world";
//     // std::cout << first_string << " " << second_string << " " << third_string;
//
// //
// //     std::ofstream myfile;
// //     myfile.open("example.txt");
// //     myfile << "This is a test.\n";
// //     myfile.close();
// //
// //     std::ifstream fin ("example.txt");
// //     std::string line;
// //     while (fin >> line) {
// //         getline(fin, line);
// //         std::cout << line << std::endl;
// //         fin.close();
// //     }
// //
// //     custom_vector_t v;
// //     custom_t cust;
// //
// //     std::getline(std::cin, cust);
// //
// //     int y = mine::x;
// //     std::cout << y << std::endl;
// //
// //     for (int element : first_three_multiples(8)) {
// //         std::cout << element << "\n";
// //     }
// //
// //     int earth;
// //     char planet;
// //     double grav;
// //
// //     std::cin >> earth >> planet;
// //
// //     switch (planet) {
// //         case 'V':
// //             grav = 0.91;
// //             break;
// //         case 'M':
// //             grav = 0.38;
// //             break;
// //         default:
// //             std::cerr << "Unknown planet\n";
// //     }
// //
// //     std::cout << grav;
// //
// //     std::string obj[][3] = {{"obj1", "obj2", "obj3"},
// //                             {"obj4", "obj5", "obj6"},
// //                             {"obj4", "obj5", "obj6"}};
// //     int rows = sizeof(obj) / sizeof(obj[0]);
// //     int columns = sizeof(obj[0]) / sizeof(obj[0][0]);
// //     for (int i = 0; i < rows; i++) {
// //         for (int j = 0; j < columns; j++) {
// //             std::cout << obj[i][j] << " ";
// //         }
// //     }
// //
// //     std::vector<std::vector<std::string>> arrD = {
// //         {"arrD1", "arrD2", "arrD3"},
// //         {"arrD4", "arrD5", "arrD6"},
// //         {"arrD7", "arrD8", "arrD9"}
// //     };
// //
// //     for (size_t i = 0; i < arrD.size(); ++i) {
// //         for (size_t j = 0; j < arrD[i].size(); ++j) {
// //             std::cout << arrD[i][j] << " ";
// //         }
// //         std::cout << std::endl;
// //     }
// //
// //     int power = 9000;
// //     int* ptr = &power;
// //     int &ref = power;
// //     ref++;
// //
// //     std::cout << *ptr << std::endl;
// //
// //     int n;
// //     std::cin >> n;
// //
// //     int* arr = nullptr;
// //     arr = new int[n];
// //     int* arr2 = new int[n];
// //     f(arr,n);
// //
// //     Song back_to_black1("Back to Black1", "Amy Winehouse1");
// //     Song back_to_black2("Back to Black2", "Amy Winehouse2");
// //
// //     Song s;
// //     s.set_title("title");
// //     std::cout << s.get_title() << std::endl;
// //
// //     Day today = monday;
// //     std::cout << today << std::endl;
// //
// //     People p("bob",5);
// //     p.get_name();
// //     std::cout << "\n";
// //     People p2("bob");
// //
// //     Shi t;
// //     t.type = "abrams";
// //     std::cout << t.type << std::endl;
// //
// //     Dog dog;
// //     dog.who();
// //     dog.bark();
// //     std::cout << dog.alive << std::endl;
// //
// //     int arr3[2] = {3,5};
// //
// //     int* prt = nullptr;
// //     prt = arr3;
// //     int* ptr2 = arr3 + 1;
// //     std::cout << *ptr2 << std::endl;
// //     std::cout << *ptr << std::endl;
// //     prt += 1;
// //     std::cout << *prt << std::endl;
// //
// //     int x = 5;
// //     modify(&x);
// //     std::cout << x << std::endl;
// //
// //     int colum;
// //     int row;
// //     int** arR = new int*[row];
// //     for (int i = 0; i < row; i++) {
// //         arR[i] = new int[colum];
// //     }
// //     for (int i = 0; i < row; i++) {
// //         for (int j = 0; j < colum; j++) {
// //             std::cin >> arR[i][j];
// //         }
// //     }
// //     for (int i = 0; i < row; ++i) {
// //         delete[] arR[i];
// //     }
// //     delete[] arR;
// //
// //     std::vector<std::vector<int>> aRr(row, std::vector<int>(colum));
// //     for (int i = 0; i < row; ++i) {
// //         for (int j = 0; j < colum; ++j) {
// //             std::cin >> aRr[i][j];
// //         }
// //     }
// //
// //     delete[] arr;
// //     delete ptr;
// //     delete ptr2;
// //     delete[] arr2;
// //
// //     return 0;
// // }
// //
// // void f(int*arr, int n) {
// //     for (int i = 0; i < n; i++) {
// //         std::cin >> arr[i];
// //     }
// //     for (int i = 0; i < n; i++) {
// //         std::cout << arr[i] << " ";
// //     }
// // }
// //
// // std::vector <int> first_three_multiples(int num){
// //     std::vector <int> result;
// //     for (int i = 0; i < 3; i++){
// //         int a = num + num * i;
// //         result.push_back(a);
// //     }
// //     return result;
// // }
// //
// // void modify(int *ptr) {
// //     *ptr = 10;
// // }
// //
// // void reverse(int* arr, int n) {
// //     int* ptr = arr + (n-1);
// //     for (int i = n-1; i >= 0; --i){
// //         std::cout << *ptr << "\n";
// //         ptr--;
// //     }
// }