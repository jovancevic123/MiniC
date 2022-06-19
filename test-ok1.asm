
main:
		PUSH	%14
		MOV 	%15,%14
			SUBS	 %15,$12,%15
		MOV 	$1,-12(%14)
		MOV 	$2,-16(%14)
		MOV 	$188,-20(%14)
		SUBS	 %15,$12,%15
		SUBS	%15,$12,%15
@main_body:
		MOV 	$444,-4(%14)
		MOV 	-4(%14),-20(%14)
		MOV 	-20(%14),-16(%14)
		MOV 	-16(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET