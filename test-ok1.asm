
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$20,%15
		SUBS	%15,$28,%15
@main_body:
		MOV 	$10,-36(%14)
		MOV 	-36(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET