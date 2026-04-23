        PROGRAM ABC400A
        INTEGER A,B
        READ *,A
        B = 400 / A
        IF((A * B) - 400)10, 20, 10
10        WRITE (*,'(I0)') -1
          GOTO 999
        
20        WRITE (*,'(I0)') B
          GOTO 999
999     END PROGRAM ABC400A
