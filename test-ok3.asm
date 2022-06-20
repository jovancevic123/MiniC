
main:
		PUSH	%14
		MOV 	%15,%14
			SUBS	 %15,$12,%15
		MOV 	$1,-24(%14)
		MOV 	$2,-28(%14)
		MOV 	$3,-32(%14)
		SUBS	 %15,$20,%15
		SUBS	%15,$44,%15
@main_body:
		MOV 	$15,-4(%14)
		MOV 	$10,-52(%14)
		MOV 	-28(%14),-56(%14)
		MOV 	-56(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET