void led(char *a, char *b);
#define  GPIO_D_ODR       	(unsigned int*)         (0x40020c14) 
                
#define  arancione              (unsigned int)          (1<<13)
#define  blu         		(unsigned int)          (1<<15)  
#define  rosso 				(unsigned int) 	(1<<14)
#define  verde 				(unsigned int) 	(1<<12)

void led(char *a, char *b){
unsigned int* puntatore;
puntatore = GPIO_D_ODR;

if(b=="off"){
	if(a=="blu") *puntatore &= ~ blu;
	if(a=="rosso") *puntatore &= ~ rosso;	
	if(a=="verde") *puntatore &= ~ verde;	
	if(a=="arancione") *puntatore &= ~ arancione;	
}

if(b=="on"){
	if(a=="blu") *puntatore |= blu;
	if(a=="rosso") *puntatore |= rosso;	
	if(a=="verde") *puntatore |= verde;	
	if(a=="arancione") *puntatore |= arancione;	
}

}