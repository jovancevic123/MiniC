
func:
		PUSH	%14
		MOV 	%15,%14
@func_body:
		MOV 	niz,%13
		JMP 	@func_exit
@func_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
			SUBS	 %15,$16,%15
		MOV 	$10,-24(%14)
		MOV 	$1,-28(%14)
		MOV 	$2,-32(%14)
		MOV 	$188,-36(%14)
		SUBS	%15,$20,%15
@main_body:
		MOV 	-24(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET