
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$12,%15
		SUBS	%15,$8,%15
@main_body:
		MOV 	$10,-4(%14)
		MOV 	$11,-8(%14)
		MOV 	$12,-8(%14)
		MOV 	$17,-8(%14)
		MOV 	-8(%14),-4(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET