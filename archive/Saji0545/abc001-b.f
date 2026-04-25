        PROGRAM ABC001B
            INTEGER M
            READ *, M
            IF(M - 100)10, 20, 20
10              WRITE (*,'(A)') '00'
                GOTO 999
20          IF(M - 5000)30, 30, 40
30              IF(M - 1000)31, 32, 32
31              WRITE (*,'(A)', ADVANCE='NO') '0'
32              WRITE (*,'(I0)') M / 100
                GOTO 999
40          IF(M - 30000)50, 50, 60
50              WRITE (*,'(I0)') (M / 1000) + 50
                GOTO 999
60          IF(M - 70000)70, 70, 80
70              WRITE (*,'(I0)') (((M / 1000) - 30) / 5) + 80
                GOTO 999
80          WRITE(*, '(A)') '89'
999         CONTINUE
        END PROGRAM ABC001B
