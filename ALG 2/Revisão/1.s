	.file	"1.c"
	.text
	.globl	_potenciaRec
	.def	_potenciaRec;	.scl	2;	.type	32;	.endef
_potenciaRec:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$0, 12(%ebp)
	jne	L2
	movl	$1, %eax
	jmp	L3
L2:
	cmpl	$1, 12(%ebp)
	jne	L4
	movl	8(%ebp), %eax
	jmp	L3
L4:
	movl	12(%ebp), %eax
	subl	$1, %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_potenciaRec
	imull	8(%ebp), %eax
L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Digite a base: \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Digite o expoente: \0"
	.align 4
LC3:
	.ascii "A potencia da base %d no expoente %d e %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_printf
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_potenciaRec
	movl	%eax, %ecx
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
