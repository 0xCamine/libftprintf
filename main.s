	.text
	.intel_syntax noprefix
	.file	"main.c"
	.globl	print                           # -- Begin function print
	.p2align	4, 0x90
	.type	print,@function
print:                                  # @print
.Lfunc_begin0:
	.file	1 "/home/abouferr/Desktop/printf" "main.c"
	.loc	1 6 0                           # main.c:6:0
	.cfi_startproc
# %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 432
	movaps	xmmword ptr [rbp - 400], xmm7   # 16-byte Spill
	movaps	xmmword ptr [rbp - 384], xmm6   # 16-byte Spill
	movaps	xmmword ptr [rbp - 368], xmm5   # 16-byte Spill
	movaps	xmmword ptr [rbp - 352], xmm4   # 16-byte Spill
	movaps	xmmword ptr [rbp - 336], xmm3   # 16-byte Spill
	movaps	xmmword ptr [rbp - 320], xmm2   # 16-byte Spill
	movaps	xmmword ptr [rbp - 304], xmm1   # 16-byte Spill
	movaps	xmmword ptr [rbp - 288], xmm0   # 16-byte Spill
	mov	qword ptr [rbp - 272], r9       # 8-byte Spill
	mov	qword ptr [rbp - 264], r8       # 8-byte Spill
	mov	qword ptr [rbp - 256], rcx      # 8-byte Spill
	mov	qword ptr [rbp - 248], rdx      # 8-byte Spill
	mov	qword ptr [rbp - 240], rsi      # 8-byte Spill
	mov	dword ptr [rbp - 228], edi      # 4-byte Spill
	test	al, al
	je	.LBB0_9
# %bb.8:
	movaps	xmm0, xmmword ptr [rbp - 400]   # 16-byte Reload
	movaps	xmm1, xmmword ptr [rbp - 384]   # 16-byte Reload
	movaps	xmm2, xmmword ptr [rbp - 368]   # 16-byte Reload
	movaps	xmm3, xmmword ptr [rbp - 352]   # 16-byte Reload
	movaps	xmm4, xmmword ptr [rbp - 336]   # 16-byte Reload
	movaps	xmm5, xmmword ptr [rbp - 320]   # 16-byte Reload
	movaps	xmm6, xmmword ptr [rbp - 304]   # 16-byte Reload
	movaps	xmm7, xmmword ptr [rbp - 288]   # 16-byte Reload
	movaps	xmmword ptr [rbp - 176], xmm7
	movaps	xmmword ptr [rbp - 160], xmm6
	movaps	xmmword ptr [rbp - 144], xmm5
	movaps	xmmword ptr [rbp - 128], xmm4
	movaps	xmmword ptr [rbp - 112], xmm3
	movaps	xmmword ptr [rbp - 96], xmm2
	movaps	xmmword ptr [rbp - 80], xmm1
	movaps	xmmword ptr [rbp - 64], xmm0
.LBB0_9:
	mov	eax, dword ptr [rbp - 228]      # 4-byte Reload
	mov	rcx, qword ptr [rbp - 240]      # 8-byte Reload
	mov	rdx, qword ptr [rbp - 248]      # 8-byte Reload
	mov	rsi, qword ptr [rbp - 256]      # 8-byte Reload
	mov	rdi, qword ptr [rbp - 264]      # 8-byte Reload
	mov	r8, qword ptr [rbp - 272]       # 8-byte Reload
	mov	qword ptr [rbp - 184], r8
	mov	qword ptr [rbp - 192], rdi
	mov	qword ptr [rbp - 200], rsi
	mov	qword ptr [rbp - 208], rdx
	mov	qword ptr [rbp - 216], rcx
	mov	dword ptr [rbp - 4], eax
.Ltmp0:
	.loc	1 9 2 prologue_end              # main.c:9:2
	lea	rax, [rbp - 32]
	lea	rcx, [rbp - 224]
	mov	qword ptr [rax + 16], rcx
	lea	rcx, [rbp + 16]
	mov	qword ptr [rax + 8], rcx
	mov	dword ptr [rax + 4], 48
	mov	dword ptr [rax], 8
.Ltmp1:
	.loc	1 10 11                         # main.c:10:11
	mov	dword ptr [rbp - 36], 0
.LBB0_1:                                # =>This Inner Loop Header: Depth=1
.Ltmp2:
	.loc	1 10 18 is_stmt 0               # main.c:10:18
	mov	eax, dword ptr [rbp - 36]
	.loc	1 10 20                         # main.c:10:20
	cmp	eax, dword ptr [rbp - 4]
