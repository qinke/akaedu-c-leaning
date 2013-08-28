	.file	"ret_ptr1.c"
	.section	.rodata
.LC0:
	.string	"Sunday"
.LC1:
	.string	"Monday"
.LC2:
	.string	"Tuseday"
.LC3:
	.string	"Wednesday"
.LC4:
	.string	"Thursday"
.LC5:
	.string	"Friday"
.LC6:
	.string	"Saturday"
	.data
	.align 4
	.type	msg, @object
	.size	msg, 28
msg:
	.long	.LC0
	.long	.LC1
	.long	.LC2
	.long	.LC3
	.long	.LC4
	.long	.LC5
	.long	.LC6
	.text
.globl get_a_day
	.type	get_a_day, @function
get_a_day:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	movl	i.1870, %ecx
	movl	$-1840700269, %edx
	movl	%ecx, %eax
	imull	%edx
	leal	(%edx,%ecx), %eax
	movl	%eax, %edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, %edx
	sall	$3, %edx
	subl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	msg(,%eax,4), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	i.1870, %eax
	addl	$1, %eax
	movl	%eax, i.1870
	popl	%ebx
	popl	%ebp
	ret
	.size	get_a_day, .-get_a_day
	.section	.rodata
.LC7:
	.string	"%s\t%s\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$0, 28(%esp)
	movl	$0, 24(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	get_a_day
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	get_a_day
	movl	24(%esp), %ecx
	movl	28(%esp), %edx
	movl	$.LC7, %eax
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.local	i.1870
	.comm	i.1870,4,4
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5.1) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
