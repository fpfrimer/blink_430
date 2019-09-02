# blink_430

Pisca o LED vermelho do kit MSP-EXP430G2.

A aplicação é um exemplo de configuração dos registradores de um MSP430 sem a utilização da biblioteca fornecida pelo fabricante. Observe que os registradores da porta P1 são acessados através de ponteiros. Esse exemplo tem como objetivo demonstrar que os periféricos do microcontrolador são mapeados na memória do dispositivo. É recomendado que o(a) estudante verifique os endereços dos registradores no manual do dispositivo. Também é recomendado que se faça um revisão sobre ponteiros em linguagem C para facilitar o entendimento do código.

## Compatibilidade

Os endereços utilizados no código são compatíveis com dispositivos da família MSP430x2xx. 
    
## Observações

O cógigo foi testado com o microcontrolador MSP430G2553. Para outros modelos, verifique os endereços no datasheet ou no manual da família.