.Ltmp3:
	.loc	1 10 2                          # main.c:10:2
	jge	.LBB0_7
# %bb.2:                                #   in Loop: Header=BB0_1 Depth=1
.Ltmp4:
	.loc	1 11 17 is_stmt 1               # main.c:11:17
	lea	rax, [rbp - 32]
	mov	qword ptr [rbp - 416], rax      # 8-byte Spill
	mov	eax, dword ptr [rbp - 32]
	mov	dword ptr [rbp - 404], eax      # 4-byte Spill
	cmp	eax, 40
	ja	.LBB0_4
# %bb.3:                                #   in Loop: Header=BB0_1 Depth=1
	.loc	1 0 17 is_stmt 0                # main.c:0:17
	mov	rcx, qword ptr [rbp - 416]      # 8-byte Reload
	mov	edx, dword ptr [rbp - 404]      # 4-byte Reload
	.loc	1 11 17                         # main.c:11:17
	movsxd	rax, edx
	add	rax, qword ptr [rcx + 16]
	add	edx, 8
	mov	dword ptr [rcx], edx
	mov	qword ptr [rbp - 424], rax      # 8-byte Spill
	jmp	.LBB0_5
.LBB0_4:                                #   in Loop: Header=BB0_1 Depth=1
	.loc	1 0 17                          # main.c:0:17
	mov	rcx, qword ptr [rbp - 416]      # 8-byte Reload
	.loc	1 11 17                         # main.c:11:17
	mov	rdx, qword ptr [rcx + 8]
	mov	rax, rdx
	add	rdx, 8
	mov	qword ptr [rcx + 8], rdx
	mov	qword ptr [rbp - 424], rax      # 8-byte Spill
.LBB0_5:                                #   in Loop: Header=BB0_1 Depth=1
	.loc	1 0 17                          # main.c:0:17
	mov	rax, qword ptr [rbp - 424]      # 8-byte Reload
	.loc	1 11 17                         # main.c:11:17
	mov	esi, dword ptr [rax]
	.loc	1 11 3                          # main.c:11:3
	movabs	rdi, offset .L.str
	mov	al, 0
	call	printf
# %bb.6:                                #   in Loop: Header=BB0_1 Depth=1
	.loc	1 10 26 is_stmt 1               # main.c:10:26
	mov	eax, dword ptr [rbp - 36]
	add	eax, 1
	mov	dword ptr [rbp - 36], eax
	.loc	1 10 2 is_stmt 0                # main.c:10:2
	jmp	.LBB0_1
.Ltmp5:
.LBB0_7:
	.loc	1 12 2 is_stmt 1                # main.c:12:2
	mov	edi, offset .L.str.1
	xor	eax, eax
                                        # kill: def $al killed $al killed $eax
	call	printf
	.loc	1 14 1                          # main.c:14:1
	add	rsp, 432
	pop	rbp
	.cfi_def_cfa rsp, 8
	ret
.Ltmp6:
.Lfunc_end0:
	.size	print, .Lfunc_end0-print
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
.Lfunc_begin1:
	.loc	1 16 0                          # main.c:16:0
	.cfi_startproc
# %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	mov	dword ptr [rbp - 4], 0
.Ltmp7:
	.loc	1 19 2 prologue_end             # main.c:19:2
	mov	edi, 3
	mov	esi, 1
	mov	edx, 2
	mov	ecx, 4
	mov	al, 0
	call	print
	.loc	1 21 2                          # main.c:21:2
	xor	eax, eax
	add	rsp, 16
	pop	rbp
	.cfi_def_cfa rsp, 8
	ret
.Ltmp8:
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%d "
	.size	.L.str, 4

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"\n"
	.size	.L.str.1, 2

	.file	2 "/usr/lib/llvm-12/lib/clang/12.0.1/include" "stdarg.h"
	.file	3 "/usr/include" "stdio.h"
	.section	.debug_abbrev,"",@progbits
	.byte	1                               # Abbreviation Code
	.byte	17                              # DW_TAG_compile_unit
	.byte	1                               # DW_CHILDREN_yes
	.byte	37                              # DW_AT_producer
	.byte	14                              # DW_FORM_strp
	.byte	19                              # DW_AT_language
	.byte	5                               # DW_FORM_data2
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	16                              # DW_AT_stmt_list
	.byte	23                              # DW_FORM_sec_offset
	.byte	27                              # DW_AT_comp_dir
	.byte	14                              # DW_FORM_strp
	.byte	17                              # DW_AT_low_pc
	.byte	1                               # DW_FORM_addr
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	2                               # Abbreviation Code
	.byte	46                              # DW_TAG_subprogram
	.byte	1                               # DW_CHILDREN_yes
	.byte	17                              # DW_AT_low_pc
	.byte	1                               # DW_FORM_addr
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	64                              # DW_AT_frame_base
	.byte	24                              # DW_FORM_exprloc
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	39                              # DW_AT_prototyped
	.byte	25                              # DW_FORM_flag_present
	.byte	63                              # DW_AT_external
	.byte	25                              # DW_FORM_flag_present
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	3                               # Abbreviation Code
	.byte	5                               # DW_TAG_formal_parameter
	.byte	0                               # DW_CHILDREN_no
	.byte	2                               # DW_AT_location
	.byte	24                              # DW_FORM_exprloc
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	4                               # Abbreviation Code
	.byte	52                              # DW_TAG_variable
	.byte	0                               # DW_CHILDREN_no
	.byte	2                               # DW_AT_location
	.byte	24                              # DW_FORM_exprloc
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	5                               # Abbreviation Code
	.byte	11                              # DW_TAG_lexical_block
	.byte	1                               # DW_CHILDREN_yes
	.byte	17                              # DW_AT_low_pc
	.byte	1                               # DW_FORM_addr
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	6                               # Abbreviation Code
	.byte	24                              # DW_TAG_unspecified_parameters
	.byte	0                               # DW_CHILDREN_no
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	7                               # Abbreviation Code
	.byte	46                              # DW_TAG_subprogram
	.byte	0                               # DW_CHILDREN_no
	.byte	17                              # DW_AT_low_pc
	.byte	1                               # DW_FORM_addr
	.byte	18                              # DW_AT_high_pc
	.byte	6                               # DW_FORM_data4
	.byte	64                              # DW_AT_frame_base
	.byte	24                              # DW_FORM_exprloc
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	39                              # DW_AT_prototyped
	.byte	25                              # DW_FORM_flag_present
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	63                              # DW_AT_external
	.byte	25                              # DW_FORM_flag_present
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	8                               # Abbreviation Code
	.byte	36                              # DW_TAG_base_type
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	62                              # DW_AT_encoding
	.byte	11                              # DW_FORM_data1
	.byte	11                              # DW_AT_byte_size
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	9                               # Abbreviation Code
	.byte	22                              # DW_TAG_typedef
	.byte	0                               # DW_CHILDREN_no
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	10                              # Abbreviation Code
	.byte	22                              # DW_TAG_typedef
	.byte	0                               # DW_CHILDREN_no
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	11                              # Abbreviation Code
	.byte	1                               # DW_TAG_array_type
	.byte	1                               # DW_CHILDREN_yes
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	12                              # Abbreviation Code
	.byte	33                              # DW_TAG_subrange_type
	.byte	0                               # DW_CHILDREN_no
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	55                              # DW_AT_count
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	13                              # Abbreviation Code
	.byte	19                              # DW_TAG_structure_type
	.byte	1                               # DW_CHILDREN_yes
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	11                              # DW_AT_byte_size
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	14                              # Abbreviation Code
	.byte	13                              # DW_TAG_member
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	73                              # DW_AT_type
	.byte	19                              # DW_FORM_ref4
	.byte	58                              # DW_AT_decl_file
	.byte	11                              # DW_FORM_data1
	.byte	59                              # DW_AT_decl_line
	.byte	11                              # DW_FORM_data1
	.byte	56                              # DW_AT_data_member_location
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	15                              # Abbreviation Code
	.byte	15                              # DW_TAG_pointer_type
	.byte	0                               # DW_CHILDREN_no
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	16                              # Abbreviation Code
	.byte	36                              # DW_TAG_base_type
	.byte	0                               # DW_CHILDREN_no
	.byte	3                               # DW_AT_name
	.byte	14                              # DW_FORM_strp
	.byte	11                              # DW_AT_byte_size
	.byte	11                              # DW_FORM_data1
	.byte	62                              # DW_AT_encoding
	.byte	11                              # DW_FORM_data1
	.byte	0                               # EOM(1)
	.byte	0                               # EOM(2)
	.byte	0                               # EOM(3)
	.section	.debug_info,"",@progbits
