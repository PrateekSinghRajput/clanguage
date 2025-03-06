	.file	"demo02.c"
	.text
.Ltext0:
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
.LFB8:
	.file 1 "C:/TDM-GCC-64/x86_64-w64-mingw32/include/stdio.h"
	.loc 1 355 1
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI0:
	pushq	%rbx
	.seh_pushreg	%rbx
.LCFI1:
	subq	$56, %rsp
	.seh_stackalloc	56
.LCFI2:
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
.LCFI3:
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	.loc 1 357 35
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	.loc 1 358 14
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
.LVL0:
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	.loc 1 360 10
	movl	-4(%rbp), %eax
	.loc 1 361 1
	addq	$56, %rsp
	popq	%rbx
.LCFI4:
	popq	%rbp
.LCFI5:
	ret
.LFE8:
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "num1 = %hd, %hu, %hx, %ho\12\0"
.LC1:
	.ascii "num2 = %hd, %hu, %hx, %ho\12\0"
.LC2:
	.ascii "num3 = %hd, %hu, %hx, %ho\12\0"
.LC3:
	.ascii "num4 = %hd, %hu, %hx, %ho\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB29:
	.file 2 "./demo02.c"
	.loc 2 2 12
	pushq	%rbp
	.seh_pushreg	%rbp
.LCFI6:
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
.LCFI7:
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	.loc 2 2 12
	call	__main
	.loc 2 4 11
	movw	$-5, -2(%rbp)
	.loc 2 5 11
	movw	$-5, -4(%rbp)
	.loc 2 6 20
	movw	$-5, -6(%rbp)
	.loc 2 7 20
	movw	$-5, -8(%rbp)
	.loc 2 8 5
	movswl	-2(%rbp), %edx
	movswl	-2(%rbp), %r8d
	movswl	-2(%rbp), %ecx
	movswl	-2(%rbp), %eax
	movl	%edx, 32(%rsp)
	movl	%r8d, %r9d
	movl	%ecx, %r8d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	.loc 2 9 5
	movswl	-4(%rbp), %edx
	movswl	-4(%rbp), %r8d
	movswl	-4(%rbp), %ecx
	movswl	-4(%rbp), %eax
	movl	%edx, 32(%rsp)
	movl	%r8d, %r9d
	movl	%ecx, %r8d
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	.loc 2 10 5
	movzwl	-6(%rbp), %edx
	movzwl	-6(%rbp), %r8d
	movzwl	-6(%rbp), %ecx
	movzwl	-6(%rbp), %eax
	movl	%edx, 32(%rsp)
	movl	%r8d, %r9d
	movl	%ecx, %r8d
	movl	%eax, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	.loc 2 11 5
	movzwl	-8(%rbp), %edx
	movzwl	-8(%rbp), %r8d
	movzwl	-8(%rbp), %ecx
	movzwl	-8(%rbp), %eax
	movl	%edx, 32(%rsp)
	movl	%r8d, %r9d
	movl	%ecx, %r8d
	movl	%eax, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	.loc 2 17 12
	movl	$0, %eax
	.loc 2 18 1
	addq	$64, %rsp
	popq	%rbp
.LCFI8:
	ret
.LFE29:
	.seh_endproc
	.section	.debug_frame,"dr"
.Lframe0:
	.long	.LECIE0-.LSCIE0
.LSCIE0:
	.long	0xffffffff
	.byte	0x3
	.ascii "\0"
	.uleb128 0x1
	.sleb128 -8
	.uleb128 0x10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x1
	.align 8
.LECIE0:
.LSFDE0:
	.long	.LEFDE0-.LASFDE0
.LASFDE0:
	.secrel32	.Lframe0
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.byte	0x4
	.long	.LCFI0-.LFB8
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xe
	.uleb128 0x18
	.byte	0x83
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI2-.LCFI1
	.byte	0xe
	.uleb128 0x50
	.byte	0x4
	.long	.LCFI3-.LCFI2
	.byte	0xc
	.uleb128 0x6
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0xc3
	.byte	0x4
	.long	.LCFI5-.LCFI4
	.byte	0xc6
	.byte	0x12
	.uleb128 0x7
	.sleb128 5
	.align 8
.LEFDE0:
.LSFDE2:
	.long	.LEFDE2-.LASFDE2
.LASFDE2:
	.secrel32	.Lframe0
	.quad	.LFB29
	.quad	.LFE29-.LFB29
	.byte	0x4
	.long	.LCFI6-.LFB29
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI7-.LCFI6
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI8-.LCFI7
	.byte	0xc6
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 8
.LEFDE2:
	.text
.Letext0:
	.section	.debug_info,"dr"
.Ldebug_info0:
	.long	0x223
	.word	0x4
	.secrel32	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.ascii "GNU C17 10.3.0 -mtune=generic -march=x86-64 -g\0"
	.byte	0xc
	.ascii ".\\demo02.c\0"
	.ascii "C:\\Nilesh\\mar22\\DESD\\C\\ecp\\Day20\0"
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.secrel32	.Ldebug_line0
	.uleb128 0x2
	.byte	0x8
	.ascii "__builtin_va_list\0"
	.long	0x94
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.ascii "char\0"
	.uleb128 0x4
	.long	0x94
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.ascii "long long unsigned int\0"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.ascii "long long int\0"
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.ascii "short unsigned int\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii "int\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii "long int\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "unsigned int\0"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.ascii "long unsigned int\0"
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.ascii "unsigned char\0"
	.uleb128 0x5
	.ascii "main\0"
	.byte	0x2
	.byte	0x2
	.byte	0x5
	.long	0xe2
	.quad	.LFB29
	.quad	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.long	0x18f
	.uleb128 0x6
	.ascii "num1\0"
	.byte	0x2
	.byte	0x4
	.byte	0xb
	.long	0x18f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x6
	.ascii "num2\0"
	.byte	0x2
	.byte	0x5
	.byte	0xb
	.long	0x18f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x6
	.ascii "num3\0"
	.byte	0x2
	.byte	0x6
	.byte	0x14
	.long	0xcc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.uleb128 0x6
	.ascii "num4\0"
	.byte	0x2
	.byte	0x7
	.byte	0x14
	.long	0xcc
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.ascii "short int\0"
	.uleb128 0x7
	.ascii "printf\0"
	.byte	0x1
	.word	0x162
	.byte	0x5
	.long	0xe2
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.long	0x214
	.uleb128 0x8
	.ascii "__format\0"
	.byte	0x1
	.word	0x162
	.byte	0x19
	.long	0x214
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x9
	.uleb128 0xa
	.ascii "__retval\0"
	.byte	0x1
	.word	0x164
	.byte	0x7
	.long	0xe2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0xa
	.ascii "__local_argv\0"
	.byte	0x1
	.word	0x165
	.byte	0x15
	.long	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xb
	.quad	.LVL0
	.long	0x21a
	.byte	0
	.uleb128 0xc
	.byte	0x8
	.long	0x9c
	.uleb128 0xd
	.secrel32	.LASF0
	.secrel32	.LASF0
	.byte	0x1
	.byte	0x50
	.byte	0x17
	.byte	0
	.section	.debug_abbrev,"dr"
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x8
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x1b
	.uleb128 0x8
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x4109
	.byte	0
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"dr"
	.long	0x2c
	.word	0x2
	.secrel32	.Ldebug_info0
	.byte	0x8
	.byte	0
	.word	0
	.word	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"dr"
.Ldebug_line0:
	.section	.debug_str,"dr"
.LASF0:
	.ascii "__acrt_iob_func\0"
	.ident	"GCC: (tdm64-1) 10.3.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
