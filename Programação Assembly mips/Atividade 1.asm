.text

	# definição das variáveis de s0 a s5
	li $s0, 1 # A
	li $s1, 1 # B
	li $s2, 1 # C
	li $s3, 1 # D
	li $s4, 1 # E
	li $s5, 1 # F
	
	# A) a = b - c
	sub $s0, $s1, $s2
	
	# B) b = a + c
	add $s1, $s0, $s2
	
	# C) d = (a + b - c)
	add $s3, $s0, $s1 # d = a + b
	sub $s3, $s3, $s2 # d = d - c
	
	# D) f  = (a + b) - d
	add $s5, $s0, $s1 # f = a + b
	sub $s5, $s5, $s3 # f = f - d
	
	# E) c = a – ( b + d)
	add $s2, $s1, $s3 # c = b + d
	sub $s2, $s0, $s2 # c = a - c
	
	# F) e = ( a – ( b – c )
	sub $s4, $s1, $s2 # e = b - c
	sub $s4, $s0, $s4 # e = a - e
	
	# G) e = ( a – ( b – c ) + f )
	add $s4, $s4, $s5 # valor anterior do e +  f
	
	# H) f = e – (a – b ) + ( b – c )
	sub $t0, $s0, $s1 # t0 = a - b
	sub $t1, $s4, $t0 # t1 = e - t0
	sub $t2, $s1, $s2 # t2 = b - c
	add $s5, $t1, $t2 # f = t1 + t2