.Lcu_begin0:
	.long	.Ldebug_info_end0-.Ldebug_info_start0 # Length of Unit
.Ldebug_info_start0:
	.short	4                               # DWARF version number
	.long	.debug_abbrev                   # Offset Into Abbrev. Section
	.byte	8                               # Address Size (in bytes)
	.byte	1                               # Abbrev [1] 0xb:0x100 DW_TAG_compile_unit
	.long	.Linfo_string0                  # DW_AT_producer
	.short	12                              # DW_AT_language
	.long	.Linfo_string1                  # DW_AT_name
	.long	.Lline_table_start0             # DW_AT_stmt_list
	.long	.Linfo_string2                  # DW_AT_comp_dir
	.quad	.Lfunc_begin0                   # DW_AT_low_pc
	.long	.Lfunc_end1-.Lfunc_begin0       # DW_AT_high_pc
	.byte	2                               # Abbrev [2] 0x2a:0x4f DW_TAG_subprogram
	.quad	.Lfunc_begin0                   # DW_AT_low_pc
	.long	.Lfunc_end0-.Lfunc_begin0       # DW_AT_high_pc
	.byte	1                               # DW_AT_frame_base
	.byte	86
	.long	.Linfo_string3                  # DW_AT_name
	.byte	1                               # DW_AT_decl_file
	.byte	5                               # DW_AT_decl_line
                                        # DW_AT_prototyped
                                        # DW_AT_external
	.byte	3                               # Abbrev [3] 0x3f:0xe DW_TAG_formal_parameter
	.byte	2                               # DW_AT_location
	.byte	145
	.byte	124
	.long	.Linfo_string6                  # DW_AT_name
	.byte	1                               # DW_AT_decl_file
	.byte	5                               # DW_AT_decl_line
	.long	146                             # DW_AT_type
	.byte	4                               # Abbrev [4] 0x4d:0xe DW_TAG_variable
	.byte	2                               # DW_AT_location
	.byte	145
	.byte	96
	.long	.Linfo_string7                  # DW_AT_name
	.byte	1                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.long	153                             # DW_AT_type
	.byte	5                               # Abbrev [5] 0x5b:0x1c DW_TAG_lexical_block
	.quad	.Ltmp1                          # DW_AT_low_pc
	.long	.Ltmp5-.Ltmp1                   # DW_AT_high_pc
	.byte	4                               # Abbrev [4] 0x68:0xe DW_TAG_variable
	.byte	2                               # DW_AT_location
	.byte	145
	.byte	92
	.long	.Linfo_string18                 # DW_AT_name
	.byte	1                               # DW_AT_decl_file
	.byte	10                              # DW_AT_decl_line
	.long	146                             # DW_AT_type
	.byte	0                               # End Of Children Mark
	.byte	6                               # Abbrev [6] 0x77:0x1 DW_TAG_unspecified_parameters
	.byte	0                               # End Of Children Mark
	.byte	7                               # Abbrev [7] 0x79:0x19 DW_TAG_subprogram
	.quad	.Lfunc_begin1                   # DW_AT_low_pc
	.long	.Lfunc_end1-.Lfunc_begin1       # DW_AT_high_pc
	.byte	1                               # DW_AT_frame_base
	.byte	86
	.long	.Linfo_string4                  # DW_AT_name
	.byte	1                               # DW_AT_decl_file
	.byte	15                              # DW_AT_decl_line
                                        # DW_AT_prototyped
	.long	146                             # DW_AT_type
                                        # DW_AT_external
	.byte	8                               # Abbrev [8] 0x92:0x7 DW_TAG_base_type
	.long	.Linfo_string5                  # DW_AT_name
	.byte	5                               # DW_AT_encoding
	.byte	4                               # DW_AT_byte_size
	.byte	9                               # Abbrev [9] 0x99:0xb DW_TAG_typedef
	.long	164                             # DW_AT_type
	.long	.Linfo_string17                 # DW_AT_name
	.byte	3                               # DW_AT_decl_file
	.byte	52                              # DW_AT_decl_line
	.byte	9                               # Abbrev [9] 0xa4:0xb DW_TAG_typedef
	.long	175                             # DW_AT_type
	.long	.Linfo_string16                 # DW_AT_name
	.byte	2                               # DW_AT_decl_file
	.byte	32                              # DW_AT_decl_line
	.byte	10                              # Abbrev [10] 0xaf:0x9 DW_TAG_typedef
	.long	184                             # DW_AT_type
	.long	.Linfo_string15                 # DW_AT_name
	.byte	11                              # Abbrev [11] 0xb8:0xc DW_TAG_array_type
	.long	196                             # DW_AT_type
	.byte	12                              # Abbrev [12] 0xbd:0x6 DW_TAG_subrange_type
	.long	259                             # DW_AT_type
	.byte	1                               # DW_AT_count
	.byte	0                               # End Of Children Mark
	.byte	13                              # Abbrev [13] 0xc4:0x37 DW_TAG_structure_type
	.long	.Linfo_string13                 # DW_AT_name
	.byte	24                              # DW_AT_byte_size
	.byte	14                              # Abbrev [14] 0xca:0xc DW_TAG_member
	.long	.Linfo_string8                  # DW_AT_name
	.long	251                             # DW_AT_type
	.byte	1                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.byte	0                               # DW_AT_data_member_location
	.byte	14                              # Abbrev [14] 0xd6:0xc DW_TAG_member
	.long	.Linfo_string10                 # DW_AT_name
	.long	251                             # DW_AT_type
	.byte	1                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.byte	4                               # DW_AT_data_member_location
	.byte	14                              # Abbrev [14] 0xe2:0xc DW_TAG_member
	.long	.Linfo_string11                 # DW_AT_name
	.long	258                             # DW_AT_type
	.byte	1                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.byte	8                               # DW_AT_data_member_location
	.byte	14                              # Abbrev [14] 0xee:0xc DW_TAG_member
	.long	.Linfo_string12                 # DW_AT_name
	.long	258                             # DW_AT_type
	.byte	1                               # DW_AT_decl_file
	.byte	7                               # DW_AT_decl_line
	.byte	16                              # DW_AT_data_member_location
	.byte	0                               # End Of Children Mark
	.byte	8                               # Abbrev [8] 0xfb:0x7 DW_TAG_base_type
	.long	.Linfo_string9                  # DW_AT_name
	.byte	7                               # DW_AT_encoding
	.byte	4                               # DW_AT_byte_size
	.byte	15                              # Abbrev [15] 0x102:0x1 DW_TAG_pointer_type
	.byte	16                              # Abbrev [16] 0x103:0x7 DW_TAG_base_type
	.long	.Linfo_string14                 # DW_AT_name
	.byte	8                               # DW_AT_byte_size
	.byte	7                               # DW_AT_encoding
	.byte	0                               # End Of Children Mark
