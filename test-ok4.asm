
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$20,%15
		SUBS	 %15,$20,%15
		SUBS	%15,$52,%15
@main_body:
		MOV 	$15,-4(%14)
		MOV 	$10,-60(%14)
		MOV 	-4(%14),-64(%14)
		MOV 	-64(%14),-32(%14)
		MOV 	-60(%14),-36(%14)
		MOV 	-36(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET