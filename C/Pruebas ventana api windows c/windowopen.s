        .file   "windowopen.c"
        .text
        .data
        .align 4
_szWindowClass:
        .ascii "DesktopApp\0"
        .align 4
_szTitle:
        .ascii "C Windows window 4U\0"
        .comm   _hInst, 4, 2
        .section .rdata,"dr"
LC0:
        .ascii "C Windows window 4U\0"
        .align 4
LC1:
        .ascii "Call to RegisterClassEx failed!\0"
LC2:
        .ascii "Call to CreateWindow failed!\0"
        .text
        .globl  _WinMain@16
        .def    _WinMain@16;    .scl    2;      .type   32;     .endef
_WinMain@16:
LFB17:
        .cfi_startproc
        pushl   %ebp
        .cfi_def_cfa_offset 8
        .cfi_offset 5, -8
        movl    %esp, %ebp
        .cfi_def_cfa_register 5
        subl    $136, %esp
        movl    $48, -60(%ebp)
        movl    $3, -56(%ebp)
        movl    $_WndProc@16, -52(%ebp)
        movl    $0, -48(%ebp)
        movl    $0, -44(%ebp)
        movl    8(%ebp), %eax
        movl    %eax, -40(%ebp)
        movl    $32512, 4(%esp)
        movl    8(%ebp), %eax
        movl    %eax, (%esp)
        call    _LoadIconA@8
        subl    $8, %esp
        movl    %eax, -36(%ebp)
        movl    $32512, 4(%esp)
        movl    $0, (%esp)
        call    _LoadCursorA@8
        subl    $8, %esp
        movl    %eax, -32(%ebp)
        movl    $6, -28(%ebp)
        movl    $0, -24(%ebp)
        movl    $_szWindowClass, -20(%ebp)
        movl    -40(%ebp), %eax
        movl    $32512, 4(%esp)
        movl    %eax, (%esp)
        call    _LoadIconA@8
        subl    $8, %esp
        movl    %eax, -16(%ebp)
        leal    -60(%ebp), %eax
        movl    %eax, (%esp)
        call    _RegisterClassExA@4
        subl    $4, %esp
        testw   %ax, %ax
        jne     L2
        movl    $0, 12(%esp)
        movl    $LC0, 8(%esp)
        movl    $LC1, 4(%esp)
        movl    $0, (%esp)
        call    _MessageBoxA@16
        subl    $16, %esp
        movl    $1, %eax
        jmp     L7
L2:
        movl    8(%ebp), %eax
        movl    %eax, _hInst
        movl    $0, 44(%esp)
        movl    8(%ebp), %eax
        movl    %eax, 40(%esp)
        movl    $0, 36(%esp)
        movl    $0, 32(%esp)
        movl    $100, 28(%esp)
        movl    $500, 24(%esp)
        movl    $-2147483648, 20(%esp)
        movl    $-2147483648, 16(%esp)
        movl    $13565952, 12(%esp)
        movl    $_szTitle, 8(%esp)
        movl    $_szWindowClass, 4(%esp)
        movl    $0, (%esp)
        call    _CreateWindowExA@48
        subl    $48, %esp
        movl    %eax, -12(%ebp)
        cmpl    $0, -12(%ebp)
        jne     L4
        movl    $0, 12(%esp)
        movl    $LC0, 8(%esp)
        movl    $LC2, 4(%esp)
        movl    $0, (%esp)
        call    _MessageBoxA@16
        subl    $16, %esp
        movl    $1, %eax
        jmp     L7
L4:
        movl    20(%ebp), %eax
        movl    %eax, 4(%esp)
        movl    -12(%ebp), %eax
        movl    %eax, (%esp)
        call    _ShowWindow@8
        subl    $8, %esp
        movl    -12(%ebp), %eax
        movl    %eax, (%esp)
        call    _UpdateWindow@4
        subl    $4, %esp
        jmp     L5
L6:
        leal    -88(%ebp), %eax
        movl    %eax, (%esp)
        call    _TranslateMessage@4
        subl    $4, %esp
        leal    -88(%ebp), %eax
        movl    %eax, (%esp)
        call    _DispatchMessageA@4
        subl    $4, %esp
L5:
        movl    $0, 12(%esp)
        movl    $0, 8(%esp)
        movl    $0, 4(%esp)
        leal    -88(%ebp), %eax
        movl    %eax, (%esp)
        call    _GetMessageA@16
        subl    $16, %esp
        testl   %eax, %eax
        jne     L6
        movl    -80(%ebp), %eax