.Ldebug_info_end0:
	.section	.debug_str,"MS",@progbits,1
.Linfo_string0:
	.asciz	"Ubuntu clang version 12.0.1-19ubuntu3" # string offset=0
.Linfo_string1:
	.asciz	"main.c"                        # string offset=38
.Linfo_string2:
	.asciz	"/home/abouferr/Desktop/printf" # string offset=45
.Linfo_string3:
	.asciz	"print"                         # string offset=75
.Linfo_string4:
	.asciz	"main"                          # string offset=81
.Linfo_string5:
	.asciz	"int"                           # string offset=86
.Linfo_string6:
	.asciz	"n"                             # string offset=90
.Linfo_string7:
	.asciz	"args"                          # string offset=92
.Linfo_string8:
	.asciz	"gp_offset"                     # string offset=97
.Linfo_string9:
	.asciz	"unsigned int"                  # string offset=107
.Linfo_string10:
	.asciz	"fp_offset"                     # string offset=120
.Linfo_string11:
	.asciz	"overflow_arg_area"             # string offset=130
.Linfo_string12:
	.asciz	"reg_save_area"                 # string offset=148
.Linfo_string13:
	.asciz	"__va_list_tag"                 # string offset=162
.Linfo_string14:
	.asciz	"__ARRAY_SIZE_TYPE__"           # string offset=176
.Linfo_string15:
	.asciz	"__builtin_va_list"             # string offset=196
.Linfo_string16:
	.asciz	"__gnuc_va_list"                # string offset=214
.Linfo_string17:
	.asciz	"va_list"                       # string offset=229
.Linfo_string18:
	.asciz	"i"                             # string offset=237
	.ident	"Ubuntu clang version 12.0.1-19ubuntu3"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym print
	.addrsig_sym printf
	.section	.debug_line,"",@progbits
.Lline_table_start0:
