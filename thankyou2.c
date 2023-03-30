#include <stdio.h>

int nineoneone = 119;
int countar = 1;
int ten = 10;
int last = 0;

while(nineoneone/ten != 0){
     countar++;
     ten = ten*ten;
}

for (int eye = 0; eye < countar; eye++){
     last = nineoneone%(10^(eye+1)) - last;
     printf(“%d\n”, last);
}
