
func:
		PUSH	%14
		MOV 	%15,%14
		SUBS	%15,$4,%15
@func_body:
		MOV 	8(%14),%13
		JMP 	@func_exit
@func_exit:
		MOV 	%14,%15
		POP 	%14
		RET
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$12,%15
		MOV 	$1,-20(%14)
		MOV 	$2,-24(%14)
		MOV 	$188,-28(%14)
		SUBS	 %15,$40,%15
		SUBS	%15,$20,%15
@main_body:
		MOV 	$1,-28(%14)
		MOV 	-24(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET