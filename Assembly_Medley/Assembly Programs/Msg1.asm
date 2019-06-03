INCLUDE Irvine32.inc

.data
cappa1 BYTE "SAN ANTONIO", 0												; create caption for the title (e.g. SAN ANTONIO)
cappa2 BYTE "TEXAS", 0														; create caption for the title (e.g. TEXAS)
messy1 BYTE "FIRST MESSAGE", 0dh, "First Click OK to continue...", 0		; 
messy2 BYTE "SECOND MESSAGE", 0dh, "FSecond Click OK AGAIN...", 0		
; BYTE "First Click OK to continue...", 0 




.code
main PROC

	mov ebx, OFFSET cappa1											;move caption to a register ebx
	mov edx, OFFSET messy1											;move message to a register edx
	call	MsgBox

	mov ebx, OFFSET cappa2											;move caption to a register ebx
	mov edx, OFFSET messy2											;move message to a register edx
	call	MsgBox

	
	exit
main ENDP

END main 
