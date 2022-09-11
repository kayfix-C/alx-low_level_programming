	.file	"intel.c"
	.intel_syntax noprefix
	.text
	.globl	i
	.bss
	.align 4
i:
	.space 4
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	mov	eax, DWORD PTR i[rip]
	mov	edx, eax
	lea	rcx, .LC0[rip]
	call	printf
/APP
 # 17 "intel.c" 1
	.intel_syntax noprefix

 # 0 "" 2
 # 18 "intel.c" 1
	mov dword ptr [i], 1

 # 0 "" 2
/NO_APP
	mov	eax, DWORD PTR i[rip]
	mov	edx, eax
	lea	rcx, .LC0[rip]
	call	printf
	mov	eax, 0
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
