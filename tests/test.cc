#include <sample-cpp-lib/greeting.h>

int main(int argc, const char *argv[]) {
  if (sample_cpp_lib::greeting() != "Hello from SampleCppLib!") {
    return 1;
  }
  return 0;
}