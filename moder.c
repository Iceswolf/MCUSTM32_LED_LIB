void gpio_moder(char d, int a,char *b);

#define  GPIO_A_MODER (unsigned int*) (0x40020000)
#define  GPIO_B_MODER (unsigned int*) (0x40020400)
#define  GPIO_C_MODER (unsigned int*) (0x40020800)
#define  GPIO_D_MODER (unsigned int*) (0x40020c00)
#define  GPIO_E_MODER (unsigned int*) (0x40021000)
#define  GPIO_F_MODER (unsigned int*) (0x40021400)
#define  GPIO_G_MODER (unsigned int*) (0x40021800)
#define  GPIO_H_MODER (unsigned int*) (0x40021c00)
#define  GPIO_I_MODER (unsigned int*) (0x40022000)
#define  GPIO_J_MODER (unsigned int*) (0x40022400)
#define  GPIO_K_MODER (unsigned int*) (0x40022800)

void gpio_moder(char d, int a,char *b)
{
unsigned int* puntatore;

if(d=='a') puntatore=GPIO_A_MODER;
else if(d=='b') puntatore=GPIO_B_MODER;
else if(d=='c') puntatore=GPIO_C_MODER;
else if(d=='d') puntatore=GPIO_D_MODER;
else if(d=='e') puntatore=GPIO_E_MODER;
else if(d=='f') puntatore=GPIO_F_MODER;
else if(d=='g') puntatore=GPIO_G_MODER;
else if(d=='h') puntatore=GPIO_H_MODER;
else if(d=='i') puntatore=GPIO_I_MODER;
else if(d=='j') puntatore=GPIO_J_MODER;
else if(d=='k') puntatore=GPIO_K_MODER;

unsigned int  MODERa_0=(1<<2*a);         
unsigned int  MODERa_1=(1<<2*a+1); 
	
if(b=="input"){
	*puntatore &= ~(MODERa_0);
	*puntatore &= ~(MODERa_1);
}
else if(b=="output"){
	*puntatore |=  (MODERa_0);
	*puntatore &= ~(MODERa_1);
}	
else if(b=="analog"){
	*puntatore |=  (MODERa_0);
	*puntatore |=  (MODERa_1);
}	
else if(b=="alternate"){
	*puntatore &= ~(MODERa_0);
	*puntatore |=  (MODERa_1);
}		
	
}