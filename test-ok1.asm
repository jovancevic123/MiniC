
main:
		PUSH	%14
		MOV 	%15,%14
		MOV 	$1,-16(%14)
		MOV 	$2,-20(%14)
		MOV 	$188,-24(%14)
		SUBS	%15,$24,%15
@main_body:
		ADDS	-24(%14),-16(%14),%0
		MOV 	%0,-4(%14)
		MOV 	-4(%14),-8(%14)
		MOV 	-4(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET