/*
    Autor: Felipe Walter Dafico Pfrimer
    Data: 02/09/2019
    
    Pisca o LED vermelho do kit MSP-EXP430G2.
    
    A aplicação é um exemplo de configuração dos registradores de um MSP430
    sem a utilização da biblioteca fornecida pelo fabricante. Observe que os
    registradores da porta P1 são acessados através de ponteiros. Esse exemplo
    tem como objetivo demonstrar que os periféricos do microcontrolador são
    mapeados na memória do dispositivo. É recomendado que o(a) estudante
    verifique os endereços dos registradores no manual do dispositivo. Também
    é recomendado que se faça um revisão sobre ponteiros em linguagem C para
    facilitar o entendimento do código.
    
    Os endereços utilizados no código são compatíveis com dispositivos da
    família MSP430x2xx. 
    
    O cógigo foi testado com o microcontrolador MSP430G2553. Para outros 
    modelos, verifique os endereços no datasheet ou no manual da família.
*/

void main(void){
	// Ponteiros para os registradores P1DIR e P1OUT
	volatile unsigned int *p1_dir, *p1_out;
	
	// Ponteiro para o registrador do watchdog timer
	volatile unsigned int *w_dog;
	
	// Contador para atraso
	unsigned int i;
	
	// Ponteiro recebe endereço de P1DIR (verifique o datasheet)
	p1_dir = (volatile unsigned int *)0x022;
	
	// Ponteiro recebe endereço de P1OUT (verifique o datasheet)
	p1_out = (volatile unsigned int *)0x021;
	
	// Ponteiro recebe endereço do watchdog timer (verifique o datasheet)
	w_dog = (volatile unsigned int *)0x0120;
	
	// Segura o watchdog timer
	*w_dog = 0x5A80;
    
    // P1DIR recebe 0x01 - Apenas o bit 0 é saída
	*p1_dir = 0x01;
	
	// P1OUT recebe 0x01 - Acende o LED
	*p1_out = 0x01;                         
	
	while(1){
	    
	    // Atraso
		for(i = 0; i < 20000; i++);
		
		// Inverte o estado do LED
		*p1_out ^= 0x01;                    
	}
}
