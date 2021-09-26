	.file	"test1.c"
	.text
	.align	2
	.globl	computeit
	.type	computeit, @function
computeit:
	add	sp,sp,-48
	sd	s0,40(sp)
	add	s0,sp,48
	sw	a0,-36(s0)
	sw	zero,-20(s0)
	sw	zero,-24(s0)
	j	.L2
.L3:
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	addw	a5,a4,a5
	sw	a5,-20(s0)
	lw	a5,-24(s0)
	addw	a5,a5,1
	sw	a5,-24(s0)
.L2:
	lw	a4,-24(s0)
	lw	a5,-36(s0)
	blt	a4,a5,.L3
	lw	a5,-20(s0)
	mv	a0,a5
	ld	s0,40(sp)
	add	sp,sp,48
	jr	ra
	.size	computeit, .-computeit
	.ident	"GCC: (GNU) 5.3.0"
