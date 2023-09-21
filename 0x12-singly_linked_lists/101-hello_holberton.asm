; File: 101-hello_holberton.asm
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.
extern	printf		

section .data		
message:	db "Hello, Holberton", 0	
frame:    db "%s", 10, 0          

section .text           

global main		
main:				
push    rbp		
	
mov	rdi,frame
mov	rsi,message
mov	rax,0		
call    printf		

pop	rbp		

mov	rax,0		
ret
