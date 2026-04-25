       PROGRAM ABC002A
       CHARACTER*30 W
       CHARACTER*30 O
       INTEGER I,J
       I = 1
       J = 1
       READ *,W
10     IF(ICHAR(W(I:I)) - ICHAR(' ')) 13, 80, 13
13     IF(ICHAR(W(I:I))) 15, 80, 15
15     IF(ICHAR(W(I:I)) - ICHAR('a')) 20, 60, 20
20     IF(ICHAR(W(I:I)) - ICHAR('i')) 30, 60, 30
30     IF(ICHAR(W(I:I)) - ICHAR('u')) 40, 60, 40
40     IF(ICHAR(W(I:I)) - ICHAR('e')) 50, 60, 50
50     IF(ICHAR(W(I:I)) - ICHAR('o')) 70, 60, 70
60     I = I + 1
       GOTO 10
70     O(J:J) = W(I:I)
       J = J + 1
       I = I + 1
       GOTO 10
80     J = J - 1
       WRITE (*,'(A)')O(1:J)
999    END PROGRAM ABC002A
