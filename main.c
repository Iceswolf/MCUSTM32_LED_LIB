
#include <clock.c>
#include <config.c>
#include <led.c>

void main (void){

long int i=0;
  
attiva_clock(1,'d');

gpio_config('d',15,"output","push-pull","low","no");
gpio_config('d',14,"output","push-pull","low","no");
gpio_config('d',13,"output","push-pull","low","no");
gpio_config('d',12,"output","push-pull","low","no");

while(1){   
  
  led("blu","on");
  led("arancione","on");
  led("rosso","off");
  led("verde","off");
  
      while(i<5000000){
      i++;
      }
      
i=0;
  led("blu","off");
  led("arancione","off");
  led("verde","on");
  led("rosso","on");  
     while(i<5000000){
     i++;
     }
     
i=0;
} 

} 