// -----------------------------------------------------------------------------
// Implementation of the 'main' boot interface.
// -----------------------------------------------------------------------------
#include <stdio.h>

int main(int argc, char *argv[]) {
	return CALL(entryPoint, main)(argc, argv);
}

//int main(int argc, char** argv)
int METH(entryPoint, main) (int argc, char *argv[])
{

  printf("Hello, maybe you want to start adding some components now? :-) \n");
  
  return 0;
}
