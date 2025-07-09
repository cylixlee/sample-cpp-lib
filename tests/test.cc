#include <samplelib/greeting.h>

int main(int argc, const char *argv[]) {
  if (sample_lib::greeting() != "Hello from SampleCppLib!") {
    return 1;
  }
  return 0;
}