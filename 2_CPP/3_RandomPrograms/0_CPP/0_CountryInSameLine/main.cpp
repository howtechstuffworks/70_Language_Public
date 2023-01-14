#include <iostream>
#include <vector>

#include "MyKeyboard.hpp"

bool compare_results(const std::vector<std::string>& result) {
  // Returning true for now
  return true;
}

int main() {
  MyKeyboard mkb;
  std::vector<std::string> result = mkb.find_same_line();
  
  for (auto& res: result)
    std::cout<<res<<std::endl;
  
  return 0;
}