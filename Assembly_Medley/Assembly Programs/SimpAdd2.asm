INCLUDE Irvine32.inc

.data
prompt1 BYTE "Input int now: ",0
prompt2 BYTE "AGAIN: ",0
prompt3 BYTE "The two ints put together is: ",0
val1 DWORD ?
val2 DWORD ?

.code
main PROC
	mov ecx, 3

L1:
	call Clrscr
	mov dl, 40
	mov dh, 12
	call Gotoxy

	mov edx, OFFSET prompt1
	call WriteString
	call ReadInt
	mov val1, eax

	mov dl, 40
	mov dh, 13
	call Gotoxy

	mov edx, OFFSET prompt2
	call WriteString
	call ReadInt
	mov val2, eax
	
	mov dl, 40
	mov dh, 14
	call Gotoxy

	mov eax, val1
	add eax, val2
	mov edx, OFFSET prompt3
	call WriteString
	call WriteInt

	mov dl, 40
	mov dh, 15
	call Gotoxy
	call WaitMsg

	loop L1

	exit

main ENDP
END main