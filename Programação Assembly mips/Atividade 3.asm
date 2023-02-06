.data

a: .word 0 10 20 30 40 50 60 70 80 90 100

.text # construa o código a partir daqui

	# g = $s1 = 0 
	# h = $s2 = 50
	# 1 = $s4 = 2
	li $s1,0
	li $s2,50
	li $s4, 2
	mul $t1, $s4, 4 # multiplica i por 4

	la $s3, a # índice do array
	
	lw $t0, a($t1)  # pegando valor do array A(I)
	
	add $s1, $s2, $t0 # g = h + A[i]
