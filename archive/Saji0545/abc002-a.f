       PROGRAM ABC002A
       INTEGER X, Y
       READ *, X, Y
       IF(X - Y) 10, 10, 20
10       WRITE (*,'(I0)') Y
         GOTO 999
       
20       WRITE (*,'(I0)') X
       
999    END PROGRAM ABC002A
