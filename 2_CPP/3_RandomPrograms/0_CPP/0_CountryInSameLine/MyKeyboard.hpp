#pragma once

#include <string>
#include <vector>
#include <unordered_map>

class MyKeyboard {
public:
  MyKeyboard();
  ~MyKeyboard() {}

  std::vector<std::string> find_same_line() const;

private:
  /* Keyboard layout */
  const std::vector<std::vector<char>> kb_layout = {
    {'q','w','e','r','t','y','u','i','o','p',},
    {'a','s','d','f','g','h','j','k','l'},
    {'z','x','c','v','b','n','m'},
  };

  //USER_TODO: See if you can use someother datastructure for faster access
};
