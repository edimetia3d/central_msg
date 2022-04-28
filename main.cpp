#include <iostream>

#include "msg.h"

int main() {
  std::cout << GetMsgNum() << " msgs are defined" << std::endl;
  for (int i = 0; i < GetMsgNum(); ++i) {
    std::cout << i << std::endl;
    std::cout << GetMsgTitle(i) << std::endl;
    std::cout << GetMsgLevel(i) << std::endl;
    std::cout << GetMsgText(i) << std::endl;
  }
  return 0;
}
