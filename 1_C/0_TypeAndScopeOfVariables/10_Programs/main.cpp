#include <iostream>

#include "another_file.hpp"
//-------------------------------------------------------------------------------------------------
int global_var = 10;

void global_foo() {
  global_var = 30;
}

void global_example() {
  global_var = 20;
  std::cout<<"Global Var: "<<global_var<<std::endl;
  global_foo();
  std::cout<<"Global Var: "<<global_var<<std::endl;
  // USER_TODO: Question_1: global_var is used in both the functions but are not passed.
  // USER_TODO: Question_2: Where would you declare global var and how would you use it?
  // USER_TODO: Question_3: What are the disadvantages of global var? Is it thread-safe?
}
//-------------------------------------------------------------------------------------------------
void auto_example() {
  int a = 10;

  {
    int b = 20;
  }

  // USER_TODO: Question_1: Is var 'a' accesible here ? Uncomment below line and see
  // std::cout<<"A: "<<a<<std::endl;

  // USER_TODO: Question_2: Is var 'b' accesible here ? Uncomment below line and see.
  // std::cout<<"B: "<<b<<std::endl;

  // USER_TODO: Question_3: if 'b' is not accesible, why is it not accesible? Where did the variable go?
  // USER_TODO: Question 4: What is the scope of 'b'? Where is it stored?
}
//-------------------------------------------------------------------------------------------------
void static_foo() {
  static int count = 0;
  count++;

  // USER_TODO: Question_1: Can you guess the value of count on every call? Is it 0 every time?
  // USER_TODO: Question_2: If you want the scope of the variable to be life time, you can declare
  //            global, why use a static inside function?

  //std::cout<<"Count: "<<count<<std::endl;
}

void static_example() {
  for (size_t idx=0; idx<20; ++idx) {
   static_foo();
  }
}
//-------------------------------------------------------------------------------------------------
void volatile_example() {
/*  
  volatile int a = 10;
  while (true) {
    if (a != 10)
      break;
  }
*/
  //USER_TODO: In this example, the if there is no volatile keyword compiler might think this will
  // never be false, so why waste time compiling this code and optimize this as below.
  /*
    while(1);
  */
 // With volatile, the compiler knows that this variable might be updated from some other source/CPU
 // so better not optimize and read this from memory instead of cache.
}
//-------------------------------------------------------------------------------------------------
int main() {
  auto_example();
  global_example();
  static_example();
  extern_example();
  volatile_example();

  return 0;
}