
main:
		PUSH	%14
		MOV 	%15,%14
		SUBS	 %15,$20,%15
		SUBS	 %15,$20,%15
			SUBS	 %15,$12,%15
		MOV 	$333,-68(%14)
		MOV 	$33,-72(%14)
		MOV 	$666,-76(%14)
		SUBS	%15,$64,%15
@main_body:
		MOV 	-68(%14),-56(%14)
		MOV 	-76(%14),-60(%14)
		MOV 	-60(%14),-28(%14)
		MOV 	-56(%14),-32(%14)
		MOV 	-28(%14),%13
		JMP 	@main_exit
@main_exit:
		MOV 	%14,%15
		POP 	%14
		RET