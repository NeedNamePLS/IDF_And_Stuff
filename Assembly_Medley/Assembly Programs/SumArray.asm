; Summing an Array (SumArray.asm)

; This program sums an array of words.

INCLUDE Irvine32.inc

.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:dword

.data
intarray DWORD 10000h,20000h,30000h,40000h

.code
main proc

	mov esi, OFFSET intarray		; 1: EDI = address of intarray
	mov ecx, LENGTHOF intarray		; 2: initialize loop counter
	mov eax, 0						; 3: sum = 0
L1:									; 4: mark beginning of loop
	add eax, [esi]					; 5: add an integer
	add esi, 4						; 6: point to next element
	loop L1							; 7: repeat until ECX = 0
					 
	call DumpRegs

	invoke ExitProcess,0 ; Finally what is the value of EAX?
main endp
end main