INCLUDE Irvine32.inc

.data
prompt1 BYTE "Enter an int for the lower range: ", 0
prompt2 BYTE "Enter an int for the higher range: ", 0
prompt3 BYTE "The scoop out of the gobalee goop resulted in: ", 0
val1 DWORD ?
val2 DWORD ?
 
.code
main PROC

	mov edx, OFFSET prompt1
	call WriteString
	call ReadInt
	mov val1, eax				; Set val1 to the user input
	mov ebx, val1				; Set ebx to val1

	mov edx, OFFSET prompt2
	call WriteString
	call ReadInt
	mov val2, eax				; Set val2 to eax which will equal to the user input
	
	sub eax, ebx				; Set eax to the difference between val1 and val2
	mov edx, OFFSET prompt3
	call WriteString
	call BetterRandomRange		; Calls the BetterRandomRange which will use the current value of eax


	exit

main ENDP

BetterRandomRange PROC
	
	call Randomize				; So the random is truly random
	call RandomRange			; The range is greater by randomizing iva the difference in the range size
	inc eax						
	add eax, ebx				; Adds the lower end value back to get set the number back into the range
	call WriteInt
	ret

BetterRandomRange ENDP

END main