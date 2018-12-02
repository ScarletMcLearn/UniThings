.model small             
 .data                                                                   
 a db 09H  
 b db 02H  
 .code  
      mov      ax, @data       ; Initialize data section                             
      mov      ds, ax  
      mov      al, a           ; Load number1 in al  
      mov      bl, b           ; Load number2 in bl  
      add      al, bl          ; add numbers and result in al  
      mov      ch, 02h         ; Count of digits to be displayed  
      mov      cl, 04h         ; Count to roll by 4 bits  
      mov      bh, al          ; Result in reg bh  
 l2:     rol      bh, cl       ; roll bl so that msb comes to lsb   
      mov      dl, bh          ; load dl with data to be displayed  
      and      dl, 0fH         ; get only lsb  
      cmp      dl, 09          ; check if digit is 0-9 or letter A-F  
      jbe      l4  
      add      dl, 07          ; if letter add 37H else only add 30H  
 l4:     add      dl, 30H  
      mov      ah, 02          ; Function 2 under INT 21H (Display character)  
      int      21H  
      dec      ch              ; Decrement Count  
      jnz      l2  
      mov      ah, 4CH         ; Terminate Program  
      int      21H  
      end