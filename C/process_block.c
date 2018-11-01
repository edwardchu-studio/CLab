#include <wait.h>
#DEFINE NPROC 10
enum procstate {UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE};


struct{
  struct splinlock lock;
  struct proc proc[NPROC];
} ptable;

