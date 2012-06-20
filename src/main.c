#include "stm32f4xx_conf.h" // again, added because ST didn't put it here ?

int main(void)
{
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; // enable the clock to GPIOD
    GPIOD->MODER = (1 << 2*13); //set pin 13 to be general purpose IO
    

    while (1) GPIOD->ODR ^= (1 << 13);

    return 0;
}
