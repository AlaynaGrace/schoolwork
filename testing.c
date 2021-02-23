#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1,"SYSTEM CALLS: %d \n",getsyscallinfo());
  exit();
}
