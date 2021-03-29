#include "try_lib/try_lib.h"

const char *getName() {
  ROS_INFO("hello from lib");
  return "hello";
}