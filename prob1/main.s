	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 5	sdk_version 15, 5
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0                          ; =0x0
	stur	w8, [x29, #-16]                 ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	mov	w8, #7                          ; =0x7
	stur	w8, [x29, #-8]
	mov	w8, #250                        ; =0xfa
	stur	w8, [x29, #-12]
	ldur	w8, [x29, #-8]
	mov	x11, x8
	ldur	w8, [x29, #-12]
                                        ; kill: def $x8 killed $w8
	ldur	w9, [x29, #-8]
	ldur	w10, [x29, #-12]
	add	w10, w9, w10
	mov	x9, sp
	str	x11, [x9]
	str	x8, [x9, #8]
                                        ; implicit-def: $x8
	mov	x8, x10
	str	x8, [x9, #16]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-16]                 ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d + %d = %d"

.subsections_via_symbols