L7:
        leave
        .cfi_restore 5
        .cfi_def_cfa 4, 4
        ret     $16
        .cfi_endproc
LFE17:
        .globl  _WndProc@16
        .def    _WndProc@16;    .scl    2;      .type   32;     .endef
_WndProc@16:
LFB18:
        .cfi_startproc
        pushl   %ebp
        .cfi_def_cfa_offset 8
        .cfi_offset 5, -8
        movl    %esp, %ebp
        .cfi_def_cfa_register 5
        subl    $152, %esp
        movl    $1684957527, -115(%ebp)
        movl    $544438127, -111(%ebp)
        movl    $544435312, -107(%ebp)
        movl    $1633972341, -103(%ebp)
        movl    $2032166260, -99(%ebp)
        movl    $544372079, -95(%ebp)
        movl    $1869903220, -91(%ebp)
        movl    $1818323314, -87(%ebp)
        movl    $977150067, -83(%ebp)
        movw    $8232, -79(%ebp)
        movb    $0, -77(%ebp)
        cmpl    $2, 12(%ebp)
        je      L9
        cmpl    $15, 12(%ebp)
        jne     L10
        leal    -76(%ebp), %eax
        movl    %eax, 4(%esp)
        movl    8(%ebp), %eax
        movl    %eax, (%esp)
        call    _BeginPaint@8
        subl    $8, %esp
        movl    %eax, -12(%ebp)
        leal    -115(%ebp), %eax
        movl    %eax, (%esp)
        call    _strlen
        movl    %eax, 16(%esp)
        leal    -115(%ebp), %eax
        movl    %eax, 12(%esp)
        movl    $5, 8(%esp)
        movl    $5, 4(%esp)
        movl    -12(%ebp), %eax
        movl    %eax, (%esp)
        call    _TextOutA@20
        subl    $20, %esp
        leal    -76(%ebp), %eax
        movl    %eax, 4(%esp)
        movl    8(%ebp), %eax
        movl    %eax, (%esp)
        call    _EndPaint@8
        subl    $8, %esp
        jmp     L11
L9:
        movl    $0, (%esp)
        call    _PostQuitMessage@4
        subl    $4, %esp
        jmp     L11
L10:
        movl    20(%ebp), %eax
        movl    %eax, 12(%esp)
        movl    16(%ebp), %eax
        movl    %eax, 8(%esp)
        movl    12(%ebp), %eax
        movl    %eax, 4(%esp)
        movl    8(%ebp), %eax
        movl    %eax, (%esp)
        call    _DefWindowProcA@16
        subl    $16, %esp
        jmp     L13
L11:
        movl    $0, %eax
L13:
        leave
        .cfi_restore 5
        .cfi_def_cfa 4, 4
        ret     $16
        .cfi_endproc
LFE18:
        .ident  "GCC: (MinGW.org GCC Build-20200227-1) 9.2.0"
        .def    _LoadIconA@8;   .scl    2;      .type   32;     .endef
        .def    _LoadCursorA@8; .scl    2;      .type   32;     .endef
        .def    _RegisterClassExA@4;    .scl    2;      .type   32;     .endef
        .def    _MessageBoxA@16;        .scl    2;      .type   32;     .endef
        .def    _CreateWindowExA@48;    .scl    2;      .type   32;     .endef
        .def    _ShowWindow@8;  .scl    2;      .type   32;     .endef
        .def    _UpdateWindow@4;        .scl    2;      .type   32;     .endef
        .def    _TranslateMessage@4;    .scl    2;      .type   32;     .endef
        .def    _DispatchMessageA@4;    .scl    2;      .type   32;     .endef
        .def    _GetMessageA@16;        .scl    2;      .type   32;     .endef
        .def    _BeginPaint@8;  .scl    2;      .type   32;     .endef
        .def    _strlen;        .scl    2;      .type   32;     .endef
        .def    _TextOutA@20;   .scl    2;      .type   32;     .endef
        .def    _EndPaint@8;    .scl    2;      .type   32;     .endef
        .def    _PostQuitMessage@4;     .scl    2;      .type   32;     .endef
        .def    _DefWindowProcA@16;     .scl    2;      .type   32;     .endef
