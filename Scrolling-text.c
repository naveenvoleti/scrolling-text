#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

void delay(int number_of_seconds)
{ 
 int milli_seconds = 1000 * number_of_seconds; 
 clock_t start_time = clock(); 
 while (clock() < start_time + milli_seconds);
}

int main(void)
{
char data[32] = "HELLO WORLD";

for(uint16_t i = 0; i < strlen(data); i++){ 
  if(data[i] == NULL) {
   data[i] = " ";
  }
  char * prr_str_start = &data[i];

for(uint16_t j = 0; j < 5; j++){ 
  printf("%c",prr_str_start[j]);

}
printf("\r\n");
delay(1);
}

return 0;
}
