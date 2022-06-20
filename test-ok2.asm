
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$20,%15
		SUBS	%15,$32,%15
@main_body:
		MOV 	$15,-4(%14)
		MOV 	$10,-40(%14)
		MOV 	-4(%14),-44(%14)
		MOV 	-44(%14),-8(%14)
		MOV 	-8(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET