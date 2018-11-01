#define FALSE 0
#define TRUE 1
#define N 2
int interested[N];
void enter_region(int process){
  int other;
  other = 1 − process;
  interested[process] = TRUE;
  turn = process;
  while (turn == process && interested[other] == TRUE) {
    // Do nothing }
  }
}

void leave_region(int process) {         /* process: who is leaving */
  interested[process]=FALSE;
}


int main(void){
  int p1,p2;
  p1=0;
  p2=1;
  
}

