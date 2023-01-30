#include <stdlib.h>
#include <stdio.h>
#include "rustc_demangle.h"

int main() {
  const char *in = "_ZN82_$LT$std..process..ExitStatus$u20$as$u20$std..os..unix..process..ExitStatusExt$GT$8from_raw17h8664ede3e9ed9873E";
  char *output = calloc(1024, 1);
  rustc_demangle(in, output, 1023);
  printf("Demangled: %s\n", output);
  free(output);
}
