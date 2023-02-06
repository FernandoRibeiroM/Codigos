.data

a: .word 0 10 20 30 40 50 60 70 80 90 100

.text # construa o código a partir daqui

	la $s3, a # índice do array
	li $t0, 0 # $t0 será meu i
	
	while:
		bge $t0, 11, saida
		
		mul $t1, $t0, 4 # multiplica i por 4
		lw $t2, a($t1)  # pegando valor do array A(I)
		add $t2, $t2, 50
		sw $t2, a($t1)
		
		add $t0,$t0, 1
		
		j while
	saida: