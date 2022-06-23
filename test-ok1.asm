
main:
		PUSH	%14
		MOV 	%15,%14
			SUBS	 %15,$16,%15
		MOV 	$10,-28(%14)
		MOV 	$1,-32(%14)
		MOV 	$2,-36(%14)
		MOV 	$188,-40(%14)
			SUBS	 %15,$16,%15
		MOV 	$10,-48(%14)
		MOV 	$1,-52(%14)
		MOV 	$2,-56(%14)
		MOV 	$188,-60(%14)
		SUBS	%15,$44,%15
@main_body:
		MOV 	-40(%14),-4(%14)
		MOV 	-56(%14),-32(%14)
		MOV 	-32(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET