// // #include <iostream>
// // #include <cstring>


// // auto put(char c) -> void {
// //   std::cout << "char: " << c << "\n";
// // }
// // // auto put(const char c) -> void {
// //   // std::cout << "const char: " << c << "\n";
// // // }
// // // auto put(char& c) -> void {
// //   // std::cout << "char&: " << c << "\n";
// // // }
// // auto put(int c) -> void {
// //   std::cout << "int: " << c << "\n";
// // }

// // /* 1 */ auto memcpy(char *dst, const char *src, int n = 0) -> void * {
// //   std::cout << "1st function\n";
// //   (void) dst;
// //   (void) src;
// //   (void) n;
// //   return dst;
// // };
// // /* 2 */ auto memcpy(const char *dst, char * const src) -> char * {
// //   std::cout << "2nd function\n";
// //   (void) dst;
// //   (void) src;
// //   return src;
// // };

// // /* 1 */ auto min(int(&arr)[2]) -> int {
// //   std::cout << "int(&arr)\n";
// //   return arr[0];
// // };
// // /* 2 */ auto min(int *arr) -> int {
// //   std::cout << "*arr\n";
// //   return arr[0];
// // };
// // /* 3 */ auto min(int(&arr)[]) -> int {
// //   std::cout << "int(&arr)[]\n";
// //   return arr[0];
// // };

// // auto fn(int buf[3]) -> void {
// //     min(buf);
// // }

// // auto main() -> int {
// //   char* dst = new char[6];
// //   strcpy(dst, "hello");
// //   const char *src = "world";
// //   void *ptr = memcpy(dst, src);
// //   (void) ptr;
  
// //   int buf[] = {1,2,3};
// //   fn(buf);
// //   // char c = 'a';
// //   // put(c);
// // }

// namespace constants {
//   #define N 6771  
// }

// int N = constants::N;

// int main() {
//     int ints[N] = {1, 2, 3};
// }