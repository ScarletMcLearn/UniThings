.MODEL SMALL

.STACK

.DATA

STRING1 DB ‘Hi There! $’                            ; declaring string

STRING2 DB 10, 13, ‘I am Ratul Shams! $’            ; declaring string

STRING3 DB 10, 13, ‘How are you? $’    
STRING4 DB 10, 13, ‘I am good! $’          ; declaring string
STRING5 DB 10, 13, ‘I am eating lunch. $’   
STRING6 DB 10, 13, ‘How about you? $’   
STRING7 DB 10, 13, ‘You like chicken? $’ 
STRING8 DB 10, 13, ‘I  like chicken. $’  
STRING9 DB 10, 13, ‘Black Pink! $’ 
STRING10 DB 10, 13, ‘DDRum! $’  
.CODE

MAIN PROC                                                                   ; main procedure

MOV AX, @DATA                                                         ; initialize the data segment

MOV DS, AX

LEA DX, STRING1                                                        ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                          ; dos interrupt function

LEA DX, STRING2                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                           ; dos interrupt function

LEA DX, STRING3                                                        ; loading the effective address

MOV AH, 09H                                                                ; for string display
            
INT 21H                                                                          ; dos interrupt function

LEA DX, STRING4                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                          ; dos interrupt function

LEA DX, STRING5                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                          ; dos interrupt function

LEA DX, STRING6                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                          ; dos interrupt function

LEA DX, STRING7                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

INT 21H                                                                          ; dos interrupt function

LEA DX, STRING8                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display
INT 21H                                                                          ; dos interrupt function

LEA DX, STRING9                                                       ; loading the effective address

MOV AH, 09H                                                               ; for string display

                                                     ; loading the effective address

MOV AH, 09H  
INT 21H                                                                          ; dos interrupt function

LEA DX, STRING10                                                       ; loading the effective address

MOV AH, 09H                                                                   ; for string display
            
INT 21H                                                                           ; dos interrupt function

MOV AX, 4C00H                                                           ; end request

INT 21H

MAIN ENDP                                                                   ; end procedure

END MAIN                                                                      ; end program