.section .data
data_items:
.long 3,67,34,222,45,75,54,34,44,33,22,11,66,0

.section .text
.globl _start
_start:
	movl $0,%edi;                               # i = 0;
	movl data_items(, %edi, 4), %eax            # tmp = d[0];
	movl %eax, %ebx                             # max = tmp;


start_loop:          
	cmpl $0, %eax                               # if(tmp == 0)
	je loop_exit                                # goto loop_exit;
	incl %edi                                   # i++;
	movl data_items(, %edi, 4), %eax            # tmp = d[i];
	cmpl %ebx, %eax                             # if(tmp <= max)
	jle start_loop                              # goto start_loop; 

	movl %eax, %ebx                             # max = tmp;
	jmp start_loop                              # goto start_loop;

loop_exit:

	movl $1, %eax;                              # exit(?)
	int $0x80                                   # ebx = max;
                                                # exit(max);
