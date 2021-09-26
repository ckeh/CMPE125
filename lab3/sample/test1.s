	.file	"test1.c"
	.text
	.align	2
	.globl	computeit
	.type	computeit, @function
computeit:
	blez	a0,.L2
	li	a5,0
.L3:
	addw	a5,a5,1
	bne	a0,a5,.L3
.L2:
	ret
	.size	computeit, .-computeit
	.ident	"GCC: (GNU) 5.3.0"
