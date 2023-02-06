.data

a: .word 0 10 20 30 40 50 60 70 80 90 100

.text # construa o código a partir daqui

	li $s2,50
	la $s3, a # índice do array
	
	lw $t0, 32($s3) # pegando valor do array A(I)
	
	add $t1, $s2,$t0 #h + A[8]
	sw $t1, 36($s3)