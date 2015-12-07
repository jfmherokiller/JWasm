# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 295 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2
# 1 "./globals.h" 1
# 35 "./globals.h"
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdio.h" 1 3







# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/features.h" 1 3
# 9 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdio.h" 2 3
# 22 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdio.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3






typedef __builtin_va_list va_list;




typedef __builtin_va_list __isoc_va_list;
# 117 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef unsigned int size_t;
# 132 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef int ssize_t;
# 219 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef int off_t;
# 367 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef struct _IO_FILE FILE;
# 23 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdio.h" 2 3
# 50 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdio.h" 3
typedef union _G_fpos64_t {
 char __opaque[16];
 double __align;
} fpos_t;

extern FILE *const stdin;
extern FILE *const stdout;
extern FILE *const stderr;





FILE *fopen(const char *restrict, const char *restrict);
FILE *freopen(const char *restrict, const char *restrict, FILE *restrict);
int fclose(FILE *);

int remove(const char *);
int rename(const char *, const char *);

int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
void clearerr(FILE *);

int fseek(FILE *, long, int);
long ftell(FILE *);
void rewind(FILE *);

int fgetpos(FILE *restrict, fpos_t *restrict);
int fsetpos(FILE *, const fpos_t *);

size_t fread(void *restrict, size_t, size_t, FILE *restrict);
size_t fwrite(const void *restrict, size_t, size_t, FILE *restrict);

int fgetc(FILE *);
int getc(FILE *);
int getchar(void);
int ungetc(int, FILE *);

int fputc(int, FILE *);
int putc(int, FILE *);
int putchar(int);

char *fgets(char *restrict, int, FILE *restrict);




int fputs(const char *restrict, FILE *restrict);
int puts(const char *);

int printf(const char *restrict, ...);
int fprintf(FILE *restrict, const char *restrict, ...);
int sprintf(char *restrict, const char *restrict, ...);
int snprintf(char *restrict, size_t, const char *restrict, ...);

int vprintf(const char *restrict, __isoc_va_list);
int vfprintf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsprintf(char *restrict, const char *restrict, __isoc_va_list);
int vsnprintf(char *restrict, size_t, const char *restrict, __isoc_va_list);

int scanf(const char *restrict, ...);
int fscanf(FILE *restrict, const char *restrict, ...);
int sscanf(const char *restrict, const char *restrict, ...);
int vscanf(const char *restrict, __isoc_va_list);
int vfscanf(FILE *restrict, const char *restrict, __isoc_va_list);
int vsscanf(const char *restrict, const char *restrict, __isoc_va_list);

void perror(const char *);

int setvbuf(FILE *restrict, char *restrict, int, size_t);
void setbuf(FILE *restrict, char *restrict);

char *tmpnam(char *);
FILE *tmpfile(void);




FILE *fmemopen(void *restrict, size_t, const char *restrict);
FILE *open_memstream(char **, size_t *);
FILE *fdopen(int, const char *);
FILE *popen(const char *, const char *);
int pclose(FILE *);
int fileno(FILE *);
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
int dprintf(int, const char *restrict, ...);
int vdprintf(int, const char *restrict, __isoc_va_list);
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);
ssize_t getdelim(char **restrict, size_t *restrict, int, FILE *restrict);
ssize_t getline(char **restrict, size_t *restrict, FILE *restrict);
int renameat(int, const char *, int, const char *);
char *ctermid(char *);







char *tempnam(const char *, const char *);




char *cuserid(char *);
void setlinebuf(FILE *);
void setbuffer(FILE *, char *, size_t);
int fgetc_unlocked(FILE *);
int fputc_unlocked(int, FILE *);
int fflush_unlocked(FILE *);
size_t fread_unlocked(void *, size_t, size_t, FILE *);
size_t fwrite_unlocked(const void *, size_t, size_t, FILE *);
void clearerr_unlocked(FILE *);
int feof_unlocked(FILE *);
int ferror_unlocked(FILE *);
int fileno_unlocked(FILE *);
int getw(FILE *);
int putw(int, FILE *);
char *fgetln(FILE *, size_t *);
int asprintf(char **, const char *, ...);
int vasprintf(char **, const char *, __isoc_va_list);
# 35 "./globals.h" 2

# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/stdlib.h" 1 3







int getloadavg(double loadavg[], int nelem);






# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdlib.h" 1 3
# 19 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdlib.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3
# 32 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef int wchar_t;
# 20 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdlib.h" 2 3

int atoi (const char *);
long atol (const char *);
long long atoll (const char *);
double atof (const char *);

float strtof (const char *restrict, char **restrict);
double strtod (const char *restrict, char **restrict);
long double strtold (const char *restrict, char **restrict);

long strtol (const char *restrict, char **restrict, int);
unsigned long strtoul (const char *restrict, char **restrict, int);
long long strtoll (const char *restrict, char **restrict, int);
unsigned long long strtoull (const char *restrict, char **restrict, int);

int rand (void);
void srand (unsigned);

void *malloc (size_t);
void *calloc (size_t, size_t);
void *realloc (void *, size_t);
void free (void *);
void *aligned_alloc(size_t alignment, size_t size);

_Noreturn void abort (void);
int atexit (void (*) (void));
_Noreturn void exit (int);
_Noreturn void _Exit (int);
int at_quick_exit (void (*) (void));
_Noreturn void quick_exit (int);

char *getenv (const char *);

int system (const char *);

void *bsearch (const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void qsort (void *, size_t, size_t, int (*)(const void *, const void *));

int abs (int);
long labs (long);
long long llabs (long long);

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
typedef struct { long long quot, rem; } lldiv_t;

div_t div (int, int);
ldiv_t ldiv (long, long);
lldiv_t lldiv (long long, long long);

int mblen (const char *, size_t);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int wctomb (char *, wchar_t);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
# 98 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdlib.h" 3
int posix_memalign (void **, size_t, size_t);
int setenv (const char *, const char *, int);
int unsetenv (const char *);
int mkstemp (char *);
int mkostemp (char *, int);
char *mkdtemp (char *);
int getsubopt (char **, char *const *, char **);
int rand_r (unsigned *);






char *realpath (const char *restrict, char *restrict);
long int random (void);
void srandom (unsigned int);
char *initstate (unsigned int, char *, size_t);
char *setstate (char *);



int putenv (char *);
int posix_openpt (int);
int grantpt (int);
int unlockpt (int);
char *ptsname (int);
char *l64a (long);
long a64l (const char *);
void setkey (const char *);
double drand48 (void);
double erand48 (unsigned short [3]);
long int lrand48 (void);
long int nrand48 (unsigned short [3]);
long mrand48 (void);
long jrand48 (unsigned short [3]);
void srand48 (long);
unsigned short *seed48 (unsigned short [3]);
void lcong48 (unsigned short [7]);




# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/alloca.h" 1 3








# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3
# 10 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/alloca.h" 2 3

void *alloca(size_t);
# 141 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stdlib.h" 2 3
char *mktemp (char *);
int mkstemps (char *, int);
int mkostemps (char *, int, int);
void *valloc (size_t);
void *memalign(size_t, size_t);
int getloadavg(double *, int);
# 15 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/stdlib.h" 2 3
# 36 "./globals.h" 2

# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/string.h" 1 3







extern char* strlwr(char *);
extern char* strupr(char *);






# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/string.h" 1 3
# 23 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/string.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3
# 373 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef struct __locale_struct * locale_t;
# 24 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/string.h" 2 3

void *memcpy (void *restrict, const void *restrict, size_t);
void *memmove (void *, const void *, size_t);
void *memset (void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void *memchr (const void *, int, size_t);

char *strcpy (char *restrict, const char *restrict);
char *strncpy (char *restrict, const char *restrict, size_t);

char *strcat (char *restrict, const char *restrict);
char *strncat (char *restrict, const char *restrict, size_t);

int strcmp (const char *, const char *);
int strncmp (const char *, const char *, size_t);

int strcoll (const char *, const char *);
size_t strxfrm (char *restrict, const char *restrict, size_t);

char *strchr (const char *, int);
char *strrchr (const char *, int);

size_t strcspn (const char *, const char *);
size_t strspn (const char *, const char *);
char *strpbrk (const char *, const char *);
char *strstr (const char *, const char *);
char *strtok (char *restrict, const char *restrict);

size_t strlen (const char *);

char *strerror (int);



# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/strings.h" 1 3
# 11 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/strings.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3
# 12 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/strings.h" 2 3




int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
char *index (const char *, int);
char *rindex (const char *, int);


int ffs (int);

int strcasecmp (const char *, const char *);
int strncasecmp (const char *, const char *, size_t);

int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
# 58 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/string.h" 2 3





char *strtok_r (char *restrict, const char *restrict, char **restrict);
int strerror_r (int, char *, size_t);
char *stpcpy(char *restrict, const char *restrict);
char *stpncpy(char *restrict, const char *restrict, size_t);
size_t strnlen (const char *, size_t);
char *strdup (const char *);
char *strndup (const char *, size_t);
char *strsignal(int);
char *strerror_l (int, locale_t);
int strcoll_l (const char *, const char *, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);




void *memccpy (void *restrict, const void *restrict, int, size_t);



char *strsep(char **, const char *);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
# 16 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/string.h" 2 3
# 37 "./globals.h" 2

# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/errno.h" 1 3
# 10 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/errno.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/errno.h" 1 3
# 11 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/errno.h" 2 3


__attribute__((const))

int *__errno_location(void);
# 38 "./globals.h" 2






extern char * strupr(char *);
# 183 "./globals.h"
# 1 "./inttype.h" 1
# 45 "./inttype.h"
typedef unsigned char uint_8;
typedef signed char int_8;
typedef unsigned short uint_16;
typedef signed short int_16;






typedef unsigned long uint_32;
typedef signed long int_32;

typedef unsigned long long uint_64;
typedef signed long long int_64;
# 183 "./globals.h" 2

# 1 "./bool.h" 1
# 35 "./bool.h"
    typedef unsigned char bool;
# 184 "./globals.h" 2

# 1 "./errmsg.h" 1
# 39 "./errmsg.h"
enum msgno {

# 1 "./msgdef.h" 1
# 11 "./msgdef.h"
static const char * const msgtexts[] = {
"usage: JWasm [ options ] filelist [@env_var]\n" "Run \"JWasm -?\" or \"JWasm -h\" for more info\n",
"%s: %lu lines, %u passes, %u ms, %u warnings, %u errors",
"JWasm v" _JWASM_VERSION_ ", " "Dec  4 2015",
"Masm-compatible assembler.\n" "Portions Copyright (c) 1992-2002 Sybase, Inc. All Rights Reserved.\n" "Source code is available under the Sybase Open Watcom Public License.\n",
"Error",
"Warning",
"Fatal error",


"readonly",
"alignment",
"combine",
"segment word size",
"class",
"characteristics",
"alias",



"",
"",
"",
"",
"",
"",
"",
"",
"",
"",

"Value not within allowed range %s",
"Invalid associated segment: %s",
# 52 "./msgdef.h"
"",
"",


"Instruction prefix not allowed",
"Multiple base registers not allowed",
"Instruction or register not accepted in current CPU mode",
"invalid addressing mode with current CPU setting",
"Cannot use TR%u-TR%u with current CPU setting",
"Must be index or base register",
"Multiple index registers not allowed",
"Too few bits in RECORD: %s",
"Scale factor must be 1, 2, 4 or 8",
"Cannot be used as index register: %s",

"Base and index register differ in size",



"Expecting comma: %s",
"ORG needs a constant or local offset",
"POP CS is not allowed",
"Only MOV can use special register",
"Cannot use SHORT with CALL",
"Only SHORT jump distance is allowed",
"Syntax error",
"Prefix must be followed by an instruction",
"Syntax error: Unexpected colon",
"Operands must be the same size: %u - %u",
"Invalid instruction operands",
"Jump distance not possible in current CPU mode",
"Immediate data out of range",
"Can not use short or near modifiers with this instruction",
"Jump out of range by %d byte(s)",
"Displacement out of range: 0x%" "ll" "X",
"Initializer value too large",
"Symbol already defined: %s",
"Offset magnitude too large for specified size",
"Magnitude of offset exceeds 16 bit",
"Operand 2 too big",
"Operand 1 too small",
"Line too long",
"Too many tokens in a line",
"Symbol not defined : %s.%s",
"Expression expected: %s",
"Constant expected",
"Constant operand is expected",
".ELSE clause already occured in this .IF block",
"Multiple overrides",
"Segment, group or segment register expected",
"Identifier too long",
"Invalid operand size for instruction",
"Not supported: %s",
"Size not specified, assuming: %s",
"Floating-point initializer ignored",
"Only SHORT and NEAR jump distance is allowed",
"Initializer magnitude too large for specified size",
"Segment attribute is defined already: %s",
"Segment definition changed: %s, %s",
"Class name too long",
"Block nesting error: %s",
"Segment attribute is unknown: %s",
"Must be in segment block",
"Segment not defined: %s",
"Colon is expected",
"Invalid qualified type: %s",
"Qualified type is expected",
"Missing macro argument: iteration %u",
"Library name is missing",
"Cannot access label through segment registers: %s",
"Line too long after expansion: %40s",
"Language type must be specified",
"PROC, MACRO or macro loop directive must precede LOCAL",
"Cannot nest procedures",
"VARARG requires C calling convention",
"Multiple .MODEL directives, .MODEL ignored",
"Model is not declared",
"Backquote missing: `%s",
"COMMENT delimiter expected",
"END directive required at end of file",
"Nesting level too deep",
"Macro nesting level too deep",
"Symbol not defined : %s",
"Language attribute conflict: %s",
"No filename specified.",
"Out of Memory",
"Cannot open file: \"%s\" [%s]",
"Cannot close file: %s [%u]",
"File write error: %s [%u]",
"Invalid command-line option: %s",
"Internal error in %s(%u)\n",
"Expecting closing square bracket",
"Expecting file name",
"Too many errors",
"forced error%s",
"forced error: Value not equal to 0: %d%s",
"forced error: Value equal to 0: %d%s",
"forced error: symbol defined: %s",
"forced error: symbol not defined: %s",
"forced error: string blank : <%s>%s",
"forced error: string not blank : <%s>%s",
"forced error: strings not equal : <%s> : <%s>%s",
"forced error: strings equal : <%s> : <%s>%s",
"%*s%s(%" "" "u): Included by",
"%*s%s(%" "" "u)[%s]: Macro called from",
"%*s%s(%" "" "u): iteration %" "" "u: Macro called from",
"%*s%s(%" "" "u): Main line code",
"Extending jump",
"Directive ignored: %s",
"number must be a power of 2: %" "" "u",
"Incompatible with segment alignment: %s",
"Segment expected: %s",
"Incompatible CPU mode for %u-bit segment",
"Far call is converted to near call.",
"CPU option %s is not valid for selected CPU.",
"Segment '%s' is in another group already",
"Symbol type conflict: %s",
"Conflicting parameter definition: %s",
"PROC and PROTO calling convention conflict",
"Non-benign %s redefinition: %s",
"Too many bits in RECORD: %s",
"Statement not allowed inside structure definition",
"Unmatched block nesting: %s",
"Symbol redefinition: %s",
"Text item required",
"INVOKE argument type mismatch: argument %u",
"Too few arguments to INVOKE: %s",
"VARARG parameter must be last",

"LABEL parameter must be first",



"Too many arguments in macro call: %s: %s",
"Missing operator in expression",
"Unexpected literal found in expression: %s",
"Initializer must be a string or single item: %s",
"Too many initial values for structure: %s",
"Too many initial values for array: %s",
"String or text literal too long",
"PROLOGUE must be macro function",
"EPILOGUE must be macro procedure: %s",
"Reserved word expected",
"INVOKE requires prototype for procedure",
"Invalid type for data declaration: %s",
"Operand must be RECORD type or field",
"Unmatched macro nesting",
"Empty (null) string",
"No segment information to create fixup: %s",
"Register value overwritten by INVOKE",
"Missing quotation mark in string",
"Divide by zero in expression",
"General Failure",
"Cannot have implicit far jump or call to near label",
"Invalid use of register",
"Distance invalid for current segment",
"Initializer magnitude too large: %s",
"Cannot add two relocatable labels",
"Cannot define as public or external: %s",
"Positive value expected",
"FAR not allowed in FLAT model COMM variables",
"Too many arguments to INVOKE",
"Directive must appear inside a macro",
"Invalid type expression",
"Cannot declare scoped code label as PUBLIC: %s",
"Invalid radix tag",
"Instruction operand must have size",
"Use of register assumed to ERROR",
"Instructions and initialized data not supported in %s segments",
"Literal expected after '='",



"",

"Line number information for segment without class 'CODE': %s",
"Operand must be relocatable",
"Constant or relocatable label expected",
"[ELSE]IF2/.ERR2 not allowed, single-pass assembler",
"Expression too complex for UNTILCXZ",
"Operands must be in same segment",
"Invalid use of external symbol: %s",

"For -coff leading underscore required for start label: %s",



"Invalid command-line value, default is used: -%s",
"Unknown fixup type: %u at %s.%lX",
"Unsupported fixup type for %s: %s",
"Invalid fixup type for %s: %u at location %s.%lX",
"Syntax error in control-flow directive",
"Invalid .model parameter for flat model",

"Output format doesn't support externals: %s",
"Invalid start label for -bin",

"No start label defined",
"No stack defined",
"Invalid alignment - value must be 2^n (n=4..15)",
# 264 "./msgdef.h"
"Index value past end of string: %d",
"Count value too large",
"Count must be positive or zero",
"Syntax error: %s",

"Too many unwind codes in FRAME procedure",




"Model must be FLAT",



"Must use floating-point initializer",
"ORG directive not allowed in unions",
"Struct alignment must be 1, 2, 4, 8, 16 or 32",
"Structure cannot be instanced",
"Missing angle bracket or brace in literal",
"Nondigit in number: %s",
"16bit fixup for 32bit label: %s",
"Too many macro placeholders",
"Missing macro argument: %s, parameter %u",
"Doesn't work with 32-bit segments: %s",
"Segment exceeds 64k limit: %s",
"Not supported with OMF format: %s",
"Not supported with current output format: %s",
"Unknown default prologue argument: %s",
"LOADDS ignored in flat model",
"Missing right parenthesis in expression",
"Invalid operand for %s: %s",
"Structure improperly initialized: %s",
"Expected: %s",
"Invalid data initializer: %s",
"Expected data label",
"Expression must be a code address",
"-n Option needs a valid name parameter",
"Constant value too large: %" "ll" "Xh",
"Text macro used prior to definition: %s",
"Offset size incompatible with current segment",
"Instruction form requires 80386",
"Group/Segment offset size conflict: %s - %s",
"Assembly passes reached: %u",
"Filename parameter must be enclosed in <> or quotes",
"Start address on END directive ignored with .STARTUP",
"Invalid symbol type in expression: %s",
"Missing right parenthesis",
"Directive must be in control block",
"Expected: memory model",
"Type is wrong size for register",
"IF[n]DEF expects a plain symbol as argument: %s",
"Jump destination must specify a label",
"Ignored: %s",
"Missing argument for cmdline option",
"Invalid coprocessor register",

"Registers AH-DH may not be used with SPL-DIL or R8-R15",
".ENDPROLOG found before EH directives",
"Missing FRAME in PROC, no unwind code will be generated",
"Bad alignment for offset in unwind code",
"Nonzero value expected",
"Size of prolog too big, must be < 256 bytes",
"Missing .ENDPROLOG: %s",
# 337 "./msgdef.h"
".SAFESEH argument must be a PROC",
"Directive ignored without -%s switch",





"ELF GNU extensions (8/16-bit relocations) used",



"Syntax error in expression",
"Macro label not defined: %s",
"Procedure argument or local not referenced: %s",
"Group definition too large, truncated: %s",
"COMM variable exceeds 64K: %s",
"Must be public or external: %s",
"parameter/local name is reserved word: %s",
"real or BCD number not allowed",
"structure field expected",
"Constant value too large: %" "ll" "X%016" "ll" "Xh",
"ELSE clause already occured in this IF block",
"Illegal use of segment register",
"Group exceeds 64K: %s",
"EXPORT must be FAR: %s",
};
# 40 "./errmsg.h" 2

    MSG_LAST
};
# 63 "./errmsg.h"
extern void Fatal( int msgnum, ... );
extern int EmitError( int msgnum );
extern int EmitErr( int msgnum, ... );
extern void EmitWarn( int level, int msgnum, ... );
extern void PrintNote( int msgnum, ... );
extern char *ErrnoStr( void );
extern int write_logo( void );
extern void PrintUsage( void );

extern void WriteError( void );
# 185 "./globals.h" 2

# 1 "./queue.h" 1
# 36 "./queue.h"
struct qnode {
    void *next;
    union {
        const void *elmt;
        struct asym *sym;
    };
};

struct qdesc {
    void *head;
    void *tail;
};


extern void QEnqueue( struct qdesc *, void * );
extern void QAddItem( struct qdesc *, const void * );
# 186 "./globals.h" 2
# 202 "./globals.h"
typedef enum {
 EMPTY = -2,
 ERROR = -1,
 NOT_ERROR = 0,
 STRING_EXPANDED = 1
} ret_code;

enum {
    PASS_1 = 0,
    PASS_2
};




enum oformat {

    OFORMAT_BIN,

    OFORMAT_OMF,

    OFORMAT_COFF,


    OFORMAT_ELF,

};

enum sformat {
    SFORMAT_NONE,

    SFORMAT_MZ,


    SFORMAT_PE,
# 245 "./globals.h"
    SFORMAT_64BIT,


};

enum fpo {
    FPO_NO_EMULATION,
    FPO_EMULATION
};





enum lang_type {
    LANG_NONE = 0,
    LANG_C = 1,
    LANG_SYSCALL = 2,
    LANG_STDCALL = 3,
    LANG_PASCAL = 4,
    LANG_FORTRAN = 5,
    LANG_BASIC = 6,
    LANG_FASTCALL = 7
};





enum model_type {
    MODEL_NONE = 0,
    MODEL_TINY = 1,
    MODEL_SMALL = 2,
    MODEL_COMPACT = 3,
    MODEL_MEDIUM = 4,
    MODEL_LARGE = 5,
    MODEL_HUGE = 6,
    MODEL_FLAT = 7,
};




enum seg_order {
    SEGORDER_SEQ = 0,
    SEGORDER_DOSSEG,
    SEGORDER_ALPHA
};


enum listmacro {
    LM_NOLISTMACRO,
    LM_LISTMACRO,
    LM_LISTMACROALL
};




enum assume_segreg {
    ASSUME_NOTHING = EMPTY,
    ASSUME_ES = 0,
    ASSUME_CS,
    ASSUME_SS,
    ASSUME_DS,
    ASSUME_FS,
    ASSUME_GS
};

enum cpu_info {






    P_NO87 = 0x0001,
    P_87 = 0x0002,
    P_287 = 0x0003,
    P_387 = 0x0004,

    P_PM = 0x0008,

    P_86 = 0x0000,
    P_186 = 0x0010,
    P_286 = 0x0020,
    P_386 = 0x0030,
    P_486 = 0x0040,
    P_586 = 0x0050,
    P_686 = 0x0060,

    P_64 = 0x0070,


    P_286p = P_286 | P_PM,
    P_386p = P_386 | P_PM,
    P_486p = P_486 | P_PM,
    P_586p = P_586 | P_PM,
    P_686p = P_686 | P_PM,

    P_64p = P_64 | P_PM,


    P_MMX = 0x0100,

    P_K3D = 0x0200,

    P_SSE1 = 0x0400,
    P_SSE2 = 0x0800,
    P_SSE3 = 0x1000,

    P_SSSE3 = 0x2000,

    P_SSE4 = 0x4000,

    P_AVX = 0x8000,







    P_SSEALL = P_SSE1 | P_SSE2 | P_SSE3 | P_SSSE3 | P_SSE4 | P_AVX,
# 378 "./globals.h"
    NO_OPPRFX = P_MMX | P_SSEALL,

    P_FPU_MASK = 0x0007,
    P_CPU_MASK = 0x00F0,


    P_EXT_MASK = P_MMX | P_K3D | P_SSEALL,
    P_EXT_ALL = P_MMX | P_K3D | P_SSEALL




};


enum masm_cpu {
    M_8086 = 0x0001,
    M_186 = 0x0002,
    M_286 = 0x0004,
    M_386 = 0x0008,
    M_486 = 0x0010,
    M_586 = 0x0020,
    M_686 = 0x0040,
    M_CPUMSK = 0x007F,
    M_PROT = 0x0080,
    M_8087 = 0x0100,
    M_287 = 0x0400,
    M_387 = 0x0800
};
# 422 "./globals.h"
enum segofssize {
    USE_EMPTY = 0xFE,
    USE16 = 0,
    USE32 = 1,

    USE64 = 2

};




enum fastcall_type {
    FCT_MSC,

    FCT_WATCOMC,


    FCT_WIN64

};

enum stdcall_decoration {
    STDCALL_FULL,
    STDCALL_NONE,
    STDCALL_HALF
};

struct qitem {
    void *next;
    char value[1];
};


enum file_extensions {
    ASM,
    OBJ,
    LST,
    ERR,
    NUM_FILE_TYPES
};


enum opt_names {
    OPTN_ASM_FN,
    OPTN_OBJ_FN,
    OPTN_LST_FN,
    OPTN_ERR_FN,

    OPTN_LNKDEF_FN,

    OPTN_MODULE_NAME,
    OPTN_TEXT_SEG,
    OPTN_DATA_SEG,
    OPTN_CODE_CLASS,






    OPTN_LAST
};


enum opt_queues {
    OPTQ_FINCLUDE,
    OPTQ_MACRO,
    OPTQ_INCPATH,
    OPTQ_LAST
};

enum prologue_epilogue_mode {
    PEM_DEFAULT,
    PEM_MACRO,
    PEM_NONE
};


enum dist_type {

    STACK_NEAR,
    STACK_FAR,
};


enum os_type {
    OPSYS_DOS,
    OPSYS_OS2,
};

enum offset_type {
    OT_GROUP = 0,
    OT_FLAT,
    OT_SEGMENT
};

enum line_output_flags {
    LOF_LISTED = 1,

    LOF_SKIPPOS = 2,


};


enum win64_flag_values {
    W64F_SAVEREGPARAMS = 0x01,
    W64F_AUTOSTACKSP = 0x02,
    W64F_STACKALIGN16 = 0x04,
    W64F_ALL = W64F_SAVEREGPARAMS | W64F_AUTOSTACKSP | W64F_STACKALIGN16,
};


enum cvex_values {
    CVEX_MIN = 0,
    CVEX_REDUCED = 1,
    CVEX_NORMAL = 2,
    CVEX_MAX = 3,
};


enum cvoption_flags {
    CVO_STATICTLS = 1,
};

enum seg_type {
    SEGTYPE_UNDEF,
    SEGTYPE_CODE,
    SEGTYPE_DATA,
    SEGTYPE_BSS,
    SEGTYPE_STACK,
    SEGTYPE_ABS,

    SEGTYPE_HDR,
    SEGTYPE_CDATA,
    SEGTYPE_RELOC,
    SEGTYPE_RSRC,
    SEGTYPE_ERROR,

};

struct global_options {
    bool quiet;
    bool line_numbers;
    uint_8 debug_symbols;
    uint_8 debug_ext;
    enum fpo floating_point;


    int error_limit;
    uint_8 no_error_disp;
    uint_8 warning_level;
    bool warning_error;
# 591 "./globals.h"
    char *names[OPTN_LAST];
    struct qitem *queues[OPTQ_LAST];



    bool no_comment_data_in_code_records;
    bool no_opt_farcall;


    bool no_file_entry;
    bool no_static_procs;
    bool no_section_aux_entry;

    bool no_cdecl_decoration;
    uint_8 stdcall_decoration;
    bool no_export_decoration;
    bool entry_decorated;
    bool write_listing;
    bool write_impdef;
    bool case_sensitive;
    bool convert_uppercase;
    bool preprocessor_stdout;
    bool masm51_compat;
    bool strict_masm_compat;
    bool masm_compat_gencode;
    bool masm8_proc_visibility;
    bool listif;
    bool list_generated_code;
    enum listmacro list_macro;
    bool no_symbol_listing;
    bool first_pass_listing;
    bool all_symbols_public;
    bool safeseh;
    uint_8 ignore_include;
    enum oformat output_format;
    enum sformat sub_format;
    uint_8 fieldalign;
    enum lang_type langtype;
    enum model_type model;
    enum cpu_info cpu;
    enum fastcall_type fctype;
    bool syntax_check_only;



};



struct MZDATA {
    uint_16 ofs_fixups;
    uint_16 alignment;
    uint_16 heapmin;
    uint_16 heapmax;
};



struct dll_desc {
    struct dll_desc *next;
    int cnt;
    char name[1];
};




struct src_item;
struct hll_item;
struct context;

struct fname_item {
    char *fname;






};

struct module_info;

struct module_vars {
    unsigned error_count;
    unsigned warning_count;
    unsigned num_segs;


    struct qdesc PubQueue;
    struct qdesc LnameQueue;

    struct qdesc SafeSEHQueue;

    struct qdesc LibQueue;




    struct dll_desc *DllQueue;


    char *imp_prefix;

    FILE *curr_file[NUM_FILE_TYPES];
    char *curr_fname[NUM_FILE_TYPES];
    struct fname_item *FNames;
    unsigned cnt_fnames;
    char *IncludePath;
    struct qdesc line_queue;
    struct src_item *src_stack;
    union {
        struct fixup *start_fixup;
        struct asym *start_label;
    };
    uint_32 start_displ;
    struct hll_item *HllStack;
    struct hll_item *HllFree;
    struct context *ContextStack;
    struct context *ContextFree;

    struct context *SavedContexts;
    int cntSavedContexts;


    unsigned anonymous_label;

    struct asym *StackBase;
    struct asym *ProcStatus;

    ret_code (* WriteModule)( struct module_info * );
    ret_code (* EndDirHook)( struct module_info * );
    ret_code (* Pass1Checks)( struct module_info * );

    uint_8 pe_flags;

};

struct format_options;

struct module_info {
    struct module_vars g;
    char *proc_prologue;
    char *proc_epilogue;

    struct dll_desc *CurrDll;

    const struct format_options *fmtopt;
    unsigned hll_label;
    enum dist_type distance;
    enum model_type model;
    enum lang_type langtype;
    enum os_type ostype;
    enum sformat sub_format;
    enum fastcall_type fctype;
    enum seg_order segorder;
    enum offset_type offsettype;
    short cpu;
    enum cpu_info curr_cpu;
    unsigned char radix;
    unsigned char fieldalign;
    unsigned char line_flags;

    unsigned char procalign;

    enum listmacro list_macro;
    unsigned char Ofssize;
    unsigned char defOfssize;
    unsigned char wordsize;
    unsigned char inside_comment;

    unsigned case_sensitive:1;
    unsigned convert_uppercase:1;
    unsigned procs_private:1;
    unsigned procs_export:1;
    unsigned dotname:1;
    unsigned ljmp:1;
    unsigned m510:1;
    unsigned scoped:1;
    unsigned oldstructs:1;
    unsigned emulator:1;
    unsigned setif2:1;
    unsigned list:1;
    unsigned cref:1;
    unsigned listif:1;
    unsigned list_generated_code:1;
    unsigned StartupDirectiveFound:1;
    unsigned EndDirFound:1;

    unsigned frame_auto:1;

    unsigned NoSignExtend:1;

    union {

        struct {

        uint_8 elf_osabi;


        uint_8 win64_flags;

        };


        struct MZDATA mz_data;

    };

    unsigned char simseg_init;
    unsigned char simseg_defd;
    unsigned char PhaseError;
    unsigned char CommentDataInCode;
    unsigned char prologuemode;
    unsigned char epiloguemode;
    unsigned char invoke_exprparm;

    unsigned char cv_opt;

    unsigned srcfile;
    struct dsym *currseg;
    struct dsym *flat_grp;
    uint_8 *pCodeBuff;
    unsigned int GeneratedCode;

    char *currsource;
    char *CurrComment;
    struct asm_tok *tokenarray;
    char *stringbufferend;
    int token_count;

    unsigned basereg[3];

    char name[4096];
};
# 835 "./globals.h"
struct format_options {
    void (*init)( struct module_info * );
    short invalid_fixup_type;
    const char formatname[6];
};



extern struct global_options Options;
extern struct module_info ModuleInfo;
extern unsigned int Parse_Pass;

extern uint_8 MacroLevel;
extern bool write_to_file;







struct fixup;

extern void OutputByte( unsigned char );

extern void FillDataBytes( unsigned char, int len );
extern void OutputBytes( const unsigned char *, int len, struct fixup * );



extern int AssembleModule( const char * );

extern void AddLinnumDataRef( unsigned, uint_32 );
extern void SetMasm510( bool );
extern void close_files( void );
extern char *myltoa( uint_32 value, char *buffer, unsigned radix, bool sign, bool addzero );

extern char *ConvertSectionName( const struct asym *, enum seg_type *pst, char *buffer );
# 2 "main.c" 2
# 1 "./assume.h" 1
# 35 "./assume.h"
enum err_flags {
    RL_ERROR = 0x01,
    RX_ERROR = 0x02,
    ERX_ERROR = 0x04,
    RRX_ERROR = 0x08,
    RH_ERROR = 0x10
};

struct assume_info {
    struct asym *symbol;

    unsigned char error;
    unsigned char is_flat;
};


struct stdassume_typeinfo {
    struct asym *type;
    struct asym *target_type;
    enum memtype mem_type;
    unsigned char ptr_memtype;
    unsigned char is_ptr;
};




extern struct assume_info SegAssumeTable[];


extern struct assume_info StdAssumeTable[];



extern void AssumeInit( int );

extern enum assume_segreg search_assume( const struct asym *sym, enum assume_segreg def, bool search_grps );
extern enum assume_segreg GetAssume( const struct asym *, const struct asym *, enum assume_segreg, struct asym * * );

extern struct asym *GetOverrideAssume( enum assume_segreg );
extern struct asym *GetStdAssume( int );
extern struct asym *GetStdAssumeEx( int );

extern void ModelAssumeInit( void );
extern void SetSegAssumeTable( void * );
extern void GetSegAssumeTable( void * );
extern void SetStdAssumeTable( void *, struct stdassume_typeinfo * );
extern void GetStdAssumeTable( void *, struct stdassume_typeinfo * );
# 3 "main.c" 2
# 1 "./atofloat.h" 1




extern void atofloat( void *, const char *, unsigned, bool, uint_8 );
# 4 "main.c" 2
# 1 "./bin.h" 1
# 11 "./bin.h"
void bin_init( struct module_info * );


void pe_create_PE_header( void );
# 5 "main.c" 2
# 1 "./bool.h" 1
# 6 "main.c" 2
# 1 "./cmdline.h" 1
# 13 "./cmdline.h"
extern char * ParseCmdline( const char **cmdline, int * );
extern void CmdlineFini( void );
# 7 "main.c" 2
# 1 "./codegen.h" 1
# 96 "./codegen.h"
enum byte1_info {
    F_16 = 1,
    F_32,
    F_16A,
    F_32A,
    F_F3,

    F_48,

    F_0F = 16,
    F_0F0F,
    F_660F,
    F_F20F,
    F_F30F,
    F_0FNO66,

    F_480F,

    F_0F38,
    F_0F3A,
    F_660F38,
    F_660F3A,
    F_F20F38,
};



enum vex_info {
    VX_L = 0x01,
    VX_NND = 0x02,
    VX_DST = 0x04,
    VX_IMM = 0x08,
    VX_NMEM = 0x10,
    VX_HALF = 0x20,
};


extern ret_code codegen( struct code_info *, uint_32 );
# 8 "main.c" 2
# 1 "./coff.h" 1






struct qditem {
    uint_8 *next;
    unsigned size;
};

extern void coff_init( struct module_info * );
# 9 "main.c" 2
# 1 "./coffspec.h" 1
# 18 "./coffspec.h"
struct IMAGE_FILE_HEADER {
    uint_16 Machine;
    uint_16 NumberOfSections;
    uint_32 TimeDateStamp;
    uint_32 PointerToSymbolTable;
    uint_32 NumberOfSymbols;
    uint_16 SizeOfOptionalHeader;
    uint_16 Characteristics;
};



struct IMAGE_SECTION_HEADER {
    char Name[8];
    union {
        uint_32 PhysicalAddress;
        uint_32 VirtualSize;
    } Misc;
    uint_32 VirtualAddress;
    uint_32 SizeOfRawData;
    uint_32 PointerToRawData;
    uint_32 PointerToRelocations;
    uint_32 PointerToLinenumbers;
    uint_16 NumberOfRelocations;
    uint_16 NumberOfLinenumbers;
    uint_32 Characteristics;
};
# 91 "./coffspec.h"
#pragma pack(push,2)
typedef struct _IMAGE_RELOCATION {
    union {
        uint_32 VirtualAddress;
        uint_32 RelocCount;
    };
    uint_32 SymbolTableIndex;
    uint_16 Type;
} IMAGE_RELOCATION;
#pragma pack(pop)
# 134 "./coffspec.h"
#pragma pack(push,2)
typedef struct _IMAGE_SYMBOL {
    union {


        uint_8 ShortName[8];
        struct {
            uint_32 Short;
            uint_32 Long;
        } Name;


        uint_32 LongName[2];
    } N;
    uint_32 Value;
    uint_16 SectionNumber;
    uint_16 Type;
    uint_8 StorageClass;
    uint_8 NumberOfAuxSymbols;
} IMAGE_SYMBOL;
# 229 "./coffspec.h"
typedef union _IMAGE_AUX_SYMBOL {

    struct {
        uint_32 TagIndex;
        union {
            struct {
                uint_16 Linenumber;
                uint_16 Size;
            } LnSz;
            uint_32 TotalSize;
        } Misc;
        union {
            struct {
                uint_32 PointerToLinenumber;
                uint_32 PointerToNextFunction;
            } Function;
            struct {
                uint_16 Dimension[4];
            } Array;
        } FcnAry;
        uint_16 TvIndex;
    } Sym;

    struct {


        uint_8 Name[18];
    } File;

    struct {
        uint_32 Length;
        uint_16 NumberOfRelocations;
        uint_16 NumberOfLinenumbers;
        uint_32 CheckSum;
        uint_16 Number;
        uint_8 Selection;
    } Section;
} IMAGE_AUX_SYMBOL;
#pragma pack(pop)

typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
    uint_32 NumberOfSymbols;
    uint_32 LvaToFirstSymbol;
    uint_32 NumberOfLinenumbers;
    uint_32 LvaToFirstLinenumber;
    uint_32 RvaToFirstByteOfCode;
    uint_32 RvaToLastByteOfCode;
    uint_32 RvaToFirstByteOfData;
    uint_32 RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER;

#pragma pack(push,2)
typedef struct _IMAGE_LINENUMBER {
    union {
        uint_32 SymbolTableIndex;
        uint_32 VirtualAddress;
    } Type;
    uint_16 Linenumber;
} IMAGE_LINENUMBER;
#pragma pack(pop)
# 10 "main.c" 2
# 1 "./condasm.h" 1
# 34 "./condasm.h"
enum if_state {
    BLOCK_ACTIVE,
    BLOCK_INACTIVE,
    BLOCK_DONE

};

enum cond_class {
    CC_NULL,
    CC_NUMARG,
    CC_LITARG,
    CC_BLKARG,
    CC_SYMARG,
    CC_PASS1,
    CC_PASS2,
};

extern enum if_state CurrIfState;

extern void conditional_assembly_prepare( int );
extern int GetIfNestLevel( void );
extern void SetIfNestLevel( int );
extern void CondCheckOpen( void );
extern void CondInit( void );
# 11 "main.c" 2
# 1 "./context.h" 1
# 12 "./context.h"
extern void ContextInit( int );
# 12 "main.c" 2
# 1 "./cpumodel.h" 1
# 11 "./cpumodel.h"
extern ret_code SetCPU( enum cpu_info );
# 13 "main.c" 2
# 1 "./data.h" 1




extern ret_code data_dir( int, struct asm_tok[], struct asym * );
# 14 "main.c" 2
# 1 "./dbgcv.h" 1
# 36 "./dbgcv.h"
struct cv_primitive_type {
    uint_16 size:3,
    reserved:1,
    type:4,
    mode:3,
    reserved2:1;
};




typedef uint_16 cv_typeref;





enum cv_predef_type_types {
    CV_PDT_SPECIAL = 0x00,
    CV_PDT_SIGNED_INTEGRAL = 0x01,
    CV_PDT_UNSIGNED_INTEGRAL = 0x02,
    CV_PDT_BOOLEAN = 0x03,
    CV_PDT_REAL = 0x04,
    CV_PDT_COMPLEX = 0x05,
    CV_PDT_SPECIAL2 = 0x06,
    CV_PDT_REAL_INT_VALUE = 0x07

};


enum cv_predef_type_sizes {
    CV_PDS_SPECIAL_NO_TYPE = 0x00,
    CV_PDS_SPECIAL_ABSOLUTE = 0x01,
    CV_PDS_SPECIAL_SEGMENT = 0x02,
    CV_PDS_SPECIAL_VOID = 0x03,
    CV_PDS_SPECIAL_BASIC_CURRENCY = 0x04,
    CV_PDS_SPECIAL_BASIC_NEAR_STRING = 0x05,
    CV_PDS_SPECIAL_BASIC_FAR_STRING = 0x06,
    CV_PDS_SPECIAL_UNTRANSLATED = 0x07,
    CV_PDS_INTEGRAL_1BYTE = 0x00,
    CV_PDS_INTEGRAL_2BYTE = 0x01,
    CV_PDS_INTEGRAL_4BYTE = 0x02,
    CV_PDS_INTEGRAL_8BYTE = 0x03,

    CV_PDS_REAL_32BIT = 0x00,
    CV_PDS_REAL_64BIT = 0x01,
    CV_PDS_REAL_80BIT = 0x02,
    CV_PDS_REAL_128BIT = 0x03,
    CV_PDS_REAL_48BIT = 0x04,

    CV_PDS_SPECIAL2_BIT = 0x00,
    CV_PDS_SPECIAL2_PASCAL_CHAR = 0x01,

    CV_PDS_REAL_INT_CHAR = 0x00,
    CV_PDS_REAL_INT_WCHAR = 0x01,
    CV_PDS_REAL_INT_SINT16 = 0x02,
    CV_PDS_REAL_INT_UINT16 = 0x03,
    CV_PDS_REAL_INT_SINT32 = 0x04,
    CV_PDS_REAL_INT_UINT32 = 0x05,
    CV_PDS_REAL_INT_SINT64 = 0x06,
    CV_PDS_REAL_INT_UINT64 = 0x07,
};


enum cv_predef_type_modes {
    CV_PDM_DIRECT = 0x00,
    CV_PDM_NEARPTR = 0x01,
    CV_PDM_FARPTR = 0x02,
    CV_PDM_HUGEPTR = 0x03,
    CV_PDM_NEAR32PTR = 0x04,
    CV_PDM_FAR32PTR = 0x05,
    CV_PDM_NEAR64PTR = 0x06

};

struct cv_attribute {
    uint_16 access:2,
    mprop:3,
    pseudo:1,
    noinherit:1,
    noconstruct:1,
    reserved:8;
};

enum cv_attr_access {
    CV_ATTR_ACC_NOPROTECTION = 0,
    CV_ATTR_ACC_PRIVATE = 1,
    CV_ATTR_ACC_PROTECTED = 2,
    CV_ATTR_ACC_PUBLIC = 3,
};

enum cv_attr_mprop {
    CV_ATTR_MPR_VANILLA = 0,
    CV_ATTR_MPR_VIRTUAL = 1,
    CV_ATTR_MPR_STATIC = 2,
    CV_ATTR_MPR_FRIEND = 3,
    CV_ATTR_MPR_INTRO_VIRTUAL = 4,
    CV_ATTR_MPR_PURE_VIRTUAL = 5,
    CV_ATTR_MPR_PURE_INTRO_VIRTUAL = 6,
};

enum cv4_leaf_indices {
    CV4_LF_MODIFIER = 0x0001,
    CV4_LF_POINTER = 0x0002,
    CV4_LF_ARRAY = 0x0003,
    CV4_LF_CLASS = 0x0004,
    CV4_LF_STRUCTURE = 0x0005,
    CV4_LF_UNION = 0x0006,
    CV4_LF_ENUM = 0x0007,
    CV4_LF_PROCEDURE = 0x0008,




    CV4_LF_ARGLIST = 0x0201,
    CV4_LF_FIELDLIST = 0x0204,
    CV4_LF_BITFIELD = 0x0206,

    CV4_LF_MEMBER = 0x0406,
};

enum cv5_leaf_indices {
    CV5_LF_POINTER = 0x1002,
    CV5_LF_ARRAY = 0x1003,
    CV5_LF_CLASS = 0x1004,
    CV5_LF_STRUCTURE = 0x1005,
    CV5_LF_UNION = 0x1006,
    CV5_LF_ENUM = 0x1007,
    CV5_LF_PROCEDURE = 0x1008,

    CV5_LF_ARGLIST = 0x1201,
    CV5_LF_FIELDLIST = 0x1203,
    CV5_LF_BITFIELD = 0x1205,

    CV5_LF_MEMBER = 0x1405,
};

enum cv8_leaf_indices {
    CV8_LF_ARRAY = 0x1503,
    CV8_LF_STRUCTURE = 0x1505,
    CV8_LF_UNION = 0x1506,
    CV8_LF_MEMBER = 0x150D,
};

enum cv_leaf_indices {
    LF_MODIFIER = 0x0001,
    LF_LABEL = 0x000E,

    LF_POINTER = CV4_LF_POINTER,
    LF_ARRAY = CV4_LF_ARRAY,
    LF_CLASS = CV4_LF_CLASS,
    LF_STRUCTURE = CV4_LF_STRUCTURE,
    LF_UNION = CV4_LF_UNION,
    LF_ENUM = CV4_LF_ENUM,
    LF_PROCEDURE = CV4_LF_PROCEDURE,

    LF_ARGLIST = CV4_LF_ARGLIST,
    LF_FIELDLIST = CV4_LF_FIELDLIST,
    LF_BITFIELD = CV4_LF_BITFIELD,

    LF_MEMBER = CV4_LF_MEMBER,
# 213 "./dbgcv.h"
    LF_NUMERIC = 0x8000,
    LF_CHAR = 0x8000,
    LF_SHORT = 0x8001,
    LF_USHORT = 0x8002,
    LF_LONG = 0x8003,
    LF_ULONG = 0x8004,

    LF_PAD0 = 0xF0,
    LF_PAD1 = 0xF1,
    LF_PAD2 = 0xF2,
    LF_PAD3 = 0xF3,
    LF_PAD4 = 0xF4,
    LF_PAD5 = 0xF5,
    LF_PAD6 = 0xF6,
    LF_PAD7 = 0xF7,
    LF_PAD8 = 0xF8,
    LF_PAD9 = 0xF9,
    LF_PAD10 = 0xFA,
    LF_PAD11 = 0xFB,
    LF_PAD12 = 0xFC,
    LF_PAD13 = 0xFD,
    LF_PAD14 = 0xFE,
    LF_PAD15 = 0xFF
};

struct cv_typerec {
    uint_16 size;
    uint_16 leaf;
};


enum cv_typerec_pointer_types {
    CV_TYPE_PTRTYPE_NEAR = 0,
    CV_TYPE_PTRTYPE_FAR = 1,
    CV_TYPE_PTRTYPE_HUGE = 2,
    CV_TYPE_PTRTYPE_BASED1 = 3,
    CV_TYPE_PTRTYPE_BASED2 = 4,
    CV_TYPE_PTRTYPE_BASED3 = 5,
    CV_TYPE_PTRTYPE_BASED4 = 6,
    CV_TYPE_PTRTYPE_BASED5 = 7,
    CV_TYPE_PTRTYPE_BASED6 = 8,
    CV_TYPE_PTRTYPE_BASED7 = 9,
    CV_TYPE_PTRTYPE_NEAR32 = 10,
    CV_TYPE_PTRTYPE_FAR32 = 11,
};

#pragma pack(push, 1)

struct cv_typerec_pointer {
    struct cv_typerec tr;
    uint_16 attribute;
    union {
        struct cv_primitive_type pptype;
        cv_typeref type;
    };

};

struct cv_typerec_array {
    struct cv_typerec tr;
    cv_typeref elemtype;
    cv_typeref idxtype;
    uint_16 length;

};

struct cv_typerec_structure {
    struct cv_typerec tr;
    uint_16 count;

    cv_typeref field;
    uint_16 property;
    cv_typeref dList;
    cv_typeref vshape;






    uint_16 length;

};



enum cv_typerec_structure_property {
    CVTSP_PACKED = 0x001,
    CVTSP_CTOR = 0x002,
    CVTSP_OVEROPS = 0x004,
    CVTSP_ISNESTED = 0x008,
    CVTSP_CNESTED = 0x010,
    CVTSP_OPASSIGN = 0x020,
    CVTSP_OPCAST = 0x040,
    CVTSP_FWDREF = 0x080,
    CVTSP_SCOPED = 0x100,
};

struct cv_typerec_union {
    struct cv_typerec tr;
    uint_16 count;

    cv_typeref field;
    uint_16 property;




    uint_16 length;

};

struct cv_typerec_procedure {
    struct cv_typerec tr;
    cv_typeref rvtype;
    uint_8 call;
    uint_8 rsvd;
    uint_16 numparams;
    cv_typeref arglist;
};

struct cv_typerec_label {
    struct cv_typerec tr;
    uint_16 mode;
};


enum cv_typerec_label_values {
    CV_TYPE_LABEL_NEAR = 0x00,
    CV_TYPE_LABEL_FAR = 0x04
};

struct cv_typerec_arglist {
    struct cv_typerec tr;
    uint_16 argcount;

};

struct cv_typerec_fieldlist {
    struct cv_typerec tr;
};

struct cv_typerec_bitfield {
    struct cv_typerec tr;

    uint_8 length;
    uint_8 position;
    cv_typeref type;





};

struct cv_typerec_member {
    uint_16 leaf;

    cv_typeref type;
    struct cv_attribute attribute;




    uint_16 offset;

};

enum cv4_symbol_types {
    CV4_S_REGISTER = 0x0002,
    CV4_S_CONSTANT = 0x0003,
    CV4_S_UDT = 0x0004,

    CV4_S_BPREL32 = 0x0200,
    CV4_S_LDATA32 = 0x0201,
    CV4_S_GDATA32 = 0x0202,

    CV4_S_LPROC32 = 0x0204,
    CV4_S_GPROC32 = 0x0205,

    CV4_S_REGREL32 = 0x020C,
    CV4_S_LTHREAD32 = 0x020D,
    CV4_S_GTHREAD32 = 0x020E,
};





enum cv5_symbol_types {
    CV5_S_REGISTER = 0x1001,
    CV5_S_CONSTANT = 0x1002,
    CV5_S_UDT = 0x1003,

    CV5_S_MANYREG = 0x1005,
    CV5_S_BPREL32 = 0x1006,
    CV5_S_LDATA32 = 0x1007,
    CV5_S_GDATA32 = 0x1008,

    CV5_S_LPROC32 = 0x100A,
    CV5_S_GPROC32 = 0x100B,
    CV5_S_REGREL32 = 0x100D,
    CV5_S_LTHREAD32 = 0x100E,
    CV5_S_GTHREAD32 = 0x100F,
    CV5_S_COMPILE = 0x1013,
};





enum cv8_symbol_types {
    CV8_S_OBJNAME = 0x1101,
    CV8_S_BLOCK32 = 0x1103,
    CV8_S_LABEL32 = 0x1105,
    CV8_S_CONSTANT = 0x1107,
    CV8_S_UDT = 0x1108,
    CV8_S_BPREL32 = 0x110B,
    CV8_S_LDATA32 = 0x110C,
    CV8_S_GDATA32 = 0x110D,
    CV8_S_LPROC32 = 0x110F,
    CV8_S_GPROC32 = 0x1110,
    CV8_S_REGREL32 = 0x1111,
    CV8_S_LTHREAD32 = 0x1112,
    CV8_S_GTHREAD32 = 0x1113,
};


enum cv_symbol_types {
    S_COMPILE = 0x0001,

    S_REGISTER = CV4_S_REGISTER,
    S_CONSTANT = CV4_S_CONSTANT,
    S_UDT = CV4_S_UDT,






    S_ENDBLK = 0x0006,


    S_OBJNAME = 0x0009,



    S_BPREL16 = 0x0100,
    S_LDATA16 = 0x0101,
    S_GDATA16 = 0x0102,

    S_LPROC16 = 0x0104,
    S_GPROC16 = 0x0105,

    S_LABEL16 = 0x0109,



    S_BPREL32 = CV4_S_BPREL32,
    S_LDATA32 = CV4_S_LDATA32,
    S_GDATA32 = CV4_S_GDATA32,

    S_LPROC32 = CV4_S_LPROC32,
    S_GPROC32 = CV4_S_GPROC32,
    S_REGREL32 = CV4_S_REGREL32,
    S_LTHREAD32 = CV4_S_LTHREAD32,
    S_GTHREAD32 = CV4_S_GTHREAD32,
# 491 "./dbgcv.h"
    S_LABEL32 = 0x0209,
};

struct cv_symrec {
    uint_16 size;
    uint_16 type;

};

struct cv_symrec_compile {
    struct cv_symrec sr;
    uint_8 machine;
    uint_8 Language;
    union {
        uint_16 flags;
        struct {
            uint_8 PCodePresent:1,
             FloatPrecision:2,
             Floatpackage:2,
             AmbientData:3;
            uint_8 AmbientCode:3,
             Mode32:1,
             Reserved:4;
        };
    };

};

enum cv_machines {
    CV_MACH_8080 = 0,
    CV_MACH_8086 = 1,
    CV_MACH_80286 = 2,
    CV_MACH_80386 = 3,
    CV_MACH_80486 = 4,
    CV_MACH_PENTIUM = 5,
    CV_MACH_P2 = 6,
    CV_MACH_P3 = 7,
    CV_MACH_AMD64 = 0xD0,
};

enum cv_languages {
    CV_LANG_C = 0,
    CV_LANG_CPP = 1,
    CV_LANG_FORTRAN = 2,
    CV_LANG_MASM = 3,
    CV_LANG_PASCAL = 4,
    CV_LANG_BASIC = 5,
    CV_LANG_COBOL = 6
};

enum cv_ambient_model {
    CV_AMB_NEAR = 0,
    CV_AMB_FAR = 1,
    CV_AMB_HUGE = 2,
};

struct cv_symrec_register {
    struct cv_symrec sr;
    cv_typeref type;
    uint_16 registr;

};

struct cv_symrec_constant {
    struct cv_symrec sr;
    cv_typeref type;
    uint_16 value;

};

struct cv_symrec_udt {
    struct cv_symrec sr;
    cv_typeref type;

};

struct cv_symrec_endblk {
    struct cv_symrec sr;
};

struct cv_symrec_objname {
    struct cv_symrec sr;
    uint_32 Signature;

};

struct cv_symrec_bprel16 {
    struct cv_symrec sr;
    int_16 offset;
    cv_typeref type;

};

struct cv_symrec_ldata16 {
    struct cv_symrec sr;
    int_16 offset;
    uint_16 segment;
    cv_typeref type;

};

struct cv_symrec_lproc16 {
    struct cv_symrec sr;
    uint_32 pParent;
    uint_32 pEnd;
    uint_32 pNext;
    uint_16 proc_length;
    uint_16 debug_start;
    uint_16 debug_end;
    uint_16 offset;
    uint_16 segment;
    cv_typeref proctype;
    uint_8 flags;

};

enum cv_proc_flags {
    CV_PROCF_FPO = 0x01,
    CV_PROCF_INTERRUPT = 0x02,
    CV_PROCF_FAR = 0x04,
    CV_PROCF_NEVER = 0x08,
};

struct cv_symrec_label16 {
    struct cv_symrec sr;
    int_16 offset;
    uint_16 segment;
    uint_8 flags;

};

struct cv_symrec_bprel32 {
    struct cv_symrec sr;
    int_32 offset;
    cv_typeref type;

};

struct cv_symrec_ldata32 {
    struct cv_symrec sr;

    int_32 offset;
    uint_16 segment;
    cv_typeref type;






};

struct cv_symrec_lproc32 {
    struct cv_symrec sr;
    uint_32 pParent;
    uint_32 pEnd;
    uint_32 pNext;
    uint_32 proc_length;
    uint_32 debug_start;
    uint_32 debug_end;

    uint_32 offset;
    uint_16 segment;
    cv_typeref proctype;





    uint_8 flags;

};

enum cv_registers {
    CV_REG_START32 = 17,
    CV_REG_ESP = CV_REG_START32+4,
    CV_REG_EBP = CV_REG_START32+5,

    CV_REG_AMD64_START32 = 360,
    CV_REG_AMD64_START64 = 328,
    CV_REG_RSP = CV_REG_AMD64_START64+7,
    CV_REG_RBP = CV_REG_AMD64_START64+6,

};

struct cv_symrec_regrel32 {
    struct cv_symrec sr;
    int_32 offset;

    uint_16 reg;
    cv_typeref type;





};

struct cv_symrec_label32 {
    struct cv_symrec sr;
    int_32 offset;
    uint_16 segment;
    uint_8 flags;

};
# 723 "./dbgcv.h"
#pragma pack(pop)
# 15 "main.c" 2
# 1 "./dbgdw.h" 1
# 12 "./dbgdw.h"
enum dwarf_tag {

    DW_TAG_array_type = 0x01,
    DW_TAG_class_type = 0x02,
    DW_TAG_entry_point = 0x03,
    DW_TAG_enumeration_type = 0x04,
    DW_TAG_formal_parameter = 0x05,

    DW_TAG_imported_declaration = 0x08,

    DW_TAG_label = 0x0a,
    DW_TAG_lexical_block = 0x0b,

    DW_TAG_member = 0x0d,

    DW_TAG_pointer_type = 0x0f,
    DW_TAG_reference_type = 0x10,
    DW_TAG_compile_unit = 0x11,
    DW_TAG_string_type = 0x12,
    DW_TAG_structure_type = 0x13,

    DW_TAG_subroutine_type = 0x15,
    DW_TAG_typedef,
    DW_TAG_union_type,
    DW_TAG_unspecified_parameters,
    DW_TAG_variant,
    DW_TAG_common_block,
    DW_TAG_common_inclusion,
    DW_TAG_inheritance,
    DW_TAG_inlined_subroutine,
    DW_TAG_module,
    DW_TAG_ptr_to_member_type,
    DW_TAG_set_type,
    DW_TAG_subrange_type,
    DW_TAG_with_stmt,
    DW_TAG_access_declaration,
    DW_TAG_base_type,
    DW_TAG_catch_block,
    DW_TAG_const_type,
    DW_TAG_constant,
    DW_TAG_enumerator,
    DW_TAG_file_type,
    DW_TAG_friend,
    DW_TAG_namelist,
    DW_TAG_namelist_item,
    DW_TAG_packed_type,
    DW_TAG_subprogram,
    DW_TAG_template_type_parameter,
    DW_TAG_template_value_parameter,
    DW_TAG_thrown_type,
    DW_TAG_try_block,
    DW_TAG_variant_part,
    DW_TAG_variable,
    DW_TAG_volatile_type,
    DW_TAG_dwarf_procedure,
    DW_TAG_restrict_type,
    DW_TAG_interface_type,
    DW_TAG_namespace,
    DW_TAG_imported_module,
    DW_TAG_unspecified_type,
    DW_TAG_partial_unit,
    DW_TAG_imported_unit,
    DW_TAG_condition,
    DW_TAG_shared_type,
    DW_TAG_type_unit,
    DW_TAG_rvalue_reference_type,
    DW_TAG_template_alias,

    DW_TAG_lo_user = 0x4080,
    DW_TAG_hi_user = 0xffff,
};

enum dwarf_child_determination {
    DW_CHILDREN_no = 0x00,
    DW_CHILDREN_yes = 0x01,
};

enum dwarf_attribute {
    DW_AT_sibling = 0x01,
    DW_AT_location = 0x02,
    DW_AT_name = 0x03,
    DW_AT_ordering = 0x09,
    DW_AT_byte_size = 0x0b,
    DW_AT_bit_offset = 0x0c,
    DW_AT_bit_size = 0x0d,
    DW_AT_stmt_list = 0x10,
    DW_AT_low_pc = 0x11,
    DW_AT_high_pc = 0x12,
    DW_AT_language = 0x13,
    DW_AT_discr = 0x15,
    DW_AT_discr_value = 0x16,
    DW_AT_visibility = 0x17,
    DW_AT_import = 0x18,
    DW_AT_string_length = 0x19,
    DW_AT_common_reference = 0x1a,
    DW_AT_comp_dir = 0x1b,
    DW_AT_const_value = 0x1c,
    DW_AT_containing_type = 0x1d,
    DW_AT_default_value = 0x1e,
    DW_AT_inline = 0x20,
    DW_AT_is_optional = 0x21,
    DW_AT_lower_bound = 0x22,
    DW_AT_producer = 0x25,
    DW_AT_prototyped = 0x27,
    DW_AT_return_addr = 0x2a,
    DW_AT_start_scope = 0x2c,
    DW_AT_bit_stride = 0x2e,
    DW_AT_upper_bound = 0x2f,
    DW_AT_abstract_origin = 0x31,
    DW_AT_accessibility = 0x32,
    DW_AT_address_class = 0x33,
    DW_AT_artificial = 0x34,
    DW_AT_base_types = 0x35,
    DW_AT_calling_convention= 0x36,
    DW_AT_count = 0x37,
    DW_AT_data_member_location = 0x38,
    DW_AT_decl_column = 0x39,
    DW_AT_decl_file = 0x3a,
    DW_AT_decl_line = 0x3b,
    DW_AT_declaration = 0x3c,
    DW_AT_discr_list = 0x3d,
    DW_AT_encoding = 0x3e,
    DW_AT_external = 0x3f,
    DW_AT_frame_base = 0x40,
    DW_AT_friend = 0x41,
    DW_AT_identifier_case = 0x42,
    DW_AT_macro_info = 0x43,
    DW_AT_namelist_item = 0x44,
    DW_AT_priority = 0x45,
    DW_AT_segment = 0x46,
    DW_AT_specification = 0x47,
    DW_AT_static_link = 0x48,
    DW_AT_type = 0x49,
    DW_AT_use_location = 0x4a,
    DW_AT_variable_parameter = 0x4b,
    DW_AT_virtuality = 0x4c,
    DW_AT_vtable_elem_location = 0x4d,
    DW_AT_allocated = 0x4e,
    DW_AT_associated = 0x4f,
    DW_AT_data_location = 0x50,
    DW_AT_byte_stride = 0x51,
    DW_AT_entry_pc = 0x52,
    DW_AT_use_UTF8 = 0x53,
    DW_AT_extension = 0x54,
    DW_AT_ranges = 0x55,
    DW_AT_trampoline = 0x56,
    DW_AT_call_column = 0x57,
    DW_AT_call_file = 0x58,
    DW_AT_call_line = 0x59,
    DW_AT_description = 0x5a,
    DW_AT_binary_scale = 0x5b,
    DW_AT_decimal_scale = 0x5c,
    DW_AT_small = 0x5d,
    DW_AT_decimal_sign = 0x5e,
    DW_AT_digit_count = 0x5f,
    DW_AT_picture_string = 0x60,
    DW_AT_mutable = 0x61,
    DW_AT_threads_scaled = 0x62,
    DW_AT_explicit = 0x63,
    DW_AT_object_pointer = 0x64,
    DW_AT_endianity = 0x65,
    DW_AT_elemental = 0x66,
    DW_AT_pure = 0x67,
    DW_AT_recursive = 0x68,
    DW_AT_signature = 0x69,
    DW_AT_main_subprogram = 0x6a,
    DW_AT_data_bit_offset = 0x6b,
    DW_AT_const_expr = 0x6c,
    DW_AT_enum_class = 0x6d,
    DW_AT_linkage_name = 0x6e,

    DW_AT_lo_user = 0x2000,
    DW_AT_hi_user = 0x3fff,
};

enum dwarf_information_format {
    DW_FORM_addr = 0x01,
    DW_FORM_block2 = 0x03,
    DW_FORM_block4 = 0x04,
    DW_FORM_data2 = 0x05,
    DW_FORM_data4 = 0x06,
    DW_FORM_data8 = 0x07,
    DW_FORM_string = 0x08,
    DW_FORM_block = 0x09,
    DW_FORM_block1 = 0x0a,
    DW_FORM_data1 = 0x0b,
    DW_FORM_flag = 0x0c,
    DW_FORM_sdata = 0x0d,
    DW_FORM_strp = 0x0e,
    DW_FORM_udata = 0x0f,
    DW_FORM_ref_addr = 0x10,
    DW_FORM_ref1 = 0x11,
    DW_FORM_ref2 = 0x12,
    DW_FORM_ref4 = 0x13,
    DW_FORM_ref8 = 0x14,
    DW_FORM_ref_udata = 0x15,
    DW_FORM_indirect = 0x16,
    DW_FORM_sec_offset = 0x17,
    DW_FORM_excploc = 0x18,
    DW_FORM_flag_present = 0x19,
    DW_FORM_ref_sig8 = 0x1a,
};


enum dwarf_op {
    DW_OP_addr = 0x03,
    DW_OP_deref = 0x06,
    DW_OP_const1u = 0x08,
    DW_OP_const1s = 0x09,
    DW_OP_const2u = 0x0a,
    DW_OP_const2s = 0x0b,
    DW_OP_const4u = 0x0c,
    DW_OP_const4s = 0x0d,
    DW_OP_const8u = 0x0e,
    DW_OP_const8s = 0x0f,
    DW_OP_constu = 0x10,
    DW_OP_consts = 0x11,
    DW_OP_dup = 0x12,
    DW_OP_drop = 0x13,
    DW_OP_over = 0x14,
    DW_OP_pick = 0x15,
    DW_OP_swap = 0x16,
    DW_OP_rot = 0x17,
    DW_OP_xderef = 0x18,
    DW_OP_abs = 0x19,
    DW_OP_and = 0x1a,
    DW_OP_div = 0x1b,
    DW_OP_minus = 0x1c,
    DW_OP_mod = 0x1d,
    DW_OP_mul = 0x1e,
    DW_OP_neg = 0x1f,
    DW_OP_not = 0x20,
    DW_OP_or = 0x21,
    DW_OP_plus = 0x22,
    DW_OP_plus_uconst = 0x23,
    DW_OP_shl = 0x24,
    DW_OP_shr = 0x25,
    DW_OP_shra = 0x26,
    DW_OP_xor = 0x27,
    DW_OP_skip = 0x2f,
    DW_OP_bra = 0x28,
    DW_OP_eq = 0x29,
    DW_OP_ge = 0x2a,
    DW_OP_gt = 0x2b,
    DW_OP_le = 0x2c,
    DW_OP_lt = 0x2d,
    DW_OP_ne = 0x2e,
    DW_OP_lit0 = 0x30,
    DW_OP_lit1 = 0x31,
    DW_OP_lit2 = 0x32,
    DW_OP_lit3 = 0x33,
    DW_OP_lit4 = 0x34,
    DW_OP_lit5 = 0x35,
    DW_OP_lit6 = 0x36,
    DW_OP_lit7 = 0x37,
    DW_OP_lit8 = 0x38,
    DW_OP_lit9 = 0x39,
    DW_OP_lit10 = 0x3a,
    DW_OP_lit11 = 0x3b,
    DW_OP_lit12 = 0x3c,
    DW_OP_lit13 = 0x3d,
    DW_OP_lit14 = 0x3e,
    DW_OP_lit15 = 0x3f,
    DW_OP_lit16 = 0x40,
    DW_OP_lit17 = 0x41,
    DW_OP_lit18 = 0x42,
    DW_OP_lit19 = 0x43,
    DW_OP_lit20 = 0x44,
    DW_OP_lit21 = 0x45,
    DW_OP_lit22 = 0x46,
    DW_OP_lit23 = 0x47,
    DW_OP_lit24 = 0x48,
    DW_OP_lit25 = 0x49,
    DW_OP_lit26 = 0x4a,
    DW_OP_lit27 = 0x4b,
    DW_OP_lit28 = 0x4c,
    DW_OP_lit29 = 0x4d,
    DW_OP_lit30 = 0x4e,
    DW_OP_lit31 = 0x4f,
    DW_OP_reg0 = 0x50,
    DW_OP_reg1 = 0x51,
    DW_OP_reg2 = 0x52,
    DW_OP_reg3 = 0x53,
    DW_OP_reg4 = 0x54,
    DW_OP_reg5 = 0x55,
    DW_OP_reg6 = 0x56,
    DW_OP_reg7 = 0x57,
    DW_OP_reg8 = 0x58,
    DW_OP_reg9 = 0x59,
    DW_OP_reg10 = 0x5a,
    DW_OP_reg11 = 0x5b,
    DW_OP_reg12 = 0x5c,
    DW_OP_reg13 = 0x5d,
    DW_OP_reg14 = 0x5e,
    DW_OP_reg15 = 0x5f,
    DW_OP_reg16 = 0x60,
    DW_OP_reg17 = 0x61,
    DW_OP_reg18 = 0x62,
    DW_OP_reg19 = 0x63,
    DW_OP_reg20 = 0x64,
    DW_OP_reg21 = 0x65,
    DW_OP_reg22 = 0x66,
    DW_OP_reg23 = 0x67,
    DW_OP_reg24 = 0x68,
    DW_OP_reg25 = 0x69,
    DW_OP_reg26 = 0x6a,
    DW_OP_reg27 = 0x6b,
    DW_OP_reg28 = 0x6c,
    DW_OP_reg29 = 0x6d,
    DW_OP_reg30 = 0x6e,
    DW_OP_reg31 = 0x6f,
    DW_OP_breg0 = 0x70,
    DW_OP_breg1 = 0x71,
    DW_OP_breg2 = 0x72,
    DW_OP_breg3 = 0x73,
    DW_OP_breg4 = 0x74,
    DW_OP_breg5 = 0x75,
    DW_OP_breg6 = 0x76,
    DW_OP_breg7 = 0x77,
    DW_OP_breg8 = 0x78,
    DW_OP_breg9 = 0x79,
    DW_OP_breg10 = 0x7a,
    DW_OP_breg11 = 0x7b,
    DW_OP_breg12 = 0x7c,
    DW_OP_breg13 = 0x7d,
    DW_OP_breg14 = 0x7e,
    DW_OP_breg15 = 0x7f,
    DW_OP_breg16 = 0x80,
    DW_OP_breg17 = 0x81,
    DW_OP_breg18 = 0x82,
    DW_OP_breg19 = 0x83,
    DW_OP_breg20 = 0x84,
    DW_OP_breg21 = 0x85,
    DW_OP_breg22 = 0x86,
    DW_OP_breg23 = 0x87,
    DW_OP_breg24 = 0x88,
    DW_OP_breg25 = 0x89,
    DW_OP_breg26 = 0x8a,
    DW_OP_breg27 = 0x8b,
    DW_OP_breg28 = 0x8c,
    DW_OP_breg29 = 0x8d,
    DW_OP_breg30 = 0x8e,
    DW_OP_breg31 = 0x8f,
    DW_OP_regx = 0x90,
    DW_OP_fbreg = 0x91,
    DW_OP_bregx = 0x92,
    DW_OP_piece = 0x93,
    DW_OP_deref_size = 0x94,
    DW_OP_xderef_size = 0x95,
    DW_OP_nop = 0x96,
    DW_OP_push_object_address = 0x97,
    DW_OP_call2 = 0x98,
    DW_OP_call4 = 0x99,
    DW_OP_call_ref = 0x9a,
    DW_OP_form_tls_address = 0x9b,
    DW_OP_call_frame_cfa = 0x9c,
    DW_OP_bit_piece = 0x9d,
    DW_OP_implicit_value = 0x9e,
    DW_OP_stack_value = 0x9f,

    DW_OP_lo_user = 0xe0,
    DW_OP_hi_user = 0xff,
};


enum dwarf_base_type_attribute_encoding {
    DW_ATE_address = 0x01,
    DW_ATE_boolean = 0x02,
    DW_ATE_complex_float = 0x03,
    DW_ATE_float = 0x04,
    DW_ATE_signed = 0x05,
    DW_ATE_signed_char = 0x06,
    DW_ATE_unsigned = 0x07,
    DW_ATE_unsigned_char = 0x08,
    DW_ATE_imaginary_float = 0x09,
    DW_ATE_packed_decimal = 0x0a,
    DW_ATE_numeric_string = 0x0b,
    DW_ATE_edited = 0x0c,
    DW_ATE_signed_fixed = 0x0d,
    DW_ATE_unsigned_fixed = 0x0e,
    DW_ATE_decimal_float = 0x0f,
    DW_ATE_UTF = 0x10,

    DW_ATE_lo_user = 0x80,
    DW_ATE_hi_user = 0xff,
};


enum dwarf_decimal_sign {
    DW_DS_unsigned = 0x01,
    DW_DS_leading_overpunch = 0x02,
    DW_DS_trailing_overpunch = 0x03,
    DW_DS_leading_separate = 0x04,
    DW_DS_trailing_separate = 0x05,
};


enum dwarf_endianity {
    DW_END_default = 0x00,
    DW_END_big = 0x01,
    DW_END_little = 0x02,

    DW_END_lo_user = 0x40,
    DW_END_hi_user = 0xff,
};


enum dwarf_accessibility {
    DW_ACCESS_public = 0x01,
    DW_ACCESS_protected = 0x02,
    DW_ACCESS_private = 0x03,
};


enum dwarf_visibility {
    DW_VIS_local = 0x01,
    DW_VIS_exported = 0x02,
    DW_VIS_qualified = 0x03,
};


enum dwarf_virtuality {
    DW_VIRTUALITY_none = 0x00,
    DW_VIRTUALITY_virtual = 0x01,
    DW_VIRTUALITY_pure_virtual = 0x02,
};


enum dwarf_language {
    DW_LANG_C89 = 0x0001,
    DW_LANG_C = 0x0002,
    DW_LANG_Ada83 = 0x0003,
    DW_LANG_C_plus_plus = 0x0004,
    DW_LANG_Cobol74 = 0x0005,
    DW_LANG_Cobol85 = 0x0006,
    DW_LANG_Fortran77 = 0x0007,
    DW_LANG_Fortran90 = 0x0008,
    DW_LANG_Pascal83 = 0x0009,
    DW_LANG_Modula2 = 0x000a,
    DW_LANG_Java = 0x000b,
    DW_LANG_C99 = 0x000c,
    DW_LANG_Ada95 = 0x000d,
    DW_LANG_Fortran95 = 0x000e,
    DW_LANG_PLI = 0x000f,
    DW_LANG_ObjC = 0x0010,
    DW_LANG_ObjC_plus_plus = 0x0011,
    DW_LANG_UPC = 0x0012,
    DW_LANG_D = 0x0013,
    DW_LANG_Phyton = 0x0014,

    DW_LANG_lo_user = 0x8000,
    DW_LANG_hi_user = 0xffff,
};


enum dwarf_identifier_case {
    DW_ID_case_sensitive = 0x00,
    DW_ID_up_case = 0x01,
    DW_ID_down_case = 0x02,
    DW_ID_case_insensitive = 0x03,
};


enum dwarf_calling_convention {
    DW_CC_normal = 0x01,
    DW_CC_program = 0x02,
    DW_CC_nocall = 0x03,

    DW_CC_lo_user = 0x40,
    DW_CC_hi_user = 0xff,
};


enum dwarf_inline {
    DW_INL_not_inlined = 0x00,
    DW_INL_inlined = 0x01,
    DW_INL_declared_not_inlined = 0x02,
    DW_INL_declared_inlined = 0x03,
};


enum dwarf_array_ordering {
    DW_ORD_row_major = 0x00,
    DW_ORD_col_major = 0x01,
};


enum dwarf_discriminant {
    DW_DSC_label = 0x00,
    DW_DSC_range = 0x01,
};


enum dwarf_line_number_standard {
    DW_LNS_copy = 0x01,
    DW_LNS_advance_pc = 0x02,
    DW_LNS_advance_line = 0x03,
    DW_LNS_set_file = 0x04,
    DW_LNS_set_column = 0x05,
    DW_LNS_negate_stmt = 0x06,
    DW_LNS_set_basic_block = 0x07,
    DW_LNS_const_add_pc = 0x08,
    DW_LNS_fixed_advance_pc = 0x09,
    DW_LNS_set_prologue_end = 0x0a,
    DW_LNS_set_epilogue_begin = 0x0b,
    DW_LNS_set_isa = 0x0c,
};


enum dwarf_line_number_extended {
    DW_LNE_end_sequence = 0x01,
    DW_LNE_set_address = 0x02,
    DW_LNE_define_file = 0x03,
    DW_LNE_set_discriminator = 0x04,
    DW_LNE_lo_user = 0x80,
    DW_LNE_hi_user = 0xff,
};

enum dwarf_macinfo_type {
    DW_MACINFO_define = 0x01,
    DW_MACINFO_undef = 0x02,
    DW_MACINFO_start_file = 0x03,
    DW_MACINFO_end_file = 0x04,
    DW_MACINFO_vendor_ext = 0xff,
};

enum dwarf_call_frame {
    DW_CFA_advance_loc = 0x01,
    DW_CFA_offset = 0x02,
    DW_CFA_restore = 0x03,
    DW_CFA_nop = 0x00,
    DW_CFA_set_loc = 0x01,
    DW_CFA_advance_loc1 = 0x02,
    DW_CFA_advance_loc2 = 0x03,
    DW_CFA_advance_loc4 = 0x04,
    DW_CFA_offset_extended = 0x05,
    DW_CFA_restore_extended = 0x06,
    DW_CFA_undefined = 0x07,
    DW_CFA_same_value = 0x08,
    DW_CFA_register = 0x09,
    DW_CFA_remember_state = 0x0a,
    DW_CFA_restore_state = 0x0b,
    DW_CFA_def_cfa = 0x0c,
    DW_CFA_def_cfa_register = 0x0d,
    DW_CFA_def_cfa_offset = 0x0e,
    DW_CFA_def_cfa_expression = 0x0f,
    DW_CFA_expression = 0x10,
    DW_CFA_offset_extended_sf = 0x11,
    DW_CFA_def_cfa_sf = 0x12,
    DW_CFA_def_cfa_offset_sf = 0x13,
    DW_CFA_val_offset = 0x14,
    DW_CFA_val_offset_sf = 0x15,
    DW_CFA_val_expression = 0x16,
    DW_CFA_lo_user = 0x1c,
    DW_CFA_hi_user = 0x3f,
};
# 578 "./dbgdw.h"
struct dwarf_compilation_unit_header32 {
    uint_32 unit_length;
    uint_16 version;
    uint_32 debug_abbrev_offset;
    uint_8 address_size;
};



struct dwarf_type_unit_header32 {
    uint_32 unit_length;
    uint_16 version;
    uint_32 debug_abbrev_offset;
    uint_8 address_size;
    uint_64 type_signature;
    uint_32 type_offset;
};
# 16 "main.c" 2
# 1 "./directve.h" 1
# 24 "./directve.h"
res(DOT_8086, .8086, 0, DRT_CPU, 0, P_86, P_86 )
res(DOT_186, .186, 0, DRT_CPU, 0, P_86, P_186 )
res(DOT_286, .286, 0, DRT_CPU, 0, P_86, P_286 )
res(DOT_286C, .286c, 0, DRT_CPU, 0, P_86, P_286 )
res(DOT_286P, .286p, 0, DRT_CPU, 0, P_86, P_286p )
res(DOT_386, .386, 0, DRT_CPU, 0, P_86, P_386 )
res(DOT_386C, .386c, 0, DRT_CPU, 0, P_86, P_386 )
res(DOT_386P, .386p, 0, DRT_CPU, 0, P_86, P_386p )
res(DOT_486, .486, 0, DRT_CPU, 0, P_86, P_486 )
res(DOT_486P, .486p, 0, DRT_CPU, 0, P_86, P_486p )
res(DOT_586, .586, 0, DRT_CPU, 0, P_86, P_586 )
res(DOT_586P, .586p, 0, DRT_CPU, 0, P_86, P_586p )
res(DOT_686, .686, 0, DRT_CPU, 0, P_86, P_686 )
res(DOT_686P, .686p, 0, DRT_CPU, 0, P_86, P_686p )
res(DOT_K3D, .k3d, 0, DRT_CPU, 0, P_586, P_K3D|P_MMX )
res(DOT_MMX, .mmx, 0, DRT_CPU, 0, P_586, P_MMX )
res(DOT_XMM, .xmm, 0, DRT_CPU, 0, P_686, P_MMX|P_SSEALL )

res(DOT_X64, .x64, 0, DRT_CPU, 0, P_86, P_64 )
res(DOT_X64P, .x64p, 0, DRT_CPU, 0, P_86, P_64p )


res(DOT_8087, .8087, 0, DRT_CPU, 0, P_86, P_87 )
res(DOT_287, .287, 0, DRT_CPU, 0, P_86, P_287 )
res(DOT_387, .387, 0, DRT_CPU, 0, P_86, P_387 )
res(DOT_NO87, .no87, 0, DRT_CPU, 0, P_86, P_NO87 )







res(DOT_CREF, .cref, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_LFCOND, .lfcond, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_LIST, .list, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_LISTALL, .listall, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_LISTIF, .listif, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_NOCREF, .nocref, DF_NOEXPAND, DRT_LISTING, 0, P_86, 0)
res(DOT_NOLIST, .nolist, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_NOLISTIF, .nolistif, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_SFCOND, .sfcond, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_TFCOND, .tfcond, 0, DRT_LISTING, 0, P_86, 0)
res(DOT_XCREF, .xcref, DF_NOEXPAND, DRT_LISTING, 0, P_86, 0)
res(DOT_XLIST, .xlist, 0, DRT_LISTING, 0, P_86, 0)
res(PAGE, page, 0, DRT_LISTING, 0, P_86, 0)
res(SUBTITLE, subtitle, 0, DRT_LISTING, 0, P_86, 0)
res(SUBTTL, subttl, 0, DRT_LISTING, 0, P_86, 0)
res(TITLE, title, 0, DRT_LISTING, 0, P_86, 0)






res(DOT_LISTMACRO, .listmacro, 0, DRT_LISTMAC, 0, P_86, LM_LISTMACRO)
res(DOT_LISTMACROALL, .listmacroall, 0, DRT_LISTMAC, 0, P_86, LM_LISTMACROALL)
res(DOT_NOLISTMACRO, .nolistmacro, 0, DRT_LISTMAC, 0, P_86, LM_NOLISTMACRO)
res(DOT_XALL, .xall, 0, DRT_LISTMAC, 0, P_86, LM_LISTMACRO)
res(DOT_LALL, .lall, 0, DRT_LISTMAC, 0, P_86, LM_LISTMACROALL)
res(DOT_SALL, .sall, 0, DRT_LISTMAC, 0, P_86, LM_NOLISTMACRO)


res(DOT_ALPHA, .alpha, 0, DRT_SEGORDER, 0, P_86, SEGORDER_ALPHA )
res(DOT_DOSSEG, .dosseg, 0, DRT_SEGORDER, 0, P_86, SEGORDER_DOSSEG)
res(DOT_SEQ, .seq, 0, DRT_SEGORDER, 0, P_86, SEGORDER_SEQ )
res(DOSSEG, dosseg, 0, DRT_SEGORDER, 0, P_86, SEGORDER_DOSSEG)


res(DOT_CODE, .code, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 0)
res(DOT_STACK, .stack, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 1)
res(DOT_DATA, .data, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 2)
res(DOT_DATA_UN, .data?, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 3)
res(DOT_FARDATA, .fardata, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 4)
res(DOT_FARDATA_UN, .fardata?, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 5)
res(DOT_CONST, .const, DF_NOSTRUC|DF_PROC|DF_CGEN, DRT_SIMSEG, 0, P_86, 6)



res(DOT_IF, .if, DF_CGEN|DF_CEXPR|DF_NOSTRUC|DF_STORE|DF_PROC, DRT_HLLSTART, 0, P_86, 0)
res(DOT_REPEAT, .repeat, DF_CGEN|DF_NOSTRUC|DF_STORE|DF_PROC, DRT_HLLSTART, 0, P_86, 0)
res(DOT_WHILE, .while, DF_CGEN|DF_CEXPR|DF_NOSTRUC|DF_STORE|DF_PROC, DRT_HLLSTART, 0, P_86, 0)
res(DOT_BREAK, .break, DF_CGEN, DRT_HLLEXIT, 0, P_86, 0)
res(DOT_CONTINUE, .continue, DF_CGEN, DRT_HLLEXIT, 0, P_86, 0)
res(DOT_ELSE, .else, DF_CGEN, DRT_HLLEXIT, 0, P_86, 0)
res(DOT_ELSEIF, .elseif, DF_CGEN|DF_CEXPR, DRT_HLLEXIT, 0, P_86, 0)
res(DOT_ENDIF, .endif, DF_CGEN, DRT_HLLEND, 0, P_86, 0)
res(DOT_ENDW, .endw, DF_CGEN, DRT_HLLEND, 0, P_86, 0)
res(DOT_UNTIL, .until, DF_CGEN|DF_CEXPR, DRT_HLLEND, 0, P_86, 0)
res(DOT_UNTILCXZ, .untilcxz, DF_CGEN|DF_CEXPR, DRT_HLLEND, 0, P_86, 0)

res(DOT_EXIT, .exit, DF_CGEN|DF_STORE, DRT_STARTEXIT, 0, P_86, 0)
res(DOT_STARTUP, .startup, DF_CGEN|DF_STORE, DRT_STARTEXIT, 0, P_86, 0)

res(DOT_MODEL, .model, DF_CGEN, DRT_MODEL, 0, P_86, 0)
res(DOT_RADIX, .radix, 0, DRT_RADIX, 0, P_86, 0)




res(DOT_SAFESEH, .safeseh, 0, DRT_SAFESEH, RWF_IA32, P_386, 0)




res(DOT_ERR, .err, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, 0)
res(DOT_ERR1, .err1, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_PASS1 )
res(DOT_ERR2, .err2, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_PASS2 )
res(DOT_ERRE, .erre, DF_STORE, DRT_ERRDIR, 0, P_86, CC_NUMARG)
res(DOT_ERRNZ, .errnz, DF_STORE, DRT_ERRDIR, 0, P_86, CC_NUMARG)
res(DOT_ERRDIF, .errdif, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_LITARG)
res(DOT_ERRDIFI, .errdifi, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_LITARG)
res(DOT_ERRIDN, .erridn, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_LITARG)
res(DOT_ERRIDNI, .erridni, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_LITARG)
res(DOT_ERRB, .errb, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_BLKARG)
res(DOT_ERRNB, .errnb, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_BLKARG)
res(DOT_ERRDEF, .errdef, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_SYMARG)
res(DOT_ERRNDEF, .errndef, DF_STRPARM|DF_STORE, DRT_ERRDIR, 0, P_86, CC_SYMARG)




res(COMMENT, comment, 0, DRT_CONDDIR, 0, P_86, 0)
res(IF, if, 0, DRT_CONDDIR, 0, P_86, CC_NUMARG)
res(IFE, ife, 0, DRT_CONDDIR, 0, P_86, CC_NUMARG)
res(IF1, if1, 0, DRT_CONDDIR, 0, P_86, CC_PASS1 )
res(IF2, if2, 0, DRT_CONDDIR, 0, P_86, CC_PASS2 )
res(IFDIF, ifdif, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(IFDIFI, ifdifi, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(IFIDN, ifidn, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(IFIDNI, ifidni, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(IFB, ifb, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_BLKARG)
res(IFNB, ifnb, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_BLKARG)
res(IFDEF, ifdef, DF_NOEXPAND, DRT_CONDDIR, 0, P_86, CC_SYMARG)
res(IFNDEF, ifndef, DF_NOEXPAND, DRT_CONDDIR, 0, P_86, CC_SYMARG)
res(ELSE, else, 0, DRT_CONDDIR, 0, P_86, 0)
res(ELSEIF, elseif, 0, DRT_CONDDIR, 0, P_86, CC_NUMARG)
res(ELSEIFE, elseife, 0, DRT_CONDDIR, 0, P_86, CC_NUMARG)
res(ELSEIF1, elseif1, 0, DRT_CONDDIR, 0, P_86, CC_PASS1 )
res(ELSEIF2, elseif2, 0, DRT_CONDDIR, 0, P_86, CC_PASS2 )
res(ELSEIFDIF, elseifdif, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(ELSEIFDIFI, elseifdifi, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(ELSEIFIDN, elseifidn, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(ELSEIFIDNI, elseifidni, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_LITARG)
res(ELSEIFB, elseifb, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_BLKARG)
res(ELSEIFNB, elseifnb, DF_STRPARM, DRT_CONDDIR, 0, P_86, CC_BLKARG)
res(ELSEIFDEF, elseifdef, DF_NOEXPAND, DRT_CONDDIR, 0, P_86, CC_SYMARG)
res(ELSEIFNDEF, elseifndef, DF_NOEXPAND, DRT_CONDDIR, 0, P_86, CC_SYMARG)
res(ENDIF, endif, 0, DRT_CONDDIR, 0, P_86, 0)



res(FOR, for, DF_NOEXPAND, DRT_LOOPDIR, 0, P_86, 0)
res(FORC, forc, DF_NOEXPAND, DRT_LOOPDIR, 0, P_86, 0)
res(IRP, irp, 0, DRT_LOOPDIR, 0, P_86, 0)
res(IRPC, irpc, 0, DRT_LOOPDIR, 0, P_86, 0)
res(REPEAT, repeat, 0, DRT_LOOPDIR, 0, P_86, 0)
res(REPT, rept, 0, DRT_LOOPDIR, 0, P_86, 0)
res(WHILE, while, 0, DRT_LOOPDIR, 0, P_86, 0)



res(MACRO, macro, DF_LABEL, DRT_MACRO, 0, P_86, 0)
res(EXITM, exitm, DF_STRPARM, DRT_MACINT, 0, P_86, 0)
res(ENDM, endm, 0, DRT_MACINT, 0, P_86, 0)
res(GOTO, goto, 0, DRT_MACINT, 0, P_86, 0)
res(PURGE, purge, 0, DRT_PURGE, 0, P_86, 0)
res(INCLUDE, include, DF_NOEXPAND|DF_NOCONCAT,DRT_INCLUDE,0, P_86, 0)
res(TEXTEQU, textequ, DF_STRPARM | DF_LABEL, DRT_CATSTR, 0, P_86, 0)
res(CATSTR, catstr, DF_STRPARM | DF_LABEL, DRT_CATSTR, 0, P_86, 0)
res(SUBSTR, substr, DF_STRPARM | DF_LABEL, DRT_SUBSTR, 0, P_86, 0)


res(INSTR, instr, DF_STRPARM | DF_LABEL, DRT_INSTR, 0, P_86, 0)
res(SIZESTR, sizestr, DF_STRPARM | DF_LABEL, DRT_SIZESTR, 0, P_86, 0)


res(DB, db, DF_LABEL, DRT_DATADIR, 0, P_86, T_BYTE )
res(DW, dw, DF_LABEL, DRT_DATADIR, 0, P_86, T_WORD )
res(DD, dd, DF_LABEL, DRT_DATADIR, 0, P_86, T_DWORD)
res(DF, df, DF_LABEL, DRT_DATADIR, 0, P_86, T_FWORD)
res(DQ, dq, DF_LABEL, DRT_DATADIR, 0, P_86, T_QWORD)
res(DT, dt, DF_LABEL, DRT_DATADIR, 0, P_86, T_TBYTE)


res(DOT_ALLOCSTACK, .allocstack, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_ENDPROLOG, .endprolog, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_PUSHFRAME, .pushframe, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_PUSHREG, .pushreg, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_SAVEREG, .savereg, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_SAVEXMM128, .savexmm128, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)
res(DOT_SETFRAME, .setframe, 0, DRT_EXCFRAME, RWF_X64, P_64, 0)



res(STRUC, struc, DF_LABEL, DRT_STRUCT, 0, P_86, 0)
res(STRUCT, struct, DF_LABEL, DRT_STRUCT, 0, P_86, 0)
res(UNION, union, DF_LABEL, DRT_STRUCT, 0, P_86, 0)
res(TYPEDEF, typedef, DF_LABEL, DRT_TYPEDEF,0, P_86, 0)
res(RECORD, record, DF_LABEL, DRT_RECORD, 0, P_86, 0)


res(COMM, comm, 0, DRT_COMM, 0, P_86, 0)
res(EXTERN, extern, 0, DRT_EXTERN, 0, P_86, 0)
res(EXTRN, extrn, 0, DRT_EXTERN, 0, P_86, 0)
res(EXTERNDEF, externdef, 0, DRT_EXTERNDEF,0, P_86, 0)
res(PUBLIC, public, 0, DRT_PUBLIC, 0, P_86, 0)


res(PROTO, proto, DF_LABEL, DRT_PROTO, 0, P_86, 0)
res(PROC, proc, DF_CGEN|DF_LABEL|DF_NOSTRUC|DF_STORE,DRT_PROC, 0, P_86, 0)
res(ENDP, endp, DF_LABEL|DF_NOSTRUC, DRT_ENDP, 0, P_86, 0)
res(LOCAL, local, 0, DRT_LOCAL, 0, P_86, 0)
res(LABEL, label, DF_LABEL|DF_NOSTRUC|DF_STORE, DRT_LABEL, 0, P_86, 0)
res(INVOKE, invoke, DF_CGEN|DF_NOSTRUC|DF_PROC|DF_STORE, DRT_INVOKE, 0, P_86, 0)




res(ORG, org, 0, DRT_ORG, 0, P_86, 0)
res(ALIGN, align, 0, DRT_ALIGN, 0, P_86, 0)
res(EVEN, even, 0, DRT_ALIGN, 0, P_86, 0)

res(SEGMENT, segment, DF_LABEL|DF_NOSTRUC|DF_PROC,DRT_SEGMENT, 0, P_86, 0)


res(ENDS, ends, DF_LABEL, DRT_ENDS, 0, P_86, 0)
res(GROUP, group, DF_LABEL, DRT_GROUP, 0, P_86, 0)
res(ASSUME, assume, 0, DRT_ASSUME, 0, P_86, 0)

res(ALIAS, alias, 0, DRT_ALIAS, 0, P_86, 0)
res(ECHO, echo, DF_NOEXPAND|DF_NOCONCAT, DRT_ECHO, 0, P_86, 0)
res(END, end, DF_CGEN|DF_NOSTRUC|DF_STORE,DRT_END, 0, P_86, 0)
res(EQU, equ, DF_STRPARM|DF_LABEL, DRT_EQU, 0, P_86, 0)

res(INCBIN, incbin, DF_NOSTRUC|DF_PROC|DF_STORE,DRT_INCBIN, 0, P_86, 0)

res(INCLUDELIB, includelib, DF_NOCONCAT, DRT_INCLIB, 0, P_86, 0)
res(NAME, name, 0, DRT_NAME, 0, P_86, 0)
res(OPTION, option, 0, DRT_OPTION, 0, P_86, 0)
res(POPCONTEXT, popcontext, 0, DRT_CONTEXT, 0, P_86, 0)
res(PUSHCONTEXT, pushcontext, 0, DRT_CONTEXT, 0, P_86, 0)
# 17 "main.c" 2
# 1 "./dirtype.h" 1




res( CONDDIR, CondAsmDirective )
res( LOOPDIR, LoopDirective )
res( PURGE, PurgeDirective )
res( INCLUDE, IncludeDirective )
res( MACRO, MacroDir )
res( CATSTR, CatStrDir )
res( SUBSTR, SubStrDir )
res( MACINT, StubDir )

res( DATADIR, StubDir )
res( END, EndDirective )
res( ERRDIR, ErrorDirective )
res( CPU, CpuDirective )
res( LISTING, ListingDirective )
res( LISTMAC, ListMacroDirective )
res( SEGORDER, SegOrderDirective )
res( SIMSEG, SimplifiedSegDir )
res( HLLSTART, HllStartDir )
res( HLLEXIT, HllExitDir )
res( HLLEND, HllEndDir )
res( STARTEXIT, StartupExitDirective )
res( MODEL, ModelDirective )
res( RADIX, RadixDirective )

res( SAFESEH, SafeSEHDirective )

res( INSTR, InStrDir )
res( SIZESTR, SizeStrDir )

res( EXCFRAME, ExcFrameDirective )

res( STRUCT, StructDirective )
res( TYPEDEF, TypedefDirective )
res( RECORD, RecordDirective )
res( COMM, CommDirective )
res( EXTERN, ExternDirective )
res( EXTERNDEF, ExterndefDirective )
res( PROTO, ProtoDirective )
res( PUBLIC, PublicDirective )
res( PROC, ProcDir )
res( ENDP, EndpDir )
res( LOCAL, LocalDir )
res( INVOKE, InvokeDirective )
res( ORG, OrgDirective )
res( ALIGN, AlignDirective )
res( SEGMENT, SegmentDir )
res( ENDS, EndsDir )
res( GROUP, GrpDir )
res( ASSUME, AssumeDirective )
res( LABEL, LabelDirective )
res( ALIAS, AliasDirective )
res( ECHO, EchoDirective )
res( EQU, EquDirective )
res( EQUALSGN, EqualSgnDirective )

res( INCBIN, IncBinDirective )

res( INCLIB, IncludeLibDirective )
res( NAME, NameDirective )
res( OPTION, OptionDirective )
res( CONTEXT, ContextDirective )
# 18 "main.c" 2
# 1 "./elf.h" 1






void elf_init( struct module_info * );
# 19 "main.c" 2
# 1 "./elfspec.h" 1
# 39 "./elfspec.h"
typedef struct {
    uint_8 e_ident[16];
    uint_16 e_type;
    uint_16 e_machine;
    uint_32 e_version;
    uint_32 e_entry;
    uint_32 e_phoff;
    uint_32 e_shoff;
    uint_32 e_flags;
    uint_16 e_ehsize;
    uint_16 e_phentsize;
    uint_16 e_phnum;
    uint_16 e_shentsize;
    uint_16 e_shnum;
    uint_16 e_shstrndx;
} Elf32_Ehdr;

typedef struct {
    uint_8 e_ident[16];
    uint_16 e_type;
    uint_16 e_machine;
    uint_32 e_version;
    uint_64 e_entry;
    uint_64 e_phoff;
    uint_64 e_shoff;
    uint_32 e_flags;
    uint_16 e_ehsize;
    uint_16 e_phentsize;
    uint_16 e_phnum;
    uint_16 e_shentsize;
    uint_16 e_shnum;
    uint_16 e_shstrndx;
} Elf64_Ehdr;
# 165 "./elfspec.h"
typedef struct {
    uint_32 sh_name;
    uint_32 sh_type;
    uint_32 sh_flags;
    uint_32 sh_addr;
    uint_32 sh_offset;
    uint_32 sh_size;
    uint_32 sh_link;
    uint_32 sh_info;
    uint_32 sh_addralign;
    uint_32 sh_entsize;
} Elf32_Shdr;

typedef struct {
    uint_32 sh_name;
    uint_32 sh_type;
    uint_64 sh_flags;
    uint_64 sh_addr;
    uint_64 sh_offset;
    uint_64 sh_size;
    uint_32 sh_link;
    uint_32 sh_info;
    uint_64 sh_addralign;
    uint_64 sh_entsize;
} Elf64_Shdr;
# 246 "./elfspec.h"
typedef struct {
    uint_32 st_name;
    uint_32 st_value;
    uint_32 st_size;
    uint_8 st_info;
    uint_8 st_other;
    uint_16 st_shndx;
} Elf32_Sym;

typedef struct {
    uint_32 st_name;
    uint_8 st_info;
    uint_8 st_other;
    uint_16 st_shndx;
    uint_64 st_value;
    uint_64 st_size;
} Elf64_Sym;
# 298 "./elfspec.h"
typedef struct {
    uint_32 r_offset;
    uint_32 r_info;
} Elf32_Rel;

typedef struct {
    uint_32 r_offset;
    uint_32 r_info;
    int_32 r_addend;
} Elf32_Rela;

typedef struct {
    uint_64 r_offset;
    uint_64 r_info;
} Elf64_Rel;

typedef struct {
    uint_64 r_offset;
    uint_64 r_info;
    int_64 r_addend;
} Elf64_Rela;
# 332 "./elfspec.h"
enum elf32_relocations {
 R_386_NONE = 0,
 R_386_32 = 1,
 R_386_PC32 = 2,
 R_386_GOT32 = 3,
 R_386_PLT32 = 4,
 R_386_COPY = 5,
 R_386_GLOB_DAT = 6,
 R_386_JMP_SLOT = 7,
 R_386_RELATIVE = 8,
 R_386_GOTOFF = 9,
 R_386_GOTPC = 10,
 R_386_32PLT = 11,

 R_386_16 = 20,
 R_386_PC16 = 21,
 R_386_8 = 22,
 R_386_PC8 = 23
};


enum elf64_relocations {
 R_X86_64_NONE = 0,
 R_X86_64_64 = 1,
 R_X86_64_PC32 = 2,
 R_X86_64_GOT32 = 3,
 R_X86_64_PLT32 = 4,
 R_X86_64_COPY = 5,
 R_X86_64_GLOB_DAT = 6,
 R_X86_64_JUMP_SLOT = 7,
 R_X86_64_RELATIVE = 8,
 R_X86_64_GOTPCREL = 9,
 R_X86_64_32 = 10,
 R_X86_64_32S = 11,
 R_X86_64_16 = 12,
 R_X86_64_PC16 = 13,
 R_X86_64_8 = 14,
 R_X86_64_PC8 = 15,
 R_X86_64_DPTMOD64 = 16,
 R_X86_64_DTPOFF64 = 17,
 R_X86_64_TPOFF64 = 18,
 R_X86_64_TLSGD = 19,
 R_X86_64_TLSLD = 20,
 R_X86_64_DTPOFF32 = 21,
 R_X86_64_GOTTPOFF = 22,
 R_X86_64_TPOFF32 = 23,
 R_X86_64_PC64 = 24,
 R_X86_64_GOTOFF64 = 25,
 R_X86_64_GOTPC32 = 26,
 R_X86_64_SIZE32 = 32,
 R_X86_64_SIZE64 = 33
};



typedef struct {
    uint_32 p_type;
    uint_32 p_offset;
    uint_32 p_vaddr;
    uint_32 p_paddr;
    uint_32 p_filesz;
    uint_32 p_memsz;
    uint_32 p_flags;
    uint_32 p_align;
} Elf32_Phdr;
# 419 "./elfspec.h"
typedef struct {
    uint_32 n_namesz;
    uint_32 n_descsz;
    uint_32 n_type;


} Elf_Note;
# 435 "./elfspec.h"
typedef struct {
    int_32 d_tag;
    union {
        uint_32 d_val;
        uint_32 d_ptr;
    } d_un;
} Elf32_Dyn;
# 514 "./elfspec.h"
typedef unsigned long INITTERM ( unsigned long modhandle, unsigned long flag );
# 526 "./elfspec.h"
typedef struct {
    uint_32 os_type;
    uint_32 os_size;
} Elf32_Os;
# 544 "./elfspec.h"
typedef struct {
    unsigned char os2_sessiontype;
    unsigned char os2_sessionflags;
    unsigned char os2_reserved[14];
} Elf32_OS2Info;
# 559 "./elfspec.h"
typedef struct {
    uint_32 imp_ordinal;
    uint_32 imp_name;
    uint_32 imp_info;
    uint_32 imp_reserved;
} Elf32_Import;
# 576 "./elfspec.h"
typedef struct {
    uint_32 exp_ordinal;
    uint_32 exp_symbol;
    uint_32 exp_name;
    uint_32 exp_reserved;
} Elf32_Export;





typedef struct {
    unsigned char rh_ident[16];
    uint_32 rh_name;
    uint_32 rh_itnum;
    uint_32 rh_rhsize;
    uint_32 rh_size;
    uint_32 rh_strtab;
} Elf32_Rhdr;
# 632 "./elfspec.h"
typedef struct {
    unsigned char ri_ident[4];
    uint_32 ri_type;
    uint_32 ri_typename;
    uint_32 ri_ordinal;
    uint_32 ri_ordname;
    uint_32 ri_data;
    uint_32 ri_flags;
    uint_32 ri_size;
    uint_32 ri_reserved;
} Elf32_Ritem;
# 656 "./elfspec.h"
typedef struct {
    uint_32 idm_dllname;
    uint_32 idm_initparms;
} Elf32_Demangle;



typedef struct {
    uint_32 lib_name;
} Elf32_Library;
# 20 "main.c" 2
# 1 "./equate.h" 1
# 34 "./equate.h"
extern struct asym *CreateConstant( struct asm_tok[] );
extern struct asym *CreateVariable( const char *, int );
# 21 "main.c" 2

# 1 "./expreval.h" 1
# 37 "./expreval.h"
enum exprtype {
    EXPR_EMPTY = EMPTY,
    EXPR_ERROR = ERROR,
    EXPR_CONST = 0,
    EXPR_ADDR,
    EXPR_REG,
    EXPR_FLOAT
};



enum oparg_types {
    AT_TYPE = 0x01,
    AT_LABEL = 0x02,
    AT_IND = 0x04,
    AT_REG = 0x08,
    AT_FIELD = 0x10,
    AT_NUM = 0x20,
    AT_BF = 0x40,
    AT_UNDEF = 0x80,
    AT_FLOAT = 0x100,
    AT_CONST = AT_TYPE | AT_NUM,
    AT_TL = AT_TYPE | AT_LABEL,
    AT_TLN = AT_TYPE | AT_LABEL | AT_NUM,
    AT_TLF = AT_TYPE | AT_LABEL | AT_FIELD,
    AT_TLFN = AT_TYPE | AT_LABEL | AT_FIELD | AT_NUM,
    AT_TBF = AT_TYPE | AT_BF,
    AT_LF = AT_LABEL| AT_FIELD,
    AT_LIF = AT_LABEL| AT_IND | AT_FIELD,
    AT_LFN = AT_LABEL| AT_FIELD | AT_NUM,
    AT_TLR = AT_TYPE | AT_LABEL | AT_REG,
    AT_ALL = AT_TYPE | AT_LABEL | AT_IND | AT_REG | AT_FIELD | AT_NUM | AT_UNDEF | AT_BF | AT_FLOAT
};



struct expr {
    union {
        struct {
            int_32 value;
            int_32 hvalue;
        };
        struct {
            uint_64 llvalue;
            uint_64 hlvalue;
        };
        uint_32 uvalue;
        int_64 value64;
        float fvalue;
        int st_idx;
        uint_8 chararray[16];
    };
    union {
        struct asm_tok *quoted_string;
        struct asm_tok *float_tok;
    };
    struct asm_tok *base_reg;

    struct asm_tok *idx_reg;
    union {
        struct asm_tok *label_tok;
        struct asm_tok *type_tok;
    };
    struct asm_tok *override;

    enum special_token instr;

    enum exprtype kind;
    enum memtype mem_type;
    uint_8 scale;
    uint_8 Ofssize;
    union {
        uint_8 flags1;
        struct {
            unsigned indirect : 1;
            unsigned explicit : 1;
            unsigned is_abs : 1;
            unsigned is_type : 1;
            unsigned is_opattr: 1;
            unsigned negative : 1;

            unsigned assumecheck: 1;
            unsigned is_dot: 1;
        };
    };
    struct asym *sym;
    struct asym *mbr;
    struct asym *type;
};


enum expr_flags {
    EXPF_NOERRMSG = 1,
    EXPF_NOUNDEF = 2,
    EXPF_ONEOPND = 4,
    EXPF_IN_SQBR = 8
};

extern ret_code EvalOperand( int *, struct asm_tok[], int, struct expr *, uint_8 );
extern void ExprEvalInit( void );
extern ret_code EmitConstError( const struct expr * );
# 23 "main.c" 2
# 1 "./extern.h" 1
# 13 "./extern.h"
extern struct asym *MakeExtern( const char *name, enum memtype type, struct asym * vartype, struct asym *, unsigned char );


extern void AddPublicData( struct asym *sym );

extern void FreePubQueue( void );
# 24 "main.c" 2
# 1 "./fastpass.h" 1
# 16 "./fastpass.h"
struct equ_item {
    struct equ_item *next;
    struct asym *sym;
    int lvalue;
    int hvalue;
    enum memtype mem_type;
    bool isdefined;
};






struct line_item {
    struct line_item *next;
    uint_32 lineno:20, srcfile:12;
    uint_32 list_pos;
    char line[1];
};

extern struct line_item *LineStoreCurr;




struct mod_state {
    bool init;
    struct {
        struct equ_item *head;
        struct equ_item *tail;
    } Equ;
    uint_8 modinfo[ sizeof( struct module_info ) - sizeof( struct module_vars ) ];
};
# 61 "./fastpass.h"
extern bool StoreState;
# 70 "./fastpass.h"
extern bool UseSavedState;


void FastpassInit( void );
void SegmentSaveState( void );
void AssumeSaveState( void );
void ContextSaveState( void );
void StoreLine( const char *, int, uint_32 );
void SkipSavedState( void );
struct line_item *RestoreState( void );
void SaveVariableState( struct asym *sym );
void FreeLineStore( void );
# 25 "main.c" 2
# 1 "./fixup.h" 1
# 36 "./fixup.h"
enum fixup_types {
        FIX_VOID = 0,
        FIX_RELOFF8,
        FIX_RELOFF16,
        FIX_RELOFF32,
        FIX_OFF8,
        FIX_OFF16,
        FIX_OFF32,

        FIX_OFF64,

        FIX_SEG = 8,
        FIX_PTR16,
        FIX_PTR32,
        FIX_HIBYTE,
        FIX_OFF32_IMGREL,
        FIX_OFF32_SECREL,
        FIX_LAST
};
# 86 "./fixup.h"
enum fixup_options {
        OPTJ_NONE,
        OPTJ_EXPLICIT,
        OPTJ_EXTEND,
        OPTJ_JXX,
        OPTJ_CALL,
        OPTJ_PUSH
};

struct fixup {
    struct fixup *nextbp;
    struct fixup *nextrlc;



    uint_32 offset;
    uint_32 locofs;
    enum fixup_types type;
    enum fixup_options option;
    union {
        uint_16 flags;
        struct {




            uint_8 addbytes;

            unsigned char loader_resolved:1;
            unsigned char orgoccured:1;
        };
    };
    union {
        struct {
            int_8 frame_type;
            uint_16 frame_datum;
        };
        struct asym *segment_var;
    };
    struct dsym *def_seg;
    struct asym *sym;
};

extern struct fixup *CreateFixup( struct asym *sym, enum fixup_types fixup_type, enum fixup_options fixup_option );
extern void SetFixupFrame( const struct asym *sym, char );
extern void FreeFixup( struct fixup * );
extern void store_fixup( struct fixup *, struct dsym *, int_32 * );

extern ret_code BackPatch( struct asym *sym );
# 26 "main.c" 2
# 1 "./fpfixup.h" 1




extern void AddFloatingPointEmulationFixup( struct code_info * );
# 27 "main.c" 2
# 1 "./hll.h" 1
# 11 "./hll.h"
extern void HllInit( int );



extern void HllCheckOpen( void );
# 28 "main.c" 2
# 1 "./input.h" 1
# 34 "./input.h"
struct macro_instance {
    struct srcline *currline;
    struct srcline *startline;
    uint_32 localstart;
    char * *parm_array;
    struct asym *macro;
    unsigned parmcnt;
};





struct file_seq {
    struct file_seq *next;
    uint_16 file;
};

struct input_status {
    char *token_stringbuf;
    char *currsource;
    char *CurrComment;
    int token_count;
    char line_flags;




};

extern uint_32 GetLineNumber( void );


extern const char *GetFNamePart( const char *fname );
extern char *GetExtPart( const char *fname );

extern FILE *SearchFile( const char *path, bool );
extern char *GetTextLine( char *buffer );
extern void PushMacro( struct macro_instance * );
extern void SetLineNumber( unsigned );



extern void AddStringToIncludePath( const char *string );
extern void InputInit( void );
extern void InputPassInit( void );
extern void InputFini( void );
extern struct asm_tok *PushInputStatus( struct input_status * );
extern void PopInputStatus( struct input_status * );
extern int GetCurrSrcPos( char * );
extern void ClearSrcStack( void );
extern unsigned get_curr_srcfile( void );

extern void set_curr_srcfile( unsigned, uint_32 );

extern const struct fname_item *GetFName( unsigned );
# 29 "main.c" 2
# 1 "./instr64.h" 1
# 10 "./instr64.h"
ins (CALL, call, OpCls( I32, NONE, NONE ), 0, 0, no_RM, 0xE8, 0x00, P_64, 0)
insn(CALL, 1, OpCls( R64_M64, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x10, P_64, 0)


insm(CALL, 3, OpCls( M32, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x18, P_64, 0)
insn(CALL, 4, OpCls( M48, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x18, P_64, 0)
insn(CALL, 5, OpCls( M80, NONE, NONE ), F_48, 0, no_WDS, 0xFF, 0x18, P_64, 0)
ins (JMP, jmp, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xEB, 0x00, P_86, 0)
insn(JMP, 1, OpCls( I32, NONE, NONE ), 0, 0, no_RM, 0xE9, 0x00, P_64, 0)
insn(JMP, 2, OpCls( R64_M64, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x20, P_64, 0)


insm(JMP, 4, OpCls( M32, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x28, P_64, 0)
insn(JMP, 5, OpCls( M48, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x28, P_64, 0)
insn(JMP, 6, OpCls( M80, NONE, NONE ), F_48, 0, no_WDS, 0xFF, 0x28, P_64, 0)
ins (LGDT, lgdt, OpCls( M80, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x10, P_64, 0)
ins (LIDT, lidt, OpCls( M80, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x18, P_64, 0)

ins (SLDT, sldt, OpCls( RGT8, NONE, NONE ), F_0F, 0, no_WDS, 0x00, 0x00, P_64, 0)
insn(SLDT, 1, OpCls( M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x00, P_286, 0)
ins (SMSW, smsw, OpCls( RGT8, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x20, P_64, 0)
insn(SMSW, 1, OpCls( M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x01, 0x20, P_286, 0)
ins (STR, str, OpCls( RGT8, NONE, NONE ), F_0F, 0, no_WDS, 0x00, 0x08, P_64, 0)
insn(STR, 1, OpCls( M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x08, P_286, 0)


ins (POP, pop, OpCls( R16_R64, NONE, NONE ), 0, 0, R_in_OP,0x58, 0x00, P_86, 0)
insn(POP, 1, OpCls( M16_M64, NONE, NONE ), 0, 0, 0, 0x8F, 0x00, P_86, 0)
insn(POP, 2, OpCls( SR386, NONE, NONE ), F_0F, 1, R_in_OP,0x81, 0x00, P_386, 0)
ins (PUSH, push, OpCls( R16_R64, NONE, NONE ), 0, 0, R_in_OP,0x50, 0x00, P_86, 0)
insn(PUSH, 1, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x6A, 0x00, P_186, 0)
insn(PUSH, 2, OpCls( I, NONE, NONE ), 0, 0, no_RM, 0x68, 0x00, P_186, 0)
insn(PUSH, 3, OpCls( M16_M64, NONE, NONE ), 0, 0, 0, 0xFF, 0x30, P_86, 0)
insn(PUSH, 4, OpCls( SR386, NONE, NONE ), F_0F, 1, R_in_OP,0x80, 0x00, P_386, 0)

ins (VMREAD, vmread, OpCls( R64_M64, R64, NONE ), F_0F, 0, no_WDS, 0x78, 0x00, P_686p, 0)
ins (VMWRITE, vmwrite, OpCls( R64, R64_M64, NONE ), F_0F, 1, no_WDS, 0x79, 0x00, P_686p, 0)
# 30 "main.c" 2
# 1 "./instravx.h" 1
# 10 "./instravx.h"
avxins (ADDPD, vaddpd, P_AVX, VX_L )
avxins (ADDPS, vaddps, P_AVX, VX_L )
avxins (ADDSD, vaddsd, P_AVX, 0 )
avxins (ADDSS, vaddss, P_AVX, 0 )
avxins (DIVPD, vdivpd, P_AVX, VX_L )
avxins (DIVPS, vdivps, P_AVX, VX_L )
avxins (DIVSD, vdivsd, P_AVX, 0 )
avxins (DIVSS, vdivss, P_AVX, 0 )
avxins (MAXPD, vmaxpd, P_AVX, VX_L )
avxins (MAXPS, vmaxps, P_AVX, VX_L )
avxins (MAXSD, vmaxsd, P_AVX, 0 )
avxins (MAXSS, vmaxss, P_AVX, 0 )
avxins (MINPD, vminpd, P_AVX, VX_L )
avxins (MINPS, vminps, P_AVX, VX_L )
avxins (MINSD, vminsd, P_AVX, 0 )
avxins (MINSS, vminss, P_AVX, 0 )
avxins (MULPD, vmulpd, P_AVX, VX_L )
avxins (MULPS, vmulps, P_AVX, VX_L )
avxins (MULSD, vmulsd, P_AVX, 0 )
avxins (MULSS, vmulss, P_AVX, 0 )
avxins (SQRTPD, vsqrtpd, P_AVX, VX_L )
avxins (SQRTPS, vsqrtps, P_AVX, VX_L )
avxins (SQRTSD, vsqrtsd, P_AVX, 0 )
avxins (SQRTSS, vsqrtss, P_AVX, 0 )
avxins (SUBPD, vsubpd, P_AVX, VX_L )
avxins (SUBPS, vsubps, P_AVX, VX_L )
avxins (SUBSD, vsubsd, P_AVX, 0 )
avxins (SUBSS, vsubss, P_AVX, 0 )
avxins (CMPPD, vcmppd, P_AVX, VX_L )
avxins (CMPPS, vcmpps, P_AVX, VX_L )
avxins (CMPSD, vcmpsd, P_AVX, 0 )
avxins (CMPSS, vcmpss, P_AVX, 0 )


avxins (ANDPD, vandpd, P_AVX, VX_L )
avxins (ANDPS, vandps, P_AVX, VX_L )
avxins (ANDNPD, vandnpd, P_AVX, VX_L )
avxins (ANDNPS, vandnps, P_AVX, VX_L )
avxins (ORPD, vorpd, P_AVX, VX_L )
avxins (ORPS, vorps, P_AVX, VX_L )
avxins (COMISD, vcomisd, P_AVX, VX_NND )
avxins (COMISS, vcomiss, P_AVX, VX_NND )
avxins (XORPD, vxorpd, P_AVX, VX_L )
avxins (XORPS, vxorps, P_AVX, VX_L )


avxins (CVTDQ2PD, vcvtdq2pd, P_AVX, VX_L|VX_NND|VX_HALF )
avxins (CVTDQ2PS, vcvtdq2ps, P_AVX, VX_L|VX_NND )



avxins (CVTPS2DQ, vcvtps2dq, P_AVX, VX_L|VX_NND )
avxins (CVTTPS2DQ,vcvttps2dq, P_AVX, VX_L|VX_NND )
avxins (CVTPS2PD, vcvtps2pd, P_AVX, VX_L|VX_NND|VX_HALF )
avxins (CVTSD2SI, vcvtsd2si, P_AVX, VX_NND )
avxins (CVTTSD2SI,vcvttsd2si, P_AVX, VX_NND )
avxins (CVTSD2SS, vcvtsd2ss, P_AVX, 0 )
avxins (CVTSI2SD, vcvtsi2sd, P_AVX, 0 )
avxins (CVTSI2SS, vcvtsi2ss, P_AVX, 0 )
avxins (CVTSS2SD, vcvtss2sd, P_AVX, 0 )
avxins (CVTSS2SI, vcvtss2si, P_AVX, VX_NND )
avxins (CVTTSS2SI,vcvttss2si, P_AVX, VX_NND )


avxins (ADDSUBPD, vaddsubpd, P_AVX, VX_L )
avxins (ADDSUBPS, vaddsubps, P_AVX, VX_L )
avxins (BLENDPD , vblendpd , P_AVX, VX_L )
avxins (BLENDPS , vblendps , P_AVX, VX_L )
avxins (DPPD , vdppd , P_AVX, 0 )
avxins (DPPS , vdpps , P_AVX, VX_L )
avxins (EXTRACTPS,vextractps, P_AVX, VX_NND )
avxins (HADDPD , vhaddpd , P_AVX, VX_L )
avxins (HADDPS , vhaddps , P_AVX, VX_L )
avxins (HSUBPD , vhsubpd , P_AVX, VX_L )
avxins (HSUBPS , vhsubps , P_AVX, VX_L )
avxins (INSERTPS, vinsertps, P_AVX, 0 )
avxins (LDDQU , vlddqu , P_AVX, VX_L|VX_NND )
avxins (LDMXCSR , vldmxcsr , P_AVX, 0 )
avxins (STMXCSR , vstmxcsr , P_AVX, 0 )

avxins (MASKMOVDQU,vmaskmovdqu, P_AVX, VX_NND )
avxins (MOVAPD , vmovapd , P_AVX, VX_L|VX_NND )
avxins (MOVAPS , vmovaps , P_AVX, VX_L|VX_NND )
avxins (MOVD , vmovd , P_AVX, VX_NND )
avxins (MOVQ , vmovq , P_AVX, VX_NND )
avxins (MOVDQA , vmovdqa , P_AVX, VX_L|VX_NND )
avxins (MOVDQU , vmovdqu , P_AVX, VX_L|VX_NND )
avxins (MOVHLPS , vmovhlps , P_AVX, 0 )
avxins (MOVLHPS , vmovlhps , P_AVX, 0 )
avxins (MOVHPD , vmovhpd , P_AVX, VX_NMEM )
avxins (MOVHPS , vmovhps , P_AVX, VX_NMEM )
avxins (MOVLPD , vmovlpd , P_AVX, VX_NMEM )
avxins (MOVLPS , vmovlps , P_AVX, VX_NMEM )
avxins (MOVSD , vmovsd , P_AVX, VX_NMEM )
avxins (MOVSS , vmovss , P_AVX, VX_NMEM )







avxins (MOVNTDQ , vmovntdq , P_AVX, VX_L|VX_NND )
avxins (MOVNTDQA, vmovntdqa, P_AVX, VX_NND )
avxins (MOVNTPD , vmovntpd , P_AVX, VX_L|VX_NND )
avxins (MOVNTPS , vmovntps , P_AVX, VX_L|VX_NND )
avxins (MOVSHDUP, vmovshdup, P_AVX, VX_L|VX_NND )
avxins (MOVSLDUP, vmovsldup, P_AVX, VX_L|VX_NND )
avxins (MOVUPD , vmovupd , P_AVX, VX_L|VX_NND )
avxins (MOVUPS , vmovups , P_AVX, VX_L|VX_NND )

avxins (MPSADBW , vmpsadbw , P_AVX, 0 )

avxins (PABSB , vpabsb , P_AVX, VX_NND )
avxins (PABSW , vpabsw , P_AVX, VX_NND )
avxins (PABSD , vpabsd , P_AVX, VX_NND )
avxins (PACKSSWB, vpacksswb, P_AVX, 0 )
avxins (PACKSSDW, vpackssdw, P_AVX, 0 )
avxins (PACKUSWB, vpackuswb, P_AVX, 0 )
avxins (PACKUSDW, vpackusdw, P_AVX, 0 )
avxins (PADDB , vpaddb , P_AVX, 0 )
avxins (PADDW , vpaddw , P_AVX, 0 )
avxins (PADDD , vpaddd , P_AVX, 0 )
avxins (PADDQ , vpaddq , P_AVX, 0 )
avxins (PADDSB , vpaddsb , P_AVX, 0 )
avxins (PADDSW , vpaddsw , P_AVX, 0 )
avxins (PADDUSB , vpaddusb , P_AVX, 0 )
avxins (PADDUSW , vpaddusw , P_AVX, 0 )
avxins (PALIGNR , vpalignr , P_AVX, 0 )
avxins (PAND , vpand , P_AVX, 0 )
avxins (PANDN , vpandn , P_AVX, 0 )
avxins (PAVGB , vpavgb , P_AVX, 0 )
avxins (PAVGW , vpavgw , P_AVX, 0 )
avxins (PBLENDW , vpblendw , P_AVX, 0 )
avxins (PCMPESTRI,vpcmpestri, P_AVX, VX_NND )
avxins (PCMPESTRM,vpcmpestrm, P_AVX, VX_NND )
avxins (PCMPISTRI,vpcmpistri, P_AVX, VX_NND )
avxins (PCMPISTRM,vpcmpistrm, P_AVX, VX_NND )
avxins (PCMPEQB ,vpcmpeqb , P_AVX, 0 )
avxins (PCMPEQW ,vpcmpeqw , P_AVX, 0 )
avxins (PCMPEQD ,vpcmpeqd , P_AVX, 0 )
avxins (PCMPEQQ ,vpcmpeqq , P_AVX, 0 )
avxins (PCMPGTB ,vpcmpgtB , P_AVX, 0 )
avxins (PCMPGTW ,vpcmpgtw , P_AVX, 0 )
avxins (PCMPGTD ,vpcmpgtd , P_AVX, 0 )
avxins (PCMPGTQ ,vpcmpgtq , P_AVX, 0 )
avxins (PEXTRB ,vpextrb , P_AVX, VX_NND )
avxins (PEXTRW ,vpextrw , P_AVX, VX_NND )
avxins (PEXTRD ,vpextrd , P_AVX, VX_NND )
avxins (PINSRB ,vpinsrb , P_AVX, 0 )
avxins (PINSRW ,vpinsrw , P_AVX, 0 )
avxins (PINSRD ,vpinsrd , P_AVX, 0 )

avxins (PEXTRQ ,vpextrq , P_AVX, VX_NND )
avxins (PINSRQ ,vpinsrq , P_AVX, 0 )

avxins (PHADDW ,vphaddw , P_AVX, 0 )
avxins (PHADDD ,vphaddd , P_AVX, 0 )
avxins (PHADDSW ,vphaddsw , P_AVX, 0 )
avxins (PHMINPOSUW,vphminposuw, P_AVX, VX_NND )
avxins (PHSUBW ,vphsubw , P_AVX, 0 )
avxins (PHSUBD ,vphsubd , P_AVX, 0 )
avxins (PHSUBSW ,vphsubsw , P_AVX, 0 )
avxins (PMADDWD ,vpmaddwd , P_AVX, 0 )
avxins (PMADDUBSW,vpmaddubsw, P_AVX, 0 )
avxins (PMAXSB ,vpmaxsb , P_AVX, 0 )
avxins (PMAXSW ,vpmaxsw , P_AVX, 0 )
avxins (PMAXSD ,vpmaxsd , P_AVX, 0 )
avxins (PMAXUB ,vpmaxub , P_AVX, 0 )
avxins (PMAXUW ,vpmaxuw , P_AVX, 0 )
avxins (PMAXUD ,vpmaxud , P_AVX, 0 )
avxins (PMINSB ,vpminsb , P_AVX, 0 )
avxins (PMINSW ,vpminsw , P_AVX, 0 )
avxins (PMINSD ,vpminsd , P_AVX, 0 )
avxins (PMINUB ,vpminub , P_AVX, 0 )
avxins (PMINUW ,vpminuw , P_AVX, 0 )
avxins (PMINUD ,vpminud , P_AVX, 0 )
avxins (PMOVMSKB ,vpmovmskb , P_AVX, VX_NND )
avxins (PMOVSXBW ,vpmovsxbw , P_AVX, VX_NND )
avxins (PMOVSXBD ,vpmovsxbd , P_AVX, VX_NND )
avxins (PMOVSXBQ ,vpmovsxbq , P_AVX, VX_NND )
avxins (PMOVSXWD ,vpmovsxwd , P_AVX, VX_NND )
avxins (PMOVSXWQ ,vpmovsxwq , P_AVX, VX_NND )
avxins (PMOVSXDQ ,vpmovsxdq , P_AVX, VX_NND )
avxins (PMOVZXBW ,vpmovzxbw , P_AVX, VX_NND )
avxins (PMOVZXBD ,vpmovzxbd , P_AVX, VX_NND )
avxins (PMOVZXBQ ,vpmovzxbq , P_AVX, VX_NND )
avxins (PMOVZXWD ,vpmovzxwd , P_AVX, VX_NND )
avxins (PMOVZXWQ ,vpmovzxwq , P_AVX, VX_NND )
avxins (PMOVZXDQ ,vpmovzxdq , P_AVX, VX_NND )
avxins (PMULHUW ,vpmulhuw , P_AVX, 0 )
avxins (PMULHRSW ,vpmulhrsw , P_AVX, 0 )
avxins (PMULHW ,vpmulhw , P_AVX, 0 )
avxins (PMULLW ,vpmullw , P_AVX, 0 )
avxins (PMULLD ,vpmulld , P_AVX, 0 )
avxins (PMULUDQ ,vpmuludq , P_AVX, 0 )
avxins (PMULDQ ,vpmuldq , P_AVX, 0 )
avxins (POR ,vpor , P_AVX, 0 )
avxins (PSADBW ,vpsadbw , P_AVX, 0 )
avxins (PSHUFB ,vpshufb , P_AVX, 0 )
avxins (PSHUFD ,vpshufd , P_AVX, VX_NND )
avxins (PSHUFHW ,vpshufhw , P_AVX, VX_NND )
avxins (PSHUFLW ,vpshuflw , P_AVX, VX_NND )
avxins (PSIGNB ,vpsignb , P_AVX, 0 )
avxins (PSIGNW ,vpsignw , P_AVX, 0 )
avxins (PSIGND ,vpsignd , P_AVX, 0 )
avxins (PSLLDQ ,vpslldq , P_AVX, VX_DST )
avxins (PSRLDQ ,vpsrldq , P_AVX, VX_DST )
avxins (PSLLW ,vpsllw , P_AVX, VX_DST )
avxins (PSLLD ,vpslld , P_AVX, VX_DST )
avxins (PSLLQ ,vpsllq , P_AVX, VX_DST )
avxins (PSRAW ,vpsraw , P_AVX, VX_DST )
avxins (PSRAD ,vpsrad , P_AVX, VX_DST )
avxins (PSRLW ,vpsrlw , P_AVX, VX_DST )
avxins (PSRLD ,vpsrld , P_AVX, VX_DST )
avxins (PSRLQ ,vpsrlq , P_AVX, VX_DST )

avxins (PTEST ,vptest , P_AVX, VX_L|VX_NND )
avxins (PSUBB ,vpsubb , P_AVX, 0 )
avxins (PSUBW ,vpsubw , P_AVX, 0 )
avxins (PSUBD ,vpsubd , P_AVX, 0 )
avxins (PSUBQ ,vpsubq , P_AVX, 0 )
avxins (PSUBSB ,vpsubsb , P_AVX, 0 )
avxins (PSUBSW ,vpsubsw , P_AVX, 0 )
avxins (PSUBUSB ,vpsubusb , P_AVX, 0 )
avxins (PSUBUSW ,vpsubusw , P_AVX, 0 )
avxins (PUNPCKHBW ,vpunpckhbw, P_AVX, 0 )
avxins (PUNPCKHWD ,vpunpckhwd, P_AVX, 0 )
avxins (PUNPCKHDQ ,vpunpckhdq, P_AVX, 0 )
avxins (PUNPCKHQDQ,vpunpckhqdq, P_AVX, 0 )
avxins (PUNPCKLBW ,vpunpcklbw, P_AVX, 0 )
avxins (PUNPCKLWD ,vpunpcklwd, P_AVX, 0 )
avxins (PUNPCKLDQ ,vpunpckldq, P_AVX, 0 )
avxins (PUNPCKLQDQ,vpunpcklqdq, P_AVX, 0 )
avxins (PXOR ,vpxor , P_AVX, 0 )

avxins (RCPPS ,vrcpps , P_AVX, VX_L|VX_NND )
avxins (RCPSS ,vrcpss , P_AVX, 0 )
avxins (RSQRTPS ,vrsqrtps , P_AVX, VX_L|VX_NND )
avxins (RSQRTSS ,vrsqrtss , P_AVX, 0 )
avxins (ROUNDPD ,vroundpd , P_AVX, VX_L|VX_NND )
avxins (ROUNDPS ,vroundps , P_AVX, VX_L|VX_NND )
avxins (ROUNDSD ,vroundsd , P_AVX, 0 )
avxins (ROUNDSS ,vroundss , P_AVX, 0 )
avxins (SHUFPD ,vshufpd , P_AVX, VX_L )
avxins (SHUFPS ,vshufps , P_AVX, VX_L )
avxins (UCOMISD ,vucomisd , P_AVX, VX_NND )
avxins (UCOMISS ,vucomiss , P_AVX, VX_NND )
avxins (UNPCKHPD ,vunpckhpd , P_AVX, VX_L )
avxins (UNPCKHPS ,vunpckhps , P_AVX, VX_L )
avxins (UNPCKLPD ,vunpcklpd , P_AVX, VX_L )
avxins (UNPCKLPS ,vunpcklps , P_AVX, VX_L )
# 31 "main.c" 2
# 1 "./instruct.h" 1
# 30 "./instruct.h"
ins (CALL, call, OpCls( I16, NONE, NONE ), 0, 0, no_RM, 0xE8, 0x00, P_86, 0)
insn(CALL, 1, OpCls( I32, NONE, NONE ), 0, 0, no_RM, 0xE8, 0x00, P_386, 0)
insn(CALL, 2, OpCls( RGT8, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x10, P_86, 0)
insn(CALL, 3, OpCls( M32, NONE, NONE ), F_32, 0, no_WDS, 0xFF, 0x10, P_386, 0)
insn(CALL, 4, OpCls( M16, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x10, P_86, 0)

insm(CALL, 6, OpCls( I32, NONE, NONE ), F_16, 0, no_RM, 0x9A, 0x00, P_86, 0)
insn(CALL, 7, OpCls( I48, NONE, NONE ), F_32, 0, no_RM, 0x9A, 0x00, P_386, 0)
insn(CALL, 8, OpCls( M32, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x18, P_86, 0)
insn(CALL, 9, OpCls( M48, NONE, NONE ), F_32, 0, no_WDS, 0xFF, 0x18, P_386, 0)
ins (JMP, jmp, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xEB, 0x00, P_86, 0)
insn(JMP, 1, OpCls( I16, NONE, NONE ), 0, 0, no_RM, 0xE9, 0x00, P_86, 0)
insn(JMP, 2, OpCls( I32, NONE, NONE ), 0, 0, no_RM, 0xE9, 0x00, P_386, 0)
insn(JMP, 3, OpCls( RGT8, NONE, NONE ), 0, 0, no_WDS, 0xFF, 0x20, P_86, 0)
insn(JMP, 4, OpCls( M32, NONE, NONE ), F_32, 0, no_WDS, 0xFF, 0x20, P_386, 0)
insn(JMP, 5, OpCls( M16, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x20, P_86, 0)

insm(JMP, 7, OpCls( I32, NONE, NONE ), F_16, 0, no_RM, 0xEA, 0x00, P_86, 0)
insn(JMP, 8, OpCls( I48, NONE, NONE ), F_32, 0, no_RM, 0xEA, 0x00, P_386, 0)
insn(JMP, 9, OpCls( M32, NONE, NONE ), F_16, 0, no_WDS, 0xFF, 0x28, P_86, 0)
insn(JMP, 10, OpCls( M48, NONE, NONE ), F_32, 0, no_WDS, 0xFF, 0x28, P_386, 0)






ins (JA, ja, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x7, 0x00, P_86, 0) insn(JA, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x7, 0x00, P_386, 0)
ins (JAE, jae, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x3, 0x00, P_86, 0) insn(JAE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x3, 0x00, P_386, 0)
ins (JB, jb, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x2, 0x00, P_86, 0) insn(JB, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x2, 0x00, P_386, 0)
ins (JBE, jbe, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x6, 0x00, P_86, 0) insn(JBE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x6, 0x00, P_386, 0)
ins (JC, jc, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x2, 0x00, P_86, 0) insn(JC, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x2, 0x00, P_386, 0)
ins (JE, je, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x4, 0x00, P_86, 0) insn(JE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x4, 0x00, P_386, 0)
ins (JG, jg, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xf, 0x00, P_86, 0) insn(JG, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xf, 0x00, P_386, 0)
ins (JGE, jge, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xd, 0x00, P_86, 0) insn(JGE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xd, 0x00, P_386, 0)
ins (JL, jl, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xc, 0x00, P_86, 0) insn(JL, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xc, 0x00, P_386, 0)
ins (JLE, jle, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xe, 0x00, P_86, 0) insn(JLE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xe, 0x00, P_386, 0)
ins (JNA, jna, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x6, 0x00, P_86, 0) insn(JNA, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x6, 0x00, P_386, 0)
ins (JNAE, jnae, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x2, 0x00, P_86, 0) insn(JNAE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x2, 0x00, P_386, 0)
ins (JNB, jnb, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x3, 0x00, P_86, 0) insn(JNB, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x3, 0x00, P_386, 0)
ins (JNBE, jnbe, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x7, 0x00, P_86, 0) insn(JNBE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x7, 0x00, P_386, 0)
ins (JNC, jnc, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x3, 0x00, P_86, 0) insn(JNC, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x3, 0x00, P_386, 0)
ins (JNE, jne, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x5, 0x00, P_86, 0) insn(JNE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x5, 0x00, P_386, 0)
ins (JNG, jng, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xe, 0x00, P_86, 0) insn(JNG, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xe, 0x00, P_386, 0)
ins (JNGE, jnge, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xc, 0x00, P_86, 0) insn(JNGE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xc, 0x00, P_386, 0)
ins (JNL, jnl, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xd, 0x00, P_86, 0) insn(JNL, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xd, 0x00, P_386, 0)
ins (JNLE, jnle, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xf, 0x00, P_86, 0) insn(JNLE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xf, 0x00, P_386, 0)
ins (JNO, jno, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x1, 0x00, P_86, 0) insn(JNO, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x1, 0x00, P_386, 0)
ins (JNP, jnp, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xb, 0x00, P_86, 0) insn(JNP, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xb, 0x00, P_386, 0)
ins (JNS, jns, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x9, 0x00, P_86, 0) insn(JNS, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x9, 0x00, P_386, 0)
ins (JNZ, jnz, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x5, 0x00, P_86, 0) insn(JNZ, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x5, 0x00, P_386, 0)
ins (JO, jo, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x0, 0x00, P_86, 0) insn(JO, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x0, 0x00, P_386, 0)
ins (JP, jp, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xa, 0x00, P_86, 0) insn(JP, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xa, 0x00, P_386, 0)
ins (JPE, jpe, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xa, 0x00, P_86, 0) insn(JPE, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xa, 0x00, P_386, 0)
ins (JPO, jpo, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0xb, 0x00, P_86, 0) insn(JPO, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0xb, 0x00, P_386, 0)
ins (JS, js, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x8, 0x00, P_86, 0) insn(JS, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x8, 0x00, P_386, 0)
ins (JZ, jz, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x70+0x4, 0x00, P_86, 0) insn(JZ, 1, OpCls( I, NONE, NONE ), F_0F, 0, no_RM, 0x80+0x4, 0x00, P_386, 0)



insx(JCXZ, jcxz, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE3, 0x00, P_86, 0, RWF_IA32)
ins (JECXZ, jecxz, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE3, 0x00, P_386, 0)

insx(JRCXZ, jrcxz, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE3, 0x00, P_64, 0, RWF_X64)

ins (LOOP, loop, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE2, 0x00, P_86, 0)
ins (LOOPE, loope, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE1, 0x00, P_86, 0)
ins (LOOPZ, loopz, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE1, 0x00, P_86, 0)
ins (LOOPNE, loopne, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE0, 0x00, P_86, 0)
ins (LOOPNZ, loopnz, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0xE0, 0x00, P_86, 0)
ins (LOOPD, loopd, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE2, 0x00, P_386, 0)
ins (LOOPED, looped, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE1, 0x00, P_386, 0)
ins (LOOPZD, loopzd, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE1, 0x00, P_386, 0)
ins (LOOPNED,loopned, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE0, 0x00, P_386, 0)
ins (LOOPNZD,loopnzd, OpCls( I8, NONE, NONE ), F_32A, 0, no_RM, 0xE0, 0x00, P_386, 0)
insx(LOOPW, loopw, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE2, 0x00, P_86, 0, RWF_IA32)
insx(LOOPEW, loopew, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE1, 0x00, P_86, 0, RWF_IA32)
insx(LOOPZW, loopzw, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE1, 0x00, P_86, 0, RWF_IA32)
insx(LOOPNEW,loopnew, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE0, 0x00, P_86, 0, RWF_IA32)
insx(LOOPNZW,loopnzw, OpCls( I8, NONE, NONE ), F_16A, 0, no_RM, 0xE0, 0x00, P_86, 0, RWF_IA32)
# 128 "./instruct.h"
ins (ADD, add, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x00, P_86, 0) insn(ADD, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x00 +2, 0x00, P_86, 0) insn(ADD, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x00 +4, 0x00, P_86, 0) insn(ADD, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x00, P_86, 0) insn(ADD, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x00, P_86, AP_LOCK) insn(ADD, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x00, 0x00, P_86, AP_LOCK) insn(ADD, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x00, P_86, AP_LOCK)
ins (OR, or, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x08, P_86, 0) insn(OR, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x08 +2, 0x00, P_86, 0) insn(OR, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x08 +4, 0x00, P_86, 0) insn(OR, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x08, P_86, 0) insn(OR, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x08, P_86, AP_LOCK) insn(OR, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x08, 0x00, P_86, AP_LOCK) insn(OR, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x08, P_86, AP_LOCK)
ins (ADC, adc, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x10, P_86, 0) insn(ADC, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x10 +2, 0x00, P_86, 0) insn(ADC, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x10 +4, 0x00, P_86, 0) insn(ADC, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x10, P_86, 0) insn(ADC, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x10, P_86, AP_LOCK) insn(ADC, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x10, 0x00, P_86, AP_LOCK) insn(ADC, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x10, P_86, AP_LOCK)
ins (SBB, sbb, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x18, P_86, 0) insn(SBB, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x18 +2, 0x00, P_86, 0) insn(SBB, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x18 +4, 0x00, P_86, 0) insn(SBB, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x18, P_86, 0) insn(SBB, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x18, P_86, AP_LOCK) insn(SBB, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x18, 0x00, P_86, AP_LOCK) insn(SBB, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x18, P_86, AP_LOCK)
ins (AND, and, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x20, P_86, 0) insn(AND, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x20 +2, 0x00, P_86, 0) insn(AND, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x20 +4, 0x00, P_86, 0) insn(AND, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x20, P_86, 0) insn(AND, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x20, P_86, AP_LOCK) insn(AND, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x20, 0x00, P_86, AP_LOCK) insn(AND, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x20, P_86, AP_LOCK)
ins (SUB, sub, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x28, P_86, 0) insn(SUB, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x28 +2, 0x00, P_86, 0) insn(SUB, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x28 +4, 0x00, P_86, 0) insn(SUB, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x28, P_86, 0) insn(SUB, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x28, P_86, AP_LOCK) insn(SUB, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x28, 0x00, P_86, AP_LOCK) insn(SUB, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x28, P_86, AP_LOCK)
ins (XOR, xor, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x30, P_86, 0) insn(XOR, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x30 +2, 0x00, P_86, 0) insn(XOR, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x30 +4, 0x00, P_86, 0) insn(XOR, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x30, P_86, 0) insn(XOR, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x30, P_86, AP_LOCK) insn(XOR, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x30, 0x00, P_86, AP_LOCK) insn(XOR, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x30, P_86, AP_LOCK)
ins (CMP, cmp, OpCls( RGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x38, P_86, 0) insn(CMP, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x38 +2, 0x00, P_86, 0) insn(CMP, 3, OpCls( A, I, NONE ), 0, 0, no_RM, 0x38 +4, 0x00, P_86, 0) insn(CMP, 4, OpCls( R, I, NONE ), 0, 0, 0, 0x80, 0x38, P_86, 0) insn(CMP, 6, OpCls( MGT8, I8, NONE ), 0, 0, no_WDS, 0x83, 0x38, P_86, 0) insn(CMP, 7, OpCls( MS, R, NONE ), 0, 0, 0, 0x38, 0x00, P_86, 0) insn(CMP, 8, OpCls( MS, I, NONE ), 0, 0, 0, 0x80, 0x38, P_86, 0)
# 145 "./instruct.h"
ins (RCL, rcl, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x10, P_86, 0) insn(RCL, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x10, P_86, 0) insn(RCL, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x10, P_186, 0)
ins (RCR, rcr, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x18, P_86, 0) insn(RCR, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x18, P_86, 0) insn(RCR, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x18, P_186, 0)
ins (ROL, rol, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x00, P_86, 0) insn(ROL, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x00, P_86, 0) insn(ROL, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x00, P_186, 0)
ins (ROR, ror, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x08, P_86, 0) insn(ROR, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x08, P_86, 0) insn(ROR, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x08, P_186, 0)
ins (SAL, sal, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x20, P_86, 0) insn(SAL, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x20, P_86, 0) insn(SAL, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x20, P_186, 0)
ins (SAR, sar, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x38, P_86, 0) insn(SAR, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x38, P_86, 0) insn(SAR, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x38, P_186, 0)
ins (SHL, shl, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x20, P_86, 0) insn(SHL, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x20, P_86, 0) insn(SHL, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x20, P_186, 0)
ins (SHR, shr, OpCls( R_MS, CL_ONLY, NONE ), 0, 0, 0, 0xD2, 0x28, P_86, 0) insn(SHR, 1, OpCls( R_MS, I_1, NONE ), 0, 0, 0, 0xD0, 0x28, P_86, 0) insn(SHR, 2, OpCls( R_MS, I8_U, NONE ), 0, 0, 0, 0xC0, 0x28, P_186, 0)





ins (CMPS, cmps, OpCls( MS, MS, NONE ), 0, 0, no_RM, 0xA6, 0x00, P_86, AP_REPxx)
ins (CMPSB, cmpsb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xA6, 0x00, P_86, AP_REPxx)
insn(CMPSB, 1, OpCls( M08, M08, NONE ), 0, 0, no_RM, 0xA6, 0x00, P_86, AP_REPxx)
ins (CMPSW, cmpsw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xA7, 0x00, P_86, AP_REPxx)
insn(CMPSW, 1, OpCls( M16, M16, NONE ), F_16, 0, no_RM, 0xA7, 0x00, P_86, AP_REPxx)
ins (CMPSD, cmpsd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xA7, 0x00, P_386, AP_REPxx)
insn(CMPSD, 1, OpCls( M32, M32, NONE ), F_32, 0, no_RM, 0xA7, 0x00, P_386, AP_REPxx)
insn(CMPSD, 2, OpCls( XMM, XMM_M64, I8_U ), F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2,0)
ins (INS, ins, OpCls( MS, DX_ONLY, NONE ), 0, 0, no_RM, 0x6C, 0x00, P_186, AP_REP)
ins (INSB, insb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x6C, 0x00, P_186, AP_REP)
insn(INSB, 1, OpCls( M08, DX_ONLY, NONE ), 0, 0, no_RM, 0x6C, 0x00, P_186, AP_REP)
ins (INSW, insw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x6D, 0x00, P_186, AP_REP)
insn(INSW, 1, OpCls( M16, DX_ONLY, NONE ), F_16, 0, no_RM, 0x6D, 0x00, P_186, AP_REP)
ins (INSD, insd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x6D, 0x00, P_386, AP_REP)
insn(INSD, 1, OpCls( M32, DX_ONLY, NONE ), F_32, 0, no_RM, 0x6D, 0x00, P_386, AP_REP)
ins (LODS, lods, OpCls( MS, NONE, NONE ), 0, 0, no_RM, 0xAC, 0x00, P_86, AP_REP)
ins (LODSB, lodsb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xAC, 0x00, P_86, AP_REP)
insn(LODSB, 1, OpCls( M08, NONE, NONE ), 0, 0, no_RM, 0xAC, 0x00, P_86, AP_REP)
ins (LODSW, lodsw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xAD, 0x00, P_86, AP_REP)
insn(LODSW, 1, OpCls( M16, NONE, NONE ), F_16, 0, no_RM, 0xAD, 0x00, P_86, AP_REP)
ins (LODSD, lodsd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xAD, 0x00, P_386, AP_REP)
insn(LODSD, 1, OpCls( M32, NONE, NONE ), F_32, 0, no_RM, 0xAD, 0x00, P_386, AP_REP)
ins (MOVS, movs, OpCls( MS, MS, NONE ), 0, 0, no_RM, 0xA4, 0x00, P_86, AP_REP)
ins (MOVSB, movsb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xA4, 0x00, P_86, AP_REP)
insn(MOVSB, 1, OpCls( M08, M08, NONE ), 0, 0, no_RM, 0xA4, 0x00, P_86, AP_REP)
ins (MOVSW, movsw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xA5, 0x00, P_86, AP_REP)
insn(MOVSW, 1, OpCls( M16, M16, NONE ), F_16, 0, no_RM, 0xA5, 0x00, P_86, AP_REP)
ins (MOVSD, movsd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xA5, 0x00, P_386, AP_REP)
insn(MOVSD, 1, OpCls( M32, M32, NONE ), F_32, 0, no_RM, 0xA5, 0x00, P_386, AP_REP)
insn(MOVSD, 2, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x10, 0x00, P_686|P_SSE2,0)
insn(MOVSD, 3, OpCls( M64, XMM, NONE ), F_F20F, 0, no_WDS, 0x11, 0x00, P_686|P_SSE2,0)
ins (OUTS, outs, OpCls( DX_ONLY, MS, NONE ), 0, 0, no_RM, 0x6E, 0x00, P_186, AP_REP)
ins (OUTSB, outsb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x6E, 0x00, P_186, AP_REP)
insn(OUTSB, 1, OpCls( DX_ONLY, M08, NONE ), 0, 0, no_RM, 0x6E, 0x00, P_186, AP_REP)
ins (OUTSW, outsw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x6F, 0x00, P_186, AP_REP)
insn(OUTSW, 1, OpCls( DX_ONLY, M16, NONE ), F_16, 0, no_RM, 0x6F, 0x00, P_186, AP_REP)
ins (OUTSD, outsd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x6F, 0x00, P_386, AP_REP)
insn(OUTSD, 1, OpCls( DX_ONLY, M32, NONE ), F_32, 0, no_RM, 0x6F, 0x00, P_386, AP_REP)
ins (SCAS, scas, OpCls( MS, NONE, NONE ), 0, 0, no_RM, 0xAE, 0x00, P_86, AP_REPxx)
ins (SCASB, scasb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xAE, 0x00, P_86, AP_REPxx)
insn(SCASB, 1, OpCls( M08, NONE, NONE ), 0, 0, no_RM, 0xAE, 0x00, P_86, AP_REPxx)
ins (SCASW, scasw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xAF, 0x00, P_86, AP_REPxx)
insn(SCASW, 1, OpCls( M16, NONE, NONE ), F_16, 0, no_RM, 0xAF, 0x00, P_86, AP_REPxx)
ins (SCASD, scasd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xAF, 0x00, P_386, AP_REPxx)
insn(SCASD, 1, OpCls( M32, NONE, NONE ), F_32, 0, no_RM, 0xAF, 0x00, P_386, AP_REPxx)
ins (STOS, stos, OpCls( MS, NONE, NONE ), 0, 0, no_RM, 0xAA, 0x00, P_86, AP_REP)
ins (STOSB, stosb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xAA, 0x00, P_86, AP_REP)
insn(STOSB, 1, OpCls( M08, NONE, NONE ), 0, 0, no_RM, 0xAA, 0x00, P_86, AP_REP)
ins (STOSW, stosw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xAB, 0x00, P_86, AP_REP)
insn(STOSW, 1, OpCls( M16, NONE, NONE ), F_16, 0, no_RM, 0xAB, 0x00, P_86, AP_REP)
ins (STOSD, stosd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xAB, 0x00, P_386, AP_REP)
insn(STOSD, 1, OpCls( M32, NONE, NONE ), F_32, 0, no_RM, 0xAB, 0x00, P_386, AP_REP)



insx(AAA, aaa, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x37, 0x00, P_86, 0, RWF_IA32 )
insx(AAD, aad, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD5, 0x0A, P_86, 0, RWF_IA32 )
insx(AAM, aam, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD4, 0x0A, P_86, 0, RWF_IA32 )
insx(AAS, aas, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x3F, 0x00, P_86, 0, RWF_IA32 )
insx(DAA, daa, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x27, 0x00, P_86, 0, RWF_IA32 )
insx(DAS, das, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x2F, 0x00, P_86, 0, RWF_IA32 )
insx(LDS, lds, OpCls( RGT8, MFPTR, NONE ), 0, 1, no_WDS, 0xC5, 0x00, P_86, 0, RWF_IA32 )
insx(LES, les, OpCls( RGT8, MFPTR, NONE ), 0, 1, no_WDS, 0xC4, 0x00, P_86, 0, RWF_IA32 )
insx(POPA, popa, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x61, 0x00, P_186, 0, RWF_IA32 )
insx(POPAD, popad, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x61, 0x00, P_386, 0, RWF_IA32 )
insx(POPAW, popaw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x61, 0x00, P_186, 0, RWF_IA32 )
insx(POPFD, popfd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x9D, 0x00, P_386, 0, RWF_IA32 )
insx(PUSHA, pusha, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x60, 0x00, P_186, 0, RWF_IA32 )
insx(PUSHAD, pushad, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x60, 0x00, P_386, 0, RWF_IA32 )
insx(PUSHAW, pushaw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x60, 0x00, P_186, 0, RWF_IA32 )
insx(PUSHFD, pushfd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x9C, 0x00, P_386, 0, RWF_IA32 )
insx(PUSHD, pushd, OpCls( I8, NONE, NONE ), F_32, 0, no_RM, 0x6A, 0x00, P_386, 0, RWF_IA32 )
insn(PUSHD, 1, OpCls( I32, NONE, NONE ), F_32, 0, no_RM, 0x68, 0x00, P_386, 0)
insn(PUSHD, 2, OpCls( R32, NONE, NONE ), 0, 0, R_in_OP,0x50, 0x00, P_386, 0)
insn(PUSHD, 3, OpCls( SR86, NONE, NONE ), 0, 1, R_in_OP,0x06, 0x00, P_86, 0)
insn(PUSHD, 4, OpCls( SR, NONE, NONE ), F_0F, 1, R_in_OP,0x80, 0x00, P_386, 0)
insn(PUSHD, 5, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xFF, 0x30, P_386, 0)

insx(RETD, retd, OpCls( I16, NONE, NONE ), F_32, 0, no_RM, 0xCA, 0x00, P_386, 0, RWF_IA32 )
insn(RETD, 1, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xCB, 0x00, P_386, 0)
insx(RETW, retw, OpCls( I16, NONE, NONE ), F_16, 0, no_RM, 0xCA, 0x00, P_86, 0, RWF_IA32 )
insn(RETW, 1, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xCB, 0x00, P_86, 0)






ins (ARPL, arpl, OpCls( R16_M16, R16, NONE ), 0, 0, no_WDS, 0x63, 0x00, P_286, 0)
ins (LLDT, lldt, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x10, P_286p, 0)
ins (LMSW, lmsw, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x01, 0x30, P_286p, 0)
ins (LTR, ltr, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x18, P_286p, 0)
ins (SLDT, sldt, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x00, P_286, 0)
ins (SMSW, smsw, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x01, 0x20, P_286, 0)
ins (STR, str, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x08, P_286, 0)
ins (VERR, verr, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x20, P_286, 0)
ins (VERW, verw, OpCls( R16_M16, NONE, NONE ), F_0FNO66,0, no_WDS, 0x00, 0x28, P_286, 0)
# 268 "./instruct.h"
ins (DIV, div, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x30, P_86, 0)
insn(DIV, 1, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x30, P_86, 0)
insn(DIV, 2, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x30, P_86, 0)
ins (IDIV, idiv, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x38, P_86, 0)
insn(IDIV, 1, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x38, P_86, 0)
insn(IDIV, 2, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x38, P_86, 0)
ins (MUL, mul, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x20, P_86, 0)
insn(MUL, 1, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x20, P_86, 0)
insn(MUL, 2, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x20, P_86, 0)
ins (NEG, neg, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x18, P_86, 0)
insn(NEG, 1, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x18, P_86, AP_LOCK)
insn(NEG, 2, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x18, P_86, AP_LOCK)
ins (NOT, not, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x10, P_86, 0)
insn(NOT, 1, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x10, P_86, AP_LOCK)
insn(NOT, 2, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x10, P_86, AP_LOCK)


ins (LOCK, lock, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF0, 0, P_86, AP_LOCK)
ins (REP, rep, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF3, 0, P_86, AP_REP)
ins (REPE, repe, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF3, 0, P_86, AP_REPxx)
ins (REPNE, repne, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF2, 0, P_86, AP_REPxx)
ins (REPNZ, repnz, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF2, 0, P_86, AP_REPxx)
ins (REPZ, repz, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF3, 0, P_86, AP_REPxx)



ins (BT, bt, OpCls( RGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xA3, 0x00, P_386, 0)
insn(BT, 1, OpCls( RGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x20, P_386, 0)
insn(BT, 2, OpCls( MGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xA3, 0x00, P_386, 0)
insn(BT, 3, OpCls( MGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x20, P_386, 0)
ins (BTC, btc, OpCls( RGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xBB, 0x00, P_386, 0)
insn(BTC, 1, OpCls( RGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x38, P_386, 0)
insn(BTC, 2, OpCls( MGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xBB, 0x00, P_386, AP_LOCK)
insn(BTC, 3, OpCls( MGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x38, P_386, AP_LOCK)
ins (BTR, btr, OpCls( RGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xB3, 0x00, P_386, 0)
insn(BTR, 1, OpCls( RGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x30, P_386, 0)
insn(BTR, 2, OpCls( MGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xB3, 0x00, P_386, AP_LOCK)
insn(BTR, 3, OpCls( MGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x30, P_386, AP_LOCK)
ins (BTS, bts, OpCls( RGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xAB, 0x00, P_386, 0)
insn(BTS, 1, OpCls( RGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x28, P_386, 0)
insn(BTS, 2, OpCls( MGT8, RGT8, NONE ), F_0F, 0, no_WDS, 0xAB, 0x00, P_386, AP_LOCK)
insn(BTS, 3, OpCls( MGT8, I8_U, NONE ), F_0F, 0, no_WDS, 0xBA, 0x28, P_386, AP_LOCK)



ins (CMC, cmc, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF5, 0x00, P_86, 0)
ins (CLC, clc, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF8, 0x00, P_86, 0)
ins (STC, stc, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF9, 0x00, P_86, 0)
ins (CLI, cli, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xFA, 0x00, P_86, 0)
ins (STI, sti, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xFB, 0x00, P_86, 0)
ins (CLD, cld, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xFC, 0x00, P_86, 0)
ins (STD, std, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xFD, 0x00, P_86, 0)



ins (INC, inc, OpCls( RGT8, NONE, NONE ), 0, 0, R_in_OP,0x40, 0x00, P_86, 0)
insn(INC, 1, OpCls( R, NONE, NONE ), 0, 0, 0, 0xFE, 0x00, P_86, 0)
insn(INC, 2, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xFE, 0x00, P_86, AP_LOCK)
insn(INC, 3, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xFF, 0x00, P_86, AP_LOCK)
ins (DEC, dec, OpCls( RGT8, NONE, NONE ), 0, 0, R_in_OP,0x48, 0x00, P_86, 0)
insn(DEC, 1, OpCls( R, NONE, NONE ), 0, 0, 0, 0xFE, 0x08, P_86, 0)
insn(DEC, 2, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xFE, 0x08, P_86, AP_LOCK)
insn(DEC, 3, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xFF, 0x08, P_86, AP_LOCK)



ins (PUSH, push, OpCls( R16_R32, NONE, NONE ), 0, 0, R_in_OP,0x50, 0x00, P_86, 0)
insn(PUSH, 1, OpCls( I8, NONE, NONE ), 0, 0, no_RM, 0x6A, 0x00, P_186, 0)
insn(PUSH, 2, OpCls( I, NONE, NONE ), 0, 0, no_RM, 0x68, 0x00, P_186, 0)
insn(PUSH, 3, OpCls( SR86, NONE, NONE ), 0, 1, R_in_OP,0x06, 0x00, P_86, 0)
insn(PUSH, 4, OpCls( SR, NONE, NONE ), F_0F, 1, R_in_OP,0x80, 0x00, P_386, 0)
insn(PUSH, 5, OpCls( M16_M32, NONE, NONE ), 0, 0, 0, 0xFF, 0x30, P_86, 0)
ins (POP, pop, OpCls( R16_R32, NONE, NONE ), 0, 0, R_in_OP,0x58, 0x00, P_86, 0)
insn(POP, 1, OpCls( SR86, NONE, NONE ), 0, 1, R_in_OP,0x07, 0x00, P_86, 0)
insn(POP, 2, OpCls( SR, NONE, NONE ), F_0F, 1, R_in_OP,0x81, 0x00, P_386, 0)
insn(POP, 3, OpCls( M16_M32, NONE, NONE ), 0, 0, 0, 0x8F, 0x00, P_86, 0)
ins (PUSHW, pushw, OpCls( I8, NONE, NONE ), F_16, 0, no_RM, 0x6A, 0x00, P_186, 0)
insn(PUSHW, 1, OpCls( I16, NONE, NONE ), F_16, 0, no_RM, 0x68, 0x00, P_186, 0)
ins (PUSHF, pushf, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x9C, 0x00, P_86, 0)
ins (POPF, popf, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x9D, 0x00, P_86, 0)



ins (MOV, mov, OpCls( A, MS, NONE ), 0, 1, no_RM, 0xA0, 0x00, P_86, 0)
insn(MOV, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x8A, 0x00, P_86, 0)
insn(MOV, 2, OpCls( R8, I, NONE ), 0, 0, R_in_OP,0xB0, 0x00, P_86, 0)
insn(MOV, 3, OpCls( R16_R32, I, NONE ), 0, 0, R_in_OP,0xB8, 0x00, P_86, 0)

insn(MOV, 4, OpCls( R64, I, NONE ), 0, 0, 0, 0xC6, 0x00, P_64, 0)
insn(MOV, 5, OpCls( R64, I64, NONE ), 0, 0, R_in_OP,0xB8, 0x00, P_64, 0)

insn(MOV, 6, OpCls( RGT8, SR, NONE ), 0, 0, no_WDS, 0x8C, 0xC0, P_86, 0)
insn(MOV, 7, OpCls( SR, RGT8, NONE ), 0, 1, no_WDS, 0x8E, 0xC0, P_86, 0)
insn(MOV, 8, OpCls( SR, MS, NONE ), 0, 1, no_WDS, 0x8E, 0x00, P_86, 0)
insn(MOV, 9, OpCls( MS, A, NONE ), 0, 0, no_RM, 0xA2, 0x00, P_86, 0)
insn(MOV, 10, OpCls( MS, R, NONE ), 0, 0, 0, 0x88, 0x00, P_86, 0)
insn(MOV, 11, OpCls( MS, I, NONE ), 0, 0, 0, 0xC6, 0x00, P_86, 0)
insn(MOV, 12, OpCls( MS, SR, NONE ), 0, 0, no_WDS, 0x8C, 0x00, P_86, 0)
insn(MOV, 13, OpCls( RGT16, RSPEC, NONE ), F_0FNO66,0, no_WDS, 0x20, 0xC0, P_386, 0)
insn(MOV, 14, OpCls( RSPEC, RGT16, NONE ), F_0FNO66,1, no_WDS, 0x22, 0xC0, P_386, 0)



ins (BOUND_, bound, OpCls( RGT8, MS, NONE ), 0, 1, no_WDS, 0x62, 0x00, P_186, 0)
ins (BSF, bsf, OpCls( RGT8, RGT8_MS, NONE ), F_0F, 1, no_WDS, 0xBC, 0x00, P_386, 0)
ins (BSR, bsr, OpCls( RGT8, RGT8_MS, NONE ), F_0F, 1, no_WDS, 0xBD, 0x00, P_386, 0)
ins (BSWAP, bswap, OpCls( RGT16, NONE, NONE ), F_0F, 0, R_in_OP,0xC8, 0x00, P_486, 0)
ins (CBW, cbw, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x98, 0x00, P_86, 0)
ins (CDQ, cdq, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x99, 0x00, P_386, 0)
ins (CWD, cwd, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0x99, 0x00, P_86, 0)
ins (CWDE, cwde, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0x98, 0x00, P_386, 0)
ins (CLTS, clts, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0x0F, 0x06, P_286p, 0)
ins (CMPXCHG, cmpxchg, OpCls( R, R, NONE ), F_0F, 0, 0, 0xB0, 0x00, P_486, 0)
insn(CMPXCHG, 1, OpCls( MS, R, NONE ), F_0F, 0, 0, 0xB0, 0x00, P_486, AP_LOCK)
ins (CMPXCHG8B, cmpxchg8b, OpCls( M64, NONE, NONE ), F_0F, 0, 0, 0xC7, 0x08, P_586, AP_LOCK)
ins (CPUID, cpuid, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0x0F, 0xA2, P_586, 0)
ins (ENTER, enter, OpCls( I16, I8_U, NONE ), 0, 0, no_RM, 0xC8, 0x00, P_186, 0)
ins (HLT, hlt, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xF4, 0x00, P_86, 0)
ins (IMUL, imul, OpCls( R, NONE, NONE ), 0, 0, 0, 0xF6, 0x28, P_86, 0)
insn(IMUL, 2, OpCls( M08, NONE, NONE ), 0, 0, 0, 0xF6, 0x28, P_86, 0)
insn(IMUL, 3, OpCls( MGT8, NONE, NONE ), 0, 0, 0, 0xF7, 0x28, P_86, 0)
insn(IMUL, 4, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0xAF, 0x00, P_386, 0)
insn(IMUL, 6, OpCls( RGT8, I8, NONE ), 0, 1, no_WDS, 0x6B, 0x00, P_186, 0)
insn(IMUL, 7, OpCls( RGT8, I, NONE ), 0, 1, no_WDS, 0x69, 0x00, P_186, 0)
insn(IMUL, 8, OpCls( RGT8, R_MS, I8_U ), 0, 1, no_WDS, 0x6B, 0x00, P_186, 0)
insn(IMUL, 9, OpCls( RGT8, R_MS, I ), 0, 1, no_WDS, 0x69, 0x00, P_186, 0)
ins (IN, in, OpCls( A, DX_ONLY, NONE ), 0, 0, no_RM, 0xEC, 0x00, P_86, 0)
insn(IN, 1, OpCls( A, I8_U, NONE ), 0, 0, no_RM, 0xE4, 0x00, P_86, 0)
ins (INT, int, OpCls( I_3, NONE, NONE ), 0, 0, no_RM, 0xCC, 0x00, P_86, 0)
insn(INT, 1, OpCls( I8_U, NONE, NONE ), 0, 0, no_RM, 0xCD, 0x00, P_86, 0)
ins (INTO, into, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xCE, 0x00, P_86, 0)
ins (INVD, invd, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x08, 0x00, P_486, 0)
ins (INVLPG, invlpg, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x38, P_486, 0)
ins (IRET, iret, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xCF, 0x00, P_86, 0)
ins (IRETD, iretd, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xCF, 0x00, P_386, 0)



ins (IRETF, iretf, OpCls( NONE, NONE, NONE ), F_16, 0, no_RM, 0xCF, 0x00, P_86, 0)
ins (IRETDF, iretdf, OpCls( NONE, NONE, NONE ), F_32, 0, no_RM, 0xCF, 0x00, P_386, 0)
ins (LAHF, lahf, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9F, 0x00, P_86, 0)
ins (LAR, lar, OpCls( RGT8, RGT8_MS, NONE ), F_0F, 1, no_WDS, 0x02, 0x00, P_286, 0)
ins (LSL, lsl, OpCls( RGT8, RGT8_MS, NONE ), F_0F, 1, no_WDS, 0x03, 0x00, P_286, 0)
ins (LEA, lea, OpCls( RGT8, MS, NONE ), 0, 1, no_WDS, 0x8D, 0x00, P_86, 0)
ins (LEAVE, leave, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xC9, 0x00, P_186, 0)
ins (LFS, lfs, OpCls( RGT8, MFPTR, NONE ), F_0F, 1, no_WDS, 0xB4, 0x00, P_386, 0)
ins (LGS, lgs, OpCls( RGT8, MFPTR, NONE ), F_0F, 1, no_WDS, 0xB5, 0x00, P_386, 0)
ins (LSS, lss, OpCls( RGT8, MFPTR, NONE ), F_0F, 1, no_WDS, 0xB2, 0x00, P_386, 0)
ins (LGDT, lgdt, OpCls( M48, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x10, P_286p, 0)
ins (LIDT, lidt, OpCls( M48, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x18, P_286p, 0)
ins (MOVSX, movsx, OpCls( RGT8, R_MS, NONE ), F_0F, 1, 0, 0xBE, 0x00, P_386, 0)
ins (MOVZX, movzx, OpCls( RGT8, R_MS, NONE ), F_0F, 1, 0, 0xB6, 0x00, P_386, 0)
ins (NOP, nop, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x90, 0x00, P_86, 0)
ins (OUT, out, OpCls( DX_ONLY, A, NONE ), 0, 0, no_RM, 0xEE, 0x00, P_86, 0)
insn(OUT, 1, OpCls( I8_U, A, NONE ), 0, 0, no_RM, 0xE6, 0x00, P_86, 0)

ins (RDMSR, rdmsr, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x32, 0x00, P_586, 0)

ins (RDPMC, rdpmc, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x33, 0x00, P_586, 0)
ins (RDTSC, rdtsc, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x31, 0x00, P_586, 0)
ins (RDTSCP, rdtscp, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0xF9, P_686, 0)
ins (RET, ret, OpCls( I16, NONE, NONE ), 0, 0, no_RM, 0xC2, 0x00, P_86, 0)
insn(RET, 1, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xC3, 0x00, P_86, 0)
ins (RETN, retn, OpCls( I16, NONE, NONE ), 0, 0, no_RM, 0xC2, 0x00, P_86, 0)
insn(RETN, 1, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xC3, 0x00, P_86, 0)
ins (RETF, retf, OpCls( I16, NONE, NONE ), 0, 0, no_RM, 0xCA, 0x00, P_86, 0)
insn(RETF, 1, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xCB, 0x00, P_86, 0)
ins (RSM, rsm, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0xAA, 0x00, P_586, 0)
ins (SAHF, sahf, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9E, 0x00, P_86, 0)
ins (SGDT, sgdt, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x00, P_286, 0)
ins (SIDT, sidt, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0x08, P_286, 0)
ins (SHLD, shld, OpCls( RGT8_MGT8,RGT8, CL ), F_0F, 0, no_WDS, 0xA5, 0x00, P_386, 0)
insn(SHLD, 1, OpCls( RGT8_MGT8,RGT8, I8_U ), F_0F, 0, no_WDS, 0xA4, 0x00, P_386, 0)
ins (SHRD, shrd, OpCls( RGT8_MGT8,RGT8, CL ), F_0F, 0, no_WDS, 0xAD, 0x00, P_386, 0)
insn(SHRD, 1, OpCls( RGT8_MGT8,RGT8, I8_U ), F_0F, 0, no_WDS, 0xAC, 0x00, P_386, 0)
ins (SYSENTER, sysenter, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x34, 0x00, P_686, 0)
ins (SYSEXIT, sysexit, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x35, 0x00, P_686p, 0)
ins (TEST, test, OpCls( A, I, NONE ), 0, 0, no_RM, 0xA8, 0x00, P_86, 0)
insn(TEST, 1, OpCls( R, R_MS, NONE ), 0, 1, 0, 0x84, 0x00, P_86, 0)
insn(TEST, 3, OpCls( R_MS, I, NONE ), 0, 0, 0, 0xF6, 0x00, P_86, 0)
insn(TEST, 4, OpCls( MS, R, NONE ), 0, 0, 0, 0x84, 0x00, P_86, 0)
ins (UD2, ud2, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x0B, 0x00, P_686, 0)
ins (WAIT, wait, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9B, 0x00, P_86, 0)
ins (WBINVD, wbinvd, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x09, 0x00, P_486, 0)
ins (WRMSR, wrmsr, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x30, 0x00, P_586, 0)
ins (XADD, xadd, OpCls( R, R, NONE ), F_0F, 0, 0, 0xC0, 0x00, P_486, 0)
insn(XADD, 1, OpCls( MS, R, NONE ), F_0F, 0, 0, 0xC0, 0x00, P_486, AP_LOCK)
ins (XCHG, xchg, OpCls( A, RGT8, NONE ), 0, 0, R_in_OP,0x90, 0x00, P_86, 0)
insn(XCHG, 1, OpCls( RGT8, A, NONE ), 0, 0, R_in_OP,0x90, 0x00, P_86, 0)
insn(XCHG, 2, OpCls( R, R, NONE ), 0, 1, 0, 0x86, 0x00, P_86, 0)
insn(XCHG, 3, OpCls( R, MS, NONE ), 0, 1, 0, 0x86, 0x00, P_86, AP_LOCK)
insn(XCHG, 4, OpCls( MS, R, NONE ), 0, 0, 0, 0x86, 0x00, P_86, AP_LOCK)
ins (XLAT, xlat, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xD7, 0x00, P_86, 0)
insn(XLAT, 1, OpCls( M08, NONE, NONE ), 0, 0, no_RM, 0xD7, 0x00, P_86, 0)
ins (XLATB, xlatb, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0xD7, 0x00, P_86, 0)
insn(XLATB, 1, OpCls( M08, NONE, NONE ), 0, 0, no_RM, 0xD7, 0x00, P_86, 0)

ins (SETA, seta, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x97, 0x00, P_386, 0)
ins (SETAE, setae, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x93, 0x00, P_386, 0)
ins (SETB, setb, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x92, 0x00, P_386, 0)
ins (SETBE, setbe, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x96, 0x00, P_386, 0)
ins (SETC, setc, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x92, 0x00, P_386, 0)
ins (SETE, sete, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x94, 0x00, P_386, 0)
ins (SETG, setg, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9F, 0x00, P_386, 0)
ins (SETGE, setge, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9D, 0x00, P_386, 0)
ins (SETL, setl, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9C, 0x00, P_386, 0)
ins (SETLE, setle, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9E, 0x00, P_386, 0)
ins (SETNA, setna, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x96, 0x00, P_386, 0)
ins (SETNAE,setnae, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x92, 0x00, P_386, 0)
ins (SETNB, setnb, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x93, 0x00, P_386, 0)
ins (SETNBE,setnbe, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x97, 0x00, P_386, 0)
ins (SETNC, setnc, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x93, 0x00, P_386, 0)
ins (SETNE, setne, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x95, 0x00, P_386, 0)
ins (SETNG, setng, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9E, 0x00, P_386, 0)
ins (SETNGE,setnge, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9C, 0x00, P_386, 0)
ins (SETNL, setnl, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9D, 0x00, P_386, 0)
ins (SETNLE,setnle, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9F, 0x00, P_386, 0)
ins (SETNO, setno, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x91, 0x00, P_386, 0)
ins (SETNP, setnp, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9B, 0x00, P_386, 0)
ins (SETNS, setns, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x99, 0x00, P_386, 0)
ins (SETNZ, setnz, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x95, 0x00, P_386, 0)
ins (SETO, seto, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x90, 0x00, P_386, 0)
ins (SETP, setp, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9A, 0x00, P_386, 0)
ins (SETPE, setpe, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9A, 0x00, P_386, 0)
ins (SETPO, setpo, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x9B, 0x00, P_386, 0)
ins (SETS, sets, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x98, 0x00, P_386, 0)
ins (SETZ, setz, OpCls( R8_M08, NONE, NONE ), F_0F, 0, no_WDS, 0x94, 0x00, P_386, 0)




ins (CMOVA, cmova, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x7,0x00, P_686, 0)
ins (CMOVAE, cmovae, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x3,0x00, P_686, 0)
ins (CMOVB, cmovb, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x2,0x00, P_686, 0)
ins (CMOVBE, cmovbe, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x6,0x00, P_686, 0)
ins (CMOVC, cmovc, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x2,0x00, P_686, 0)
ins (CMOVE, cmove, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x4,0x00, P_686, 0)
ins (CMOVG, cmovg, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xf,0x00, P_686, 0)
ins (CMOVGE, cmovge, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xd,0x00, P_686, 0)
ins (CMOVL, cmovl, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xc,0x00, P_686, 0)
ins (CMOVLE, cmovle, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xe,0x00, P_686, 0)
ins (CMOVNA, cmovna, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x6,0x00, P_686, 0)
ins (CMOVNAE, cmovnae, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x2,0x00, P_686, 0)
ins (CMOVNB, cmovnb, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x3,0x00, P_686, 0)
ins (CMOVNBE, cmovnbe, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x7,0x00, P_686, 0)
ins (CMOVNC, cmovnc, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x3,0x00, P_686, 0)
ins (CMOVNE, cmovne, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x5,0x00, P_686, 0)
ins (CMOVNG, cmovng, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xe,0x00, P_686, 0)
ins (CMOVNGE, cmovnge, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xc,0x00, P_686, 0)
ins (CMOVNL, cmovnl, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xd,0x00, P_686, 0)
ins (CMOVNLE, cmovnle, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xf,0x00, P_686, 0)
ins (CMOVNO, cmovno, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x1,0x00, P_686, 0)
ins (CMOVNP, cmovnp, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xb,0x00, P_686, 0)
ins (CMOVNS, cmovns, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x9,0x00, P_686, 0)
ins (CMOVNZ, cmovnz, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x5,0x00, P_686, 0)
ins (CMOVO, cmovo, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x0,0x00, P_686, 0)
ins (CMOVP, cmovp, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xa,0x00, P_686, 0)
ins (CMOVPE, cmovpe, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xa,0x00, P_686, 0)
ins (CMOVPO, cmovpo, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0xb,0x00, P_686, 0)
ins (CMOVS, cmovs, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x8,0x00, P_686, 0)
ins (CMOVZ, cmovz, OpCls( RGT8, R_MS, NONE ), F_0F, 1, no_WDS, 0x40+0x4,0x00, P_686, 0)





ins (FCMOVB, fcmovb, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDA, 0xC0, P_686, 0)
ins (FCMOVBE, fcmovbe, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDA, 0xD0, P_686, 0)
ins (FCMOVE, fcmove, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDA, 0xC8, P_686, 0)
ins (FCMOVNB, fcmovnb, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xC0, P_686, 0)
ins (FCMOVNBE, fcmovnbe, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xD0, P_686, 0)
ins (FCMOVNE, fcmovne, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xC8, P_686, 0)
ins (FCMOVNU, fcmovnu, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xD8, P_686, 0)
ins (FCMOVU, fcmovu, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDA, 0xD8, P_686, 0)

ins (FCOM, fcom, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xD8, 0xD0, P_87, 0)
insn(FCOM, 1, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x10, P_87, 0)
insn(FCOM, 2, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x10, P_87, 0)
insn(FCOM, 3, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD8, 0xD1, P_87, 0)
ins (FCOMP, fcomp, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xD8, 0xD8, P_87, 0)
insn(FCOMP, 1, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x18, P_87, 0)
insn(FCOMP, 2, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x18, P_87, 0)
insn(FCOMP, 3, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD8, 0xD9, P_87, 0)
ins (FCOMPP, fcompp, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xD9, P_87, 0)

ins (FUCOM, fucom, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDD, 0xE0, P_387, 0)
insn(FUCOM, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDD, 0xE1, P_387, 0)
ins (FUCOMP, fucomp, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDD, 0xE8, P_387, 0)
insn(FUCOMP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDD, 0xE9, P_387, 0)
ins (FUCOMPP, fucompp, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDA, 0xE9, P_387, 0)
ins (FCOMI, fcomi, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xF0, P_686, 0)
ins (FCOMIP, fcomip, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDF, 0xF0, P_686, 0)
ins (FUCOMI, fucomi, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDB, 0xE8, P_686, 0)
ins (FUCOMIP, fucomip, OpCls( ST, STI, NONE ), 0, 0, 0, 0xDF, 0xE8, P_686, 0)


ins (FADD, fadd, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xC0, P_87, 0)
insn(FADD, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xC0, P_87, 0)
insn(FADD, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x00, P_87, 0)
insn(FADD, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x00, P_87, 0)
insn(FADD, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xC1, P_87, 0)
ins (FADDP, faddp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xC0, P_87, 0)
insn(FADDP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xC1, P_87, 0)
ins (FMUL, fmul, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xC8, P_87, 0)
insn(FMUL, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xC8, P_87, 0)
insn(FMUL, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x08, P_87, 0)
insn(FMUL, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x08, P_87, 0)
insn(FMUL, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xC9, P_87, 0)
ins (FMULP, fmulp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xC8, P_87, 0)
insn(FMULP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xC9, P_87, 0)

ins (FDIV, fdiv, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xF0, P_87, 0)
insn(FDIV, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xF8, P_87, 0)
insn(FDIV, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x30, P_87, 0)
insn(FDIV, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x30, P_87, 0)
insn(FDIV, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xF9, P_87, 0)
ins (FDIVP, fdivp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xF8, P_87, 0)
insn(FDIVP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xF9, P_87, 0)
ins (FDIVR, fdivr, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xF8, P_87, 0)
insn(FDIVR, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xF0, P_87, 0)
insn(FDIVR, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x38, P_87, 0)
insn(FDIVR, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x38, P_87, 0)
insn(FDIVR, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xF1, P_87, 0)
ins (FDIVRP, fdivrp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xF0, P_87, 0)
insn(FDIVRP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xF1, P_87, 0)
ins (FSUB, fsub, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xE0, P_87, 0)
insn(FSUB, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xE8, P_87, 0)
insn(FSUB, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x20, P_87, 0)
insn(FSUB, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x20, P_87, 0)
insn(FSUB, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xE9, P_87, 0)
ins (FSUBP, fsubp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xE8, P_87, 0)
insn(FSUBP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xE9, P_87, 0)
ins (FSUBR, fsubr, OpCls( ST, STI, NONE ), 0, 0, 0, 0xD8, 0xE8, P_87, 0)
insn(FSUBR, 1, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDC, 0xE0, P_87, 0)
insn(FSUBR, 2, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD8, 0x28, P_87, 0)
insn(FSUBR, 3, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDC, 0x28, P_87, 0)
insn(FSUBR, 4, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xE1, P_87, 0)
ins (FSUBRP, fsubrp, OpCls( STI, ST, NONE ), 0, 0, 0, 0xDE, 0xE0, P_87, 0)
insn(FSUBRP, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDE, 0xE1, P_87, 0)

ins (FIADD, fiadd, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x00, P_87, 0)
insn(FIADD, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x00, P_87, 0)
ins (FICOM, ficom, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x10, P_87, 0)
insn(FICOM, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x10, P_87, 0)
ins (FICOMP, ficomp, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x18, P_87, 0)
insn(FICOMP, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x18, P_87, 0)
ins (FIDIV, fidiv, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x30, P_87, 0)
insn(FIDIV, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x30, P_87, 0)
ins (FIDIVR, fidivr, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x38, P_87, 0)
insn(FIDIVR, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x38, P_87, 0)
ins (FIMUL, fimul, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x08, P_87, 0)
insn(FIMUL, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x08, P_87, 0)
ins (FISUB, fisub, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x20, P_87, 0)
insn(FISUB, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x20, P_87, 0)
ins (FISUBR, fisubr, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDA, 0x28, P_87, 0)
insn(FISUBR, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDE, 0x28, P_87, 0)

ins (FILD, fild, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDB, 0x00, P_87, 0)
insn(FILD, 1, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDF, 0x28, P_87, 0)
insn(FILD, 2, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDF, 0x00, P_87, 0)
ins (FISTP, fistp, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDB, 0x18, P_87, 0)
insn(FISTP, 1, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDF, 0x38, P_87, 0)
insn(FISTP, 2, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDF, 0x18, P_87, 0)
ins (FIST, fist, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xDB, 0x10, P_87, 0)
insn(FIST, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDF, 0x10, P_87, 0)

ins (FLD, fld, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xD9, 0xC0, P_87, 0)
insn(FLD, 1, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD9, 0x00, P_87, 0)
insn(FLD, 2, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDD, 0x00, P_87, 0)
insn(FLD, 3, OpCls( M80, NONE, NONE ), 0, 0, 0, 0xDB, 0x28, P_87, 0)
ins (FSTP, fstp, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDD, 0xD8, P_87, 0)
insn(FSTP, 1, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD9, 0x18, P_87, 0)
insn(FSTP, 2, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDD, 0x18, P_87, 0)
insn(FSTP, 3, OpCls( M80, NONE, NONE ), 0, 0, 0, 0xDB, 0x38, P_87, 0)
ins (FST, fst, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDD, 0xD0, P_87, 0)
insn(FST, 1, OpCls( M32, NONE, NONE ), 0, 0, 0, 0xD9, 0x10, P_87, 0)
insn(FST, 2, OpCls( M64, NONE, NONE ), 0, 0, 0, 0xDD, 0x10, P_87, 0)

ins (FLDENV, fldenv, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xD9, 0x20, P_87, 0)
ins (FLDENVD, fldenvd, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xD9, 0x20, P_387, 0)
ins (FLDENVW, fldenvw, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xD9, 0x20, P_87, 0)
ins (FNSAVE, fnsave, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xDD, 0x30, P_87, AP_NO_FWAIT)
ins (FNSAVED, fnsaved, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xDD, 0x30, P_387, AP_NO_FWAIT)
ins (FNSAVEW, fnsavew, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xDD, 0x30, P_87, AP_NO_FWAIT)
ins (FNSTENV, fnstenv, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xD9, 0x30, P_87, AP_NO_FWAIT)
ins (FNSTENVD, fnstenvd, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xD9, 0x30, P_387, AP_NO_FWAIT)
ins (FNSTENVW, fnstenvw, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xD9, 0x30, P_87, AP_NO_FWAIT)
ins (FRSTOR, frstor, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xDD, 0x20, P_87, 0)
ins (FRSTORD, frstord, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xDD, 0x20, P_387, 0)
ins (FRSTORW, frstorw, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xDD, 0x20, P_87, 0)
ins (FSAVE, fsave, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xDD, 0x30, P_87, AP_FWAIT)
ins (FSAVED, fsaved, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xDD, 0x30, P_387, AP_FWAIT)
ins (FSAVEW, fsavew, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xDD, 0x30, P_87, AP_FWAIT)
ins (FSTENV, fstenv, OpCls( M_ANY, NONE, NONE ), 0, 0, 0, 0xD9, 0x30, P_87, AP_FWAIT)
ins (FSTENVD, fstenvd, OpCls( M_ANY, NONE, NONE ), F_32, 0, 0, 0xD9, 0x30, P_387, AP_FWAIT)
ins (FSTENVW, fstenvw, OpCls( M_ANY, NONE, NONE ), F_16, 0, 0, 0xD9, 0x30, P_87, AP_FWAIT)

ins (FLDCW, fldcw, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xD9, 0x28, P_87, 0)
ins (FNSTCW, fnstcw, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xD9, 0x38, P_87, AP_NO_FWAIT)
ins (FNSTSW, fnstsw, OpCls( AX, NONE, NONE ), 0, 0, no_WDS, 0xDF, 0xE0, P_287, AP_NO_FWAIT)
insn(FNSTSW, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDD, 0x38, P_87, AP_NO_FWAIT)
ins (FSTCW, fstcw, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xD9, 0x38, P_87, AP_FWAIT)
ins (FSTSW, fstsw, OpCls( AX, NONE, NONE ), 0, 0, no_WDS, 0xDF, 0xE0, P_287, AP_FWAIT)
insn(FSTSW, 1, OpCls( M16, NONE, NONE ), 0, 0, 0, 0xDD, 0x38, P_87, AP_FWAIT)

ins (FCOS, fcos, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFF, P_387, 0)
ins (FPATAN, fpatan, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF3, P_87, 0)
ins (FPTAN, fptan, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF2, P_87, 0)
ins (FSIN, fsin, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFE, P_387, 0)
ins (FSINCOS, fsincos, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFB, P_387, 0)

ins (FINIT, finit, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE3, P_87, AP_FWAIT)
ins (FNINIT, fninit, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE3, P_87, AP_NO_FWAIT)
ins (FDISI, fdisi, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE1, P_87, AP_FWAIT)
ins (FNDISI, fndisi, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE1, P_87, AP_NO_FWAIT)
ins (FENI, feni, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE0, P_87, AP_FWAIT)
ins (FNENI, fneni, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE0, P_87, AP_NO_FWAIT)
ins (FCLEX, fclex, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE2, P_87, AP_FWAIT)
ins (FNCLEX, fnclex, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE2, P_87, AP_NO_FWAIT)

ins (F2XM1, f2xm1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF0, P_87, 0)
ins (FABS, fabs, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE1, P_87, 0)
ins (FBLD, fbld, OpCls( M80, NONE, NONE ), 0, 0, 0, 0xDF, 0x20, P_87, 0)
ins (FBSTP, fbstp, OpCls( M80, NONE, NONE ), 0, 0, 0, 0xDF, 0x30, P_87, 0)
ins (FCHS, fchs, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE0, P_87, 0)
ins (FLD1, fld1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE8, P_87, 0)
ins (FLDL2E, fldl2e, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xEA, P_87, 0)
ins (FLDL2T, fldl2t, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE9, P_87, 0)
ins (FLDLG2, fldlg2, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xEC, P_87, 0)
ins (FLDLN2, fldln2, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xED, P_87, 0)
ins (FLDPI, fldpi, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xEB, P_87, 0)
ins (FLDZ, fldz, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xEE, P_87, 0)
ins (FDECSTP, fdecstp, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF6, P_87, 0)
ins (FINCSTP, fincstp, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF7, P_87, 0)
ins (FFREE, ffree, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDD, 0xC0, P_87, 0)

ins (FFREEP, ffreep, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xDF, 0xC0, P_87, 0)
ins (FNOP, fnop, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xD0, P_87, 0)
ins (FPREM, fprem, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF8, P_87, 0)
ins (FPREM1, fprem1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF5, P_387, 0)
ins (FRNDINT, frndint, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFC, P_87, 0)
ins (FSCALE, fscale, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFD, P_87, 0)
ins (FSETPM, fsetpm, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xDB, 0xE4, P_287, 0)
ins (FSQRT, fsqrt, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xFA, P_87, 0)
ins (FTST, ftst, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE4, P_87, 0)
ins (FWAIT, fwait, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9B, 0x00, P_87, 0)
ins (FXAM, fxam, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xE5, P_87, 0)
ins (FXCH, fxch, OpCls( STI, NONE, NONE ), 0, 0, 0, 0xD9, 0xC8, P_87, 0)
insn(FXCH, 1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xC9, P_87, 0)
ins (FXRSTOR, fxrstor, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x08, P_686|P_SSE1,0)
ins (FXSAVE, fxsave, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x00, P_686|P_SSE1,0)
ins (FXTRACT, fxtract, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF4, P_87, 0)
ins (FYL2X, fyl2x, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF1, P_87, 0)
ins (FYL2XP1, fyl2xp1, OpCls( NONE, NONE, NONE ), 0, 0, 0, 0xD9, 0xF9, P_87, 0)



ins (EMMS, emms, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x77, 0x00, P_586|P_MMX, 0)
ins (CLFLUSH, clflush, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x38, P_686|P_SSE2,0)
ins (LDMXCSR, ldmxcsr, OpCls( M32, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x10, P_686|P_SSE1,0)
ins (STMXCSR, stmxcsr, OpCls( M32, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x18, P_686|P_SSE1,0)
ins (LFENCE, lfence, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0xE8, P_686|P_SSE2,0)
ins (MFENCE, mfence, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0xF0, P_686|P_SSE2,0)
ins (SFENCE, sfence, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0xF8, P_686|P_SSE1,0)
ins (PREFETCHNTA,prefetchnta, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x18, 0x00, P_686|P_SSE1,0)
ins (PREFETCHT0, prefetcht0, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x18, 0x08, P_686|P_SSE1,0)
ins (PREFETCHT1, prefetcht1, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x18, 0x10, P_686|P_SSE1,0)
ins (PREFETCHT2, prefetcht2, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x18, 0x18, P_686|P_SSE1,0)
ins (PAUSE, pause, OpCls( NONE, NONE, NONE ), F_F3, 0, no_RM, 0x90, 0x00, P_686|P_SSE2,0)
# 745 "./instruct.h"
ins ( ADDPD, addpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x58, 0x00, P_686|P_SSE2,0) ins ( ADDPS, addps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x58, 0x00, P_686|P_SSE1,0) ins ( ADDSD, addsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x58, 0x00, P_686|P_SSE2,0) ins ( ADDSS, addss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x58, 0x00, P_686|P_SSE1,0)
ins ( DIVPD, divpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x5E, 0x00, P_686|P_SSE2,0) ins ( DIVPS, divps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x5E, 0x00, P_686|P_SSE1,0) ins ( DIVSD, divsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x5E, 0x00, P_686|P_SSE2,0) ins ( DIVSS, divss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x5E, 0x00, P_686|P_SSE1,0)
ins ( MAXPD, maxpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x5F, 0x00, P_686|P_SSE2,0) ins ( MAXPS, maxps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x5F, 0x00, P_686|P_SSE1,0) ins ( MAXSD, maxsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x5F, 0x00, P_686|P_SSE2,0) ins ( MAXSS, maxss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x5F, 0x00, P_686|P_SSE1,0)
ins ( MINPD, minpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x5D, 0x00, P_686|P_SSE2,0) ins ( MINPS, minps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x5D, 0x00, P_686|P_SSE1,0) ins ( MINSD, minsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x5D, 0x00, P_686|P_SSE2,0) ins ( MINSS, minss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x5D, 0x00, P_686|P_SSE1,0)
ins ( MULPD, mulpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x59, 0x00, P_686|P_SSE2,0) ins ( MULPS, mulps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x59, 0x00, P_686|P_SSE1,0) ins ( MULSD, mulsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x59, 0x00, P_686|P_SSE2,0) ins ( MULSS, mulss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x59, 0x00, P_686|P_SSE1,0)
ins ( SQRTPD, sqrtpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x51, 0x00, P_686|P_SSE2,0) ins ( SQRTPS, sqrtps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x51, 0x00, P_686|P_SSE1,0) ins ( SQRTSD, sqrtsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x51, 0x00, P_686|P_SSE2,0) ins ( SQRTSS, sqrtss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x51, 0x00, P_686|P_SSE1,0)
ins ( SUBPD, subpd, OpCls( XMM, XMM_M128,NONE ), F_660F, 1, no_WDS, 0x5C, 0x00, P_686|P_SSE2,0) ins ( SUBPS, subps, OpCls( XMM, XMM_M128,NONE ), F_0F, 1, no_WDS, 0x5C, 0x00, P_686|P_SSE1,0) ins ( SUBSD, subsd, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x5C, 0x00, P_686|P_SSE2,0) ins ( SUBSS, subss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x5C, 0x00, P_686|P_SSE1,0)


ins (CMPPD, cmppd, OpCls( XMM, XMM_M128, I8_U ), F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2,0)
ins (CMPPS, cmpps, OpCls( XMM, XMM_M128, I8_U ), F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1,0)

ins (CMPSS, cmpss, OpCls( XMM, XMM_M32, I8_U ), F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1,0)
# 771 "./instruct.h"
ins (CMPEQPD, cmpeqpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPLTPD, cmpltpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPLEPD, cmplepd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPUNORDPD, cmpunordpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNEQPD, cmpneqpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNLTPD, cmpnltpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNLEPD, cmpnlepd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPORDPD, cmpordpd, OpCls( XMM, XMM_M128, HID ),F_660F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 )
ins (CMPEQPS, cmpeqps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPLTPS, cmpltps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPLEPS, cmpleps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPUNORDPS, cmpunordps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNEQPS, cmpneqps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNLTPS, cmpnltps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNLEPS, cmpnleps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPORDPS, cmpordps, OpCls( XMM, XMM_M128, HID ),F_0F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 )
ins (CMPEQSD, cmpeqsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPLTSD, cmpltsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPLESD, cmplesd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPUNORDSD, cmpunordsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNEQSD, cmpneqsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNLTSD, cmpnltsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPNLESD, cmpnlesd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 ) ins (CMPORDSD, cmpordsd, OpCls( XMM, XMM_M64, HID ),F_F20F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE2, 0 )
ins (CMPEQSS, cmpeqss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPLTSS, cmpltss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPLESS, cmpless, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPUNORDSS, cmpunordss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNEQSS, cmpneqss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNLTSS, cmpnltss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPNLESS, cmpnless, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 ) ins (CMPORDSS, cmpordss, OpCls( XMM, XMM_M32, HID ),F_F30F, 1, no_WDS, 0xC2, 0x00, P_686|P_SSE1, 0 )



ins (ANDNPD, andnpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x55, 0x00, P_686|P_SSE2,0)
ins (ANDNPS, andnps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x55, 0x00, P_686|P_SSE1,0)
ins (ANDPD, andpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x54, 0x00, P_686|P_SSE2,0)
ins (ANDPS, andps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x54, 0x00, P_686|P_SSE1,0)
ins (ORPD, orpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x56, 0x00, P_686|P_SSE2,0)
ins (ORPS, orps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x56, 0x00, P_686|P_SSE1,0)
ins (COMISD, comisd, OpCls( XMM, XMM_M64, NONE ), F_660F, 1, no_WDS, 0x2F, 0x00, P_686|P_SSE2,0)
ins (COMISS, comiss, OpCls( XMM, XMM_M32, NONE ), F_0F, 1, no_WDS, 0x2F, 0x00, P_686|P_SSE1,0)
ins (XORPD, xorpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x57, 0x00, P_686|P_SSE2,0)
ins (XORPS, xorps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x57, 0x00, P_686|P_SSE1,0)

ins (CVTPD2PI, cvtpd2pi, OpCls( MMX, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x2D, 0x00, P_686|P_SSE2,0)
ins (CVTPS2PI, cvtps2pi, OpCls( MMX, XMM_M64, NONE ), F_0F, 1, no_WDS, 0x2D, 0x00, P_686|P_SSE1,0)
ins (CVTSD2SI, cvtsd2si, OpCls( RGT16, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x2D, 0x00, P_686|P_SSE2,0)
ins (CVTSS2SI, cvtss2si, OpCls( RGT16, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x2D, 0x00, P_686|P_SSE1,0)
ins (CVTPI2PD, cvtpi2pd, OpCls( XMM, MMX_M64, NONE ), F_660F, 1, no_WDS, 0x2A, 0x00, P_686|P_SSE2,0)
ins (CVTPI2PS, cvtpi2ps, OpCls( XMM, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x2A, 0x00, P_686|P_SSE1,0)
ins (CVTSI2SD, cvtsi2sd, OpCls( XMM, RMGT16, NONE ), F_F20F, 1, no_WDS, 0x2A, 0x00, P_686|P_SSE2,0)
ins (CVTSI2SS, cvtsi2ss, OpCls( XMM, RMGT16, NONE ), F_F30F, 1, no_WDS, 0x2A, 0x00, P_686|P_SSE1,0)
ins (CVTTPD2PI, cvttpd2pi, OpCls( MMX, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x2C, 0x00, P_686|P_SSE2,0)
ins (CVTTPS2PI, cvttps2pi, OpCls( MMX, XMM_M64, NONE ), F_0F, 1, no_WDS, 0x2C, 0x00, P_686|P_SSE1,0)
ins (CVTTSD2SI, cvttsd2si, OpCls( RGT16, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x2C, 0x00, P_686|P_SSE2,0)
ins (CVTTSS2SI, cvttss2si, OpCls( RGT16, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x2C, 0x00, P_686|P_SSE1,0)

ins (CVTDQ2PS, cvtdq2ps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x5B, 0x00, P_686|P_SSE2,0)
ins (CVTPS2DQ, cvtps2dq, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x5B, 0x00, P_686|P_SSE2,0)
ins (CVTTPS2DQ, cvttps2dq, OpCls( XMM, XMM_M128, NONE ), F_F30F, 1, no_WDS, 0x5B, 0x00, P_686|P_SSE2,0)

ins (CVTPD2DQ, cvtpd2dq, OpCls( XMM, XMM_M128, NONE ), F_F20F, 1, no_WDS, 0xE6, 0x00, P_686|P_SSE2,0)
ins (CVTDQ2PD, cvtdq2pd, OpCls( XMM, XMM_M64, NONE ), F_F30F, 1, no_WDS, 0xE6, 0x00, P_686|P_SSE2,0)
ins (CVTTPD2DQ, cvttpd2dq, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE6, 0x00, P_686|P_SSE2,0)

ins (CVTPD2PS, cvtpd2ps, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x5A, 0x00, P_686|P_SSE2,0)
ins (CVTPS2PD, cvtps2pd, OpCls( XMM, XMM_M64, NONE ), F_0F, 1, no_WDS, 0x5A, 0x00, P_686|P_SSE2,0)
ins (CVTSD2SS, cvtsd2ss, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x5A, 0x00, P_686|P_SSE2,0)
ins (CVTSS2SD, cvtss2sd, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x5A, 0x00, P_686|P_SSE2,0)

ins (MASKMOVDQU, maskmovdqu, OpCls( XMM, XMM, NONE ), F_660F, 1, no_WDS, 0xF7, 0x00, P_686|P_SSE2,0)
ins (MASKMOVQ, maskmovq, OpCls( MMX, MMX, NONE ), F_0F, 1, no_WDS, 0xF7, 0x00, P_686|P_SSE1,0)


ins (MOVD, movd, OpCls( MMX, RMGT16, NONE ), F_0F, 1, no_WDS, 0x6E, 0x00, P_586|P_MMX, 0)
insn(MOVD, 1, OpCls( XMM, RMGT16, NONE ), F_660F, 1, no_WDS, 0x6E, 0x00, P_686|P_SSE2,0)




insn(MOVD, 2, OpCls( RMGT16, MMX, NONE ), F_0F, 0, no_WDS, 0x7E, 0x00, P_586|P_MMX, 0)
insn(MOVD, 3, OpCls( RMGT16, XMM, NONE ), F_660F, 0, no_WDS, 0x7E, 0x00, P_686|P_SSE2,0)

ins (MOVQ, movq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x6F, 0x00, P_586|P_MMX, 0)
insn(MOVQ, 1, OpCls( XMM, XMM_M64, NONE ), F_F30F, 1, no_WDS, 0x7E, 0x00, P_686|P_SSE2,0)




insn(MOVQ, 2, OpCls( M64, MMX, NONE ), F_0F, 0, no_WDS, 0x7F, 0x00, P_586|P_MMX, 0)
insn(MOVQ, 3, OpCls( M64, XMM, NONE ), F_660F, 0, no_WDS, 0xD6, 0x00, P_686|P_SSE2,0)


ins (MOVAPD, movapd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x28, 0x00, P_686|P_SSE2,0)
insn(MOVAPD, 1, OpCls( M128, XMM, NONE ), F_660F, 0, no_WDS, 0x29, 0x00, P_686|P_SSE2,0)
ins (MOVAPS, movaps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x28, 0x00, P_686|P_SSE1,0)
insn(MOVAPS, 1, OpCls( M128, XMM, NONE ), F_0F, 0, no_WDS, 0x29, 0x00, P_686|P_SSE1,0)
ins (MOVDQA, movdqa, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x6F, 0x00, P_686|P_SSE2,0)
insn(MOVDQA, 1, OpCls( M128, XMM, NONE ), F_660F, 0, no_WDS, 0x7F, 0x00, P_686|P_SSE2,0)
ins (MOVDQU, movdqu, OpCls( XMM, XMM_M128, NONE ), F_F30F, 1, no_WDS, 0x6F, 0x00, P_686|P_SSE2,0)
insn(MOVDQU, 1, OpCls( M128, XMM, NONE ), F_F30F, 0, no_WDS, 0x7F, 0x00, P_686|P_SSE2,0)
ins (MOVUPD, movupd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x10, 0x00, P_686|P_SSE2,0)
insn(MOVUPD, 1, OpCls( M128, XMM, NONE ), F_660F, 0, no_WDS, 0x11, 0x00, P_686|P_SSE2,0)
ins (MOVUPS, movups, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x10, 0x00, P_686|P_SSE1,0)
insn(MOVUPS, 1, OpCls( M128, XMM, NONE ), F_0F, 0, no_WDS, 0x11, 0x00, P_686|P_SSE1,0)

ins (MOVHPD, movhpd, OpCls( XMM, M64, NONE ), F_660F, 1, no_WDS, 0x16, 0x00, P_686|P_SSE2,0)
insn(MOVHPD, 1, OpCls( M64, XMM, NONE ), F_660F, 0, no_WDS, 0x17, 0x00, P_686|P_SSE2,0)
ins (MOVHPS, movhps, OpCls( XMM, M64, NONE ), F_0F, 1, no_WDS, 0x16, 0x00, P_686|P_SSE1,0)
insn(MOVHPS, 1, OpCls( M64, XMM, NONE ), F_0F, 0, no_WDS, 0x17, 0x00, P_686|P_SSE1,0)
ins (MOVLPD, movlpd, OpCls( XMM, M64, NONE ), F_660F, 1, no_WDS, 0x12, 0x00, P_686|P_SSE2,0)
insn(MOVLPD, 1, OpCls( M64, XMM, NONE ), F_660F, 0, no_WDS, 0x13, 0x00, P_686|P_SSE2,0)
ins (MOVLPS, movlps, OpCls( XMM, M64, NONE ), F_0F, 1, no_WDS, 0x12, 0x00, P_686|P_SSE1,0)
insn(MOVLPS, 1, OpCls( M64, XMM, NONE ), F_0F, 0, no_WDS, 0x13, 0x00, P_686|P_SSE1,0)

ins (MOVHLPS, movhlps, OpCls( XMM, XMM, NONE ), F_0F, 1, no_WDS, 0x12, 0x00, P_686|P_SSE1,0)
ins (MOVLHPS, movlhps, OpCls( XMM, XMM, NONE ), F_0F, 1, no_WDS, 0x16, 0x00, P_686|P_SSE1,0)
ins (MOVDQ2Q, movdq2q, OpCls( MMX, XMM, NONE ), F_F20F, 1, no_WDS, 0xD6, 0x00, P_686|P_SSE2,0)
ins (MOVQ2DQ, movq2dq, OpCls( XMM, MMX, NONE ), F_F30F, 1, no_WDS, 0xD6, 0x00, P_686|P_SSE2,0)

ins (MOVMSKPD, movmskpd, OpCls( RGT16, XMM, NONE ), F_660F, 1, no_WDS, 0x50, 0x00, P_686|P_SSE2,0)
ins (MOVMSKPS, movmskps, OpCls( RGT16, XMM, NONE ), F_0F, 1, no_WDS, 0x50, 0x00, P_686|P_SSE1,0)
ins (MOVNTDQ, movntdq, OpCls( M128, XMM, NONE ), F_660F, 0, no_WDS, 0xE7, 0x00, P_686|P_SSE2,0)
ins (MOVNTI, movnti, OpCls( MGT16, RGT16, NONE ), F_0F, 0, no_WDS, 0xC3, 0x00, P_686|P_SSE2,0)
ins (MOVNTPD, movntpd, OpCls( M128, XMM, NONE ), F_660F, 0, no_WDS, 0x2B, 0x00, P_686|P_SSE2,0)
ins (MOVNTPS, movntps, OpCls( M128, XMM, NONE ), F_0F, 0, no_WDS, 0x2B, 0x00, P_686|P_SSE1,0)
ins (MOVNTQ, movntq, OpCls( M64, MMX, NONE ), F_0F, 0, no_WDS, 0xE7, 0x00, P_686|P_SSE1,0)


ins (MOVSS, movss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x10, 0x00, P_686|P_SSE1,0)
insn(MOVSS, 1, OpCls( M32, XMM, NONE ), F_F30F, 0, no_WDS, 0x11, 0x00, P_686|P_SSE1,0)

ins (PACKSSDW, packssdw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x6B, 0x00, P_586|P_MMX, 0)
insn(PACKSSDW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x6B, 0x00, P_686|P_SSE2,0)
ins (PACKSSWB, packsswb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x63, 0x00, P_586|P_MMX, 0)
insn(PACKSSWB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x63, 0x00, P_686|P_SSE2,0)
ins (PACKUSWB, packuswb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x67, 0x00, P_586|P_MMX, 0)
insn(PACKUSWB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x67, 0x00, P_686|P_SSE2,0)
ins (PADDB, paddb, OpCls( MMX, MMX_M64_08, NONE ), F_0F, 1, no_WDS, 0xFC, 0x00, P_586|P_MMX, 0)
insn(PADDB, 1, OpCls( XMM, XMM_M128_08,NONE ), F_660F, 1, no_WDS, 0xFC, 0x00, P_686|P_SSE2,0)
ins (PADDW, paddw, OpCls( MMX, MMX_M64_16, NONE ), F_0F, 1, no_WDS, 0xFD, 0x00, P_586|P_MMX, 0)
insn(PADDW, 1, OpCls( XMM, XMM_M128_16,NONE ), F_660F, 1, no_WDS, 0xFD, 0x00, P_686|P_SSE2,0)
ins (PADDD, paddd, OpCls( MMX, MMX_M64_32, NONE ), F_0F, 1, no_WDS, 0xFE, 0x00, P_586|P_MMX, 0)
insn(PADDD, 1, OpCls( XMM, XMM_M128_32,NONE ), F_660F, 1, no_WDS, 0xFE, 0x00, P_686|P_SSE2,0)
ins (PADDQ, paddq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD4, 0x00, P_686|P_SSE2,0)
insn(PADDQ, 1, OpCls( XMM, XMM_M128_64,NONE ), F_660F, 1, no_WDS, 0xD4, 0x00, P_686|P_SSE2,0)
ins (PADDSB, paddsb, OpCls( MMX, MMX_M64_08, NONE ), F_0F, 1, no_WDS, 0xEC, 0x00, P_586|P_MMX, 0)
insn(PADDSB, 1, OpCls( XMM, XMM_M128_08,NONE ), F_660F, 1, no_WDS, 0xEC, 0x00, P_686|P_SSE2,0)
ins (PADDSW, paddsw, OpCls( MMX, MMX_M64_16, NONE ), F_0F, 1, no_WDS, 0xED, 0x00, P_586|P_MMX, 0)
insn(PADDSW, 1, OpCls( XMM, XMM_M128_16,NONE ), F_660F, 1, no_WDS, 0xED, 0x00, P_686|P_SSE2,0)
ins (PADDUSB, paddusb, OpCls( MMX, MMX_M64_08, NONE ), F_0F, 1, no_WDS, 0xDC, 0x00, P_586|P_MMX, 0)
insn(PADDUSB, 1, OpCls( XMM, XMM_M128_08,NONE ), F_660F, 1, no_WDS, 0xDC, 0x00, P_686|P_SSE2,0)
ins (PADDUSW, paddusw, OpCls( MMX, MMX_M64_16, NONE ), F_0F, 1, no_WDS, 0xDD, 0x00, P_586|P_MMX, 0)
insn(PADDUSW, 1, OpCls( XMM, XMM_M128_16,NONE ), F_660F, 1, no_WDS, 0xDD, 0x00, P_686|P_SSE2,0)
ins (PAND, pand, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xDB, 0x00, P_586|P_MMX, 0)
insn(PAND, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xDB, 0x00, P_686|P_SSE2,0)
ins (PANDN, pandn, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xDF, 0x00, P_586|P_MMX, 0)
insn(PANDN, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xDF, 0x00, P_686|P_SSE2,0)
ins (PAVGB, pavgb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE0, 0x00, P_686|P_SSE1,0)
insn(PAVGB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE0, 0x00, P_686|P_SSE2,0)
ins (PAVGW, pavgw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE3, 0x00, P_686|P_SSE1,0)
insn(PAVGW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE3, 0x00, P_686|P_SSE2,0)
ins (PCMPEQB, pcmpeqb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x74, 0x00, P_586|P_MMX, 0)
insn(PCMPEQB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x74, 0x00, P_686|P_SSE2,0)
ins (PCMPEQW, pcmpeqw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x75, 0x00, P_586|P_MMX, 0)
insn(PCMPEQW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x75, 0x00, P_686|P_SSE2,0)
ins (PCMPEQD, pcmpeqd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x76, 0x00, P_586|P_MMX, 0)
insn(PCMPEQD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x76, 0x00, P_686|P_SSE2,0)
ins (PCMPGTB, pcmpgtb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x64, 0x00, P_586|P_MMX, 0)
insn(PCMPGTB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x64, 0x00, P_686|P_SSE2,0)
ins (PCMPGTW, pcmpgtw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x65, 0x00, P_586|P_MMX, 0)
insn(PCMPGTW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x65, 0x00, P_686|P_SSE2,0)
ins (PCMPGTD, pcmpgtd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x66, 0x00, P_586|P_MMX, 0)
insn(PCMPGTD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x66, 0x00, P_686|P_SSE2,0)
ins (PEXTRW, pextrw, OpCls( RGT16, MMX, I8_U ), F_0F, 1, no_WDS, 0xC5, 0x00, P_686|P_SSE1,0)
insn(PEXTRW, 1, OpCls( RGT16, XMM, I8_U ), F_660F, 1, no_WDS, 0xC5, 0x00, P_686|P_SSE1,0)

insn(PEXTRW, 2, OpCls( M16, XMM, I8_U ), F_660F3A, 0,no_WDS, 0x15, 0x00, P_686|P_SSE4,0)






ins (PINSRW, pinsrw, OpCls( MMX, R32_M16, I8_U ), F_0F, 1, no_WDS, 0xC4, 0x00, P_686|P_SSE1,0)
insn(PINSRW, 1, OpCls( XMM, R32_M16, I8_U ), F_660F, 1, no_WDS, 0xC4, 0x00, P_686|P_SSE1,0)
ins (PMADDWD, pmaddwd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF5, 0x00, P_586|P_MMX, 0)
insn(PMADDWD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF5, 0x00, P_686|P_SSE2,0)
ins (PMAXSW, pmaxsw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xEE, 0x00, P_686|P_SSE1,0)
insn(PMAXSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xEE, 0x00, P_686|P_SSE2,0)
ins (PMAXUB, pmaxub, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xDE, 0x00, P_686|P_SSE1,0)
insn(PMAXUB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xDE, 0x00, P_686|P_SSE2,0)
ins (PMINSW, pminsw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xEA, 0x00, P_686|P_SSE1,0)
insn(PMINSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xEA, 0x00, P_686|P_SSE2,0)
ins (PMINUB, pminub, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xDA, 0x00, P_686|P_SSE1,0)
insn(PMINUB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xDA, 0x00, P_686|P_SSE2,0)
ins (PMOVMSKB, pmovmskb, OpCls( RGT16, MMX, NONE ), F_0F, 1, no_WDS, 0xD7, 0x00, P_686|P_SSE1,0)
insn(PMOVMSKB, 1, OpCls( RGT16, XMM, NONE ), F_660F, 1, no_WDS, 0xD7, 0x00, P_686|P_SSE2,0)
ins (PMULHUW, pmulhuw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE4, 0x00, P_586|P_SSE1,0)
insn(PMULHUW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE4, 0x00, P_686|P_SSE2,0)
ins (PMULHW, pmulhw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE5, 0x00, P_586|P_MMX, 0)
insn(PMULHW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE5, 0x00, P_686|P_SSE2,0)
ins (PMULLW, pmullw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD5, 0x00, P_586|P_MMX, 0)
insn(PMULLW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD5, 0x00, P_686|P_SSE2,0)
ins (PMULUDQ, pmuludq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF4, 0x00, P_686|P_SSE2,0)
insn(PMULUDQ, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF4, 0x00, P_686|P_SSE2,0)
ins (POR, por, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xEB, 0x00, P_586|P_MMX, 0)
insn(POR, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xEB, 0x00, P_686|P_SSE2,0)
ins (PSADBW, psadbw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF6, 0x00, P_686|P_SSE1,0)
insn(PSADBW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF6, 0x00, P_686|P_SSE2,0)
ins (PSHUFD, pshufd, OpCls( XMM, XMM_M128, I8_U ), F_660F, 1, no_WDS, 0x70, 0x00, P_686|P_SSE2,0)
ins (PSHUFW, pshufw, OpCls( MMX, MMX_M64, I8_U ), F_0F, 1, no_WDS, 0x70, 0x00, P_686|P_SSE1,0)
ins (PSHUFHW, pshufhw, OpCls( XMM, XMM_M128, I8_U ), F_F30F, 1, no_WDS, 0x70, 0x00, P_686|P_SSE2,0)
ins (PSHUFLW, pshuflw, OpCls( XMM, XMM_M128, I8_U ), F_F20F, 1, no_WDS, 0x70, 0x00, P_686|P_SSE2,0)

ins (PSLLW, psllw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF1, 0x00, P_586|P_MMX, 0)
insn(PSLLW, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x71, 0x30, P_586|P_MMX, 0)
insn(PSLLW, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF1, 0x00, P_686|P_SSE2,0)
insn(PSLLW, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x71, 0x30, P_686|P_SSE2,0)
ins (PSLLD, pslld, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF2, 0x00, P_586|P_MMX, 0)
insn(PSLLD, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x72, 0x30, P_586|P_MMX, 0)
insn(PSLLD, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF2, 0x00, P_686|P_SSE2,0)
insn(PSLLD, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x72, 0x30, P_686|P_SSE2,0)
ins (PSLLQ, psllq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF3, 0x00, P_586|P_MMX, 0)
insn(PSLLQ, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x73, 0x30, P_586|P_MMX, 0)
insn(PSLLQ, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF3, 0x00, P_686|P_SSE2,0)
insn(PSLLQ, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x73, 0x30, P_686|P_SSE2,0)
ins (PSRAW, psraw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE1, 0x00, P_586|P_MMX, 0)
insn(PSRAW, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x71, 0x20, P_586|P_MMX, 0)
insn(PSRAW, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE1, 0x00, P_586|P_SSE2,0)
insn(PSRAW, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x71, 0x20, P_686|P_SSE2,0)
ins (PSRAD, psrad, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE2, 0x00, P_586|P_MMX, 0)
insn(PSRAD, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x72, 0x20, P_586|P_MMX, 0)
insn(PSRAD, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE2, 0x00, P_686|P_SSE2,0)
insn(PSRAD, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x72, 0x20, P_686|P_SSE2,0)
ins (PSRLW, psrlw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD1, 0x00, P_586|P_MMX, 0)
insn(PSRLW, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x71, 0x10, P_586|P_MMX, 0)
insn(PSRLW, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD1, 0x00, P_686|P_SSE2,0)
insn(PSRLW, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x71, 0x10, P_686|P_SSE2,0)
ins (PSRLD, psrld, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD2, 0x00, P_586|P_MMX, 0)
insn(PSRLD, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x72, 0x10, P_586|P_MMX, 0)
insn(PSRLD, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD2, 0x00, P_686|P_SSE2,0)
insn(PSRLD, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x72, 0x10, P_686|P_SSE2,0)
ins (PSRLQ, psrlq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD3, 0x00, P_586|P_MMX, 0)
insn(PSRLQ, 1, OpCls( MMX, I8_U, NONE ), F_0F, 0, no_WDS, 0x73, 0x10, P_586|P_MMX, 0)
insn(PSRLQ, 2, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD3, 0x00, P_686|P_SSE2,0)
insn(PSRLQ, 3, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x73, 0x10, P_686|P_SSE2,0)

ins (PSLLDQ, pslldq, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x73, 0x38, P_686|P_SSE2,0)
ins (PSRLDQ, psrldq, OpCls( XMM, I8_U, NONE ), F_660F, 0, no_WDS, 0x73, 0x18, P_686|P_SSE2,0)

ins (PSUBB, psubb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF8, 0x00, P_586|P_MMX, 0)
insn(PSUBB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF8, 0x00, P_686|P_SSE2,0)
ins (PSUBW, psubw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xF9, 0x00, P_586|P_MMX, 0)
insn(PSUBW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xF9, 0x00, P_686|P_SSE2,0)
ins (PSUBD, psubd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xFA, 0x00, P_586|P_MMX, 0)
insn(PSUBD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xFA, 0x00, P_686|P_SSE2,0)
ins (PSUBQ, psubq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xFB, 0x00, P_686|P_SSE2,0)
insn(PSUBQ, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xFB, 0x00, P_686|P_SSE2,0)
ins (PSUBSB, psubsb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE8, 0x00, P_586|P_MMX, 0)
insn(PSUBSB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE8, 0x00, P_686|P_SSE2,0)
ins (PSUBSW, psubsw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xE9, 0x00, P_586|P_MMX, 0)
insn(PSUBSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE9, 0x00, P_686|P_SSE2,0)
ins (PSUBUSB, psubusb, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD8, 0x00, P_586|P_MMX, 0)
insn(PSUBUSB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD8, 0x00, P_686|P_SSE2,0)
ins (PSUBUSW, psubusw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xD9, 0x00, P_586|P_MMX, 0)
insn(PSUBUSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD9, 0x00, P_686|P_SSE2,0)
ins (PXOR, pxor, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0xEF, 0x00, P_586|P_MMX, 0)
insn(PXOR, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xEF, 0x00, P_686|P_SSE2,0)
ins (PUNPCKHBW, punpckhbw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x68, 0x00, P_586|P_MMX, 0)
insn(PUNPCKHBW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x68, 0x00, P_686|P_SSE2,0)
ins (PUNPCKHWD, punpckhwd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x69, 0x00, P_586|P_MMX, 0)
insn(PUNPCKHWD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x69, 0x00, P_686|P_SSE2,0)
ins (PUNPCKHDQ, punpckhdq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x6A, 0x00, P_586|P_MMX, 0)
insn(PUNPCKHDQ, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x6A, 0x00, P_686|P_SSE2,0)
ins (PUNPCKLBW, punpcklbw, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x60, 0x00, P_586|P_MMX, 0)
insn(PUNPCKLBW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x60, 0x00, P_686|P_SSE2,0)
ins (PUNPCKLWD, punpcklwd, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x61, 0x00, P_586|P_MMX, 0)
insn(PUNPCKLWD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x61, 0x00, P_686|P_SSE2,0)
ins (PUNPCKLDQ, punpckldq, OpCls( MMX, MMX_M64, NONE ), F_0F, 1, no_WDS, 0x62, 0x00, P_586|P_MMX, 0)
insn(PUNPCKLDQ, 1, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x62, 0x00, P_686|P_SSE2,0)
ins (PUNPCKHQDQ, punpckhqdq, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x6D, 0x00, P_686|P_SSE2,0)
ins (PUNPCKLQDQ, punpcklqdq, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x6C, 0x00, P_686|P_SSE2,0)

ins (RCPPS, rcpps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x53, 0x00, P_686|P_SSE1,0)
ins (RCPSS, rcpss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x53, 0x00, P_686|P_SSE1,0)
ins (RSQRTPS, rsqrtps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x52, 0x00, P_686|P_SSE1,0)
ins (RSQRTSS, rsqrtss, OpCls( XMM, XMM_M32, NONE ), F_F30F, 1, no_WDS, 0x52, 0x00, P_686|P_SSE1,0)
ins (SHUFPD, shufpd, OpCls( XMM, XMM_M128, I8_U ), F_660F, 1, no_WDS, 0xC6, 0x00, P_686|P_SSE2,0)
ins (SHUFPS, shufps, OpCls( XMM, XMM_M128, I8_U ), F_0F, 1, no_WDS, 0xC6, 0x00, P_686|P_SSE1,0)
ins (UCOMISD, ucomisd, OpCls( XMM, XMM_M64, NONE ), F_660F, 1, no_WDS, 0x2E, 0x00, P_686|P_SSE2,0)
ins (UCOMISS, ucomiss, OpCls( XMM, XMM_M32, NONE ), F_0F, 1, no_WDS, 0x2E, 0x00, P_686|P_SSE1,0)
ins (UNPCKHPD, unpckhpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x15, 0x00, P_686|P_SSE2,0)
ins (UNPCKHPS, unpckhps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x15, 0x00, P_686|P_SSE1,0)
ins (UNPCKLPD, unpcklpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x14, 0x00, P_686|P_SSE2,0)
ins (UNPCKLPS, unpcklps, OpCls( XMM, XMM_M128, NONE ), F_0F, 1, no_WDS, 0x14, 0x00, P_686|P_SSE1,0)



ins (FEMMS, femms, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x0E, 0x00, P_586|P_K3D, 0)
ins (PREFETCH, prefetch, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x0D, 0x00, P_586|P_K3D, 0)
ins (PREFETCHW, prefetchw, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0x0D, 0x08, P_586|P_K3D, 0)
ins (PAVGUSB, pavgusb, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xBF, 0x00, P_586|P_K3D, 0)
ins (PF2ID, pf2id, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x1D, 0x00, P_586|P_K3D, 0)
ins (PF2IW, pf2iw, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x1C, 0x00, P_586|P_K3D, 0)
ins (PFACC, pfacc, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xAE, 0x00, P_586|P_K3D, 0)
ins (PFADD, pfadd, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x9E, 0x00, P_586|P_K3D, 0)
ins (PFCMPEQ, pfcmpeq, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xB0, 0x00, P_586|P_K3D, 0)
ins (PFCMPGE, pfcmpge, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x90, 0x00, P_586|P_K3D, 0)
ins (PFCMPGT, pfcmpgt, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xA0, 0x00, P_586|P_K3D, 0)
ins (PFMAX, pfmax, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xA4, 0x00, P_586|P_K3D, 0)
ins (PFMIN, pfmin, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x94, 0x00, P_586|P_K3D, 0)
ins (PFMUL, pfmul, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xB4, 0x00, P_586|P_K3D, 0)
ins (PFNACC, pfnacc, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x8A, 0x00, P_586|P_K3D, 0)
ins (PFPNACC, pfpnacc, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x8E, 0x00, P_586|P_K3D, 0)
ins (PFRCP, pfrcp, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x96, 0x00, P_586|P_K3D, 0)
ins (PFRCPIT1, pfrcpit1, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xA6, 0x00, P_586|P_K3D, 0)
ins (PFRCPIT2, pfrcpit2, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xB6, 0x00, P_586|P_K3D, 0)
ins (PFRSQIT1, pfrsqit1, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xA7, 0x00, P_586|P_K3D, 0)
ins (PFRSQRT, pfrsqrt, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x97, 0x00, P_586|P_K3D, 0)
ins (PFSUB, pfsub, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x9A, 0x00, P_586|P_K3D, 0)
ins (PFSUBR, pfsubr, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xAA, 0x00, P_586|P_K3D, 0)
ins (PI2FD, pi2fd, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x0D, 0x00, P_586|P_K3D, 0)
ins (PI2FW, pi2fw, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0x0C, 0x00, P_586|P_K3D, 0)
ins (PMULHRW, pmulhrw, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xB7, 0x00, P_586|P_K3D, 0)
ins (PSWAPD, pswapd, OpCls( MMX, MMX_M64, NONE ), F_0F0F, 1, no_WDS, 0xBB, 0x00, P_586|P_K3D, 0)



ins (ADDSUBPD, addsubpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xD0, 0x00, P_686|P_SSE3,0)
ins (ADDSUBPS, addsubps, OpCls( XMM, XMM_M128, NONE ), F_F20F, 1, no_WDS, 0xD0, 0x00, P_686|P_SSE3,0)
ins (FISTTP, fisttp, OpCls( M32, NONE, NONE ), 0, 0, no_WDS, 0xDB, 0x08, P_686|P_SSE3,0)
insn(FISTTP, 1, OpCls( M64, NONE, NONE ), 0, 0, no_WDS, 0xDD, 0x08, P_686|P_SSE3,0)
insn(FISTTP, 2, OpCls( M16, NONE, NONE ), 0, 0, no_WDS, 0xDF, 0x08, P_686|P_SSE3,0)
ins (HADDPD, haddpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x7C, 0x00, P_686|P_SSE3,0)
ins (HADDPS, haddps, OpCls( XMM, XMM_M128, NONE ), F_F20F, 1, no_WDS, 0x7C, 0x00, P_686|P_SSE3,0)
ins (HSUBPD, hsubpd, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x7D, 0x00, P_686|P_SSE3,0)
ins (HSUBPS, hsubps, OpCls( XMM, XMM_M128, NONE ), F_F20F, 1, no_WDS, 0x7D, 0x00, P_686|P_SSE3,0)
ins (LDDQU, lddqu, OpCls( XMM, M128, NONE ), F_F20F, 1, no_WDS, 0xF0, 0x00, P_686|P_SSE3,0)
ins (MONITOR, monitor, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC8, P_686|P_SSE3,0)
ins (MOVDDUP, movddup, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x12, 0x00, P_686|P_SSE3,0)
ins (MOVSHDUP, movshdup, OpCls( XMM, XMM_M128, NONE ), F_F30F, 1, no_WDS, 0x16, 0x00, P_686|P_SSE3,0)
ins (MOVSLDUP, movsldup, OpCls( XMM, XMM_M128, NONE ), F_F30F, 1, no_WDS, 0x12, 0x00, P_686|P_SSE3,0)
ins (MWAIT, mwait, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC9, P_686|P_SSE3,0)



ins (PABSB, pabsb, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x1C, 0x00, P_686|P_SSSE3, 0)
insn(PABSB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x1C, 0x00, P_686|P_SSSE3, 0)
ins (PABSD, pabsd, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x1E, 0x00, P_686|P_SSSE3, 0)
insn(PABSD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x1E, 0x00, P_686|P_SSSE3, 0)
ins (PABSW, pabsw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x1D, 0x00, P_686|P_SSSE3, 0)
insn(PABSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x1D, 0x00, P_686|P_SSSE3, 0)
ins (PALIGNR, palignr, OpCls( MMX, MMX_M64, I8_U ), F_0F3A, 1, no_WDS, 0x0F, 0x00, P_686|P_SSSE3, 0)
insn(PALIGNR, 1, OpCls( XMM, XMM_M128, I8_U ), F_660F3A,1, no_WDS, 0x0F, 0x00, P_686|P_SSSE3, 0)
ins (PHADDD, phaddd, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x02, 0x00, P_686|P_SSSE3, 0)
insn(PHADDD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x02, 0x00, P_686|P_SSSE3, 0)
ins (PHADDSW, phaddsw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x03, 0x00, P_686|P_SSSE3, 0)
insn(PHADDSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x03, 0x00, P_686|P_SSSE3, 0)
ins (PHADDW, phaddw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x01, 0x00, P_686|P_SSSE3, 0)
insn(PHADDW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x01, 0x00, P_686|P_SSSE3, 0)
ins (PHSUBD, phsubd, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x06, 0x00, P_686|P_SSSE3, 0)
insn(PHSUBD, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x06, 0x00, P_686|P_SSSE3, 0)
ins (PHSUBSW, phsubsw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x07, 0x00, P_686|P_SSSE3, 0)
insn(PHSUBSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x07, 0x00, P_686|P_SSSE3, 0)
ins (PHSUBW, phsubw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x05, 0x00, P_686|P_SSSE3, 0)
insn(PHSUBW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x05, 0x00, P_686|P_SSSE3, 0)
ins (PMADDUBSW, pmaddubsw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x04, 0x00, P_686|P_SSSE3, 0)
insn(PMADDUBSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x04, 0x00, P_686|P_SSSE3, 0)
ins (PMULHRSW, pmulhrsw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x0B, 0x00, P_686|P_SSSE3, 0)
insn(PMULHRSW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0B, 0x00, P_686|P_SSSE3, 0)
ins (PSHUFB, pshufb, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x00, 0x00, P_686|P_SSSE3, 0)
insn(PSHUFB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x00, 0x00, P_686|P_SSSE3, 0)
ins (PSIGNB, psignb, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x08, 0x00, P_686|P_SSSE3, 0)
insn(PSIGNB, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x08, 0x00, P_686|P_SSSE3, 0)
ins (PSIGND, psignd, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x0A, 0x00, P_686|P_SSSE3, 0)
insn(PSIGND, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0A, 0x00, P_686|P_SSSE3, 0)
ins (PSIGNW, psignw, OpCls( MMX, MMX_M64, NONE ), F_0F38, 1, no_WDS, 0x09, 0x00, P_686|P_SSSE3, 0)
insn(PSIGNW, 1, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x09, 0x00, P_686|P_SSSE3, 0)



insx(CDQE, cdqe, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0x98, 0x00, P_64, 0, RWF_X64)
insx(CQO, cqo, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0x99, 0x00, P_64, 0, RWF_X64)
insx(PUSHFQ,pushfq, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9C, 0x00, P_64, 0, RWF_X64)
insx(POPFQ, popfq, OpCls( NONE, NONE, NONE ), 0, 0, no_RM, 0x9D, 0x00, P_64, 0, RWF_X64)
insx(IRETQ, iretq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xCF, 0x00, P_64, 0, RWF_X64)
insx(CMPXCHG16B, cmpxchg16b, OpCls( M128, NONE, NONE ), F_480F, 0, 0, 0xC7, 0x08, P_64, AP_LOCK, RWF_X64)
insx(MOVSXD,movsxd, OpCls( R64, R32_M32, NONE ), 0, 1, 0, 0x63, 0x00, P_64, 0, RWF_X64)

insx(CMPSQ, cmpsq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xA7, 0x00, P_64, AP_REPxx, RWF_X64)
insn(CMPSQ, 1, OpCls( M64, M64, NONE ), F_48, 0, no_RM, 0xA7, 0x00, P_64, AP_REPxx)
insx(LODSQ, lodsq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xAD, 0x00, P_64, AP_REP, RWF_X64)
insn(LODSQ, 1, OpCls( M64, NONE, NONE ), F_48, 0, no_RM, 0xAD, 0x00, P_64, AP_REP )
insx(MOVSQ, movsq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xA5, 0x00, P_64, AP_REP, RWF_X64)
insn(MOVSQ, 1, OpCls( M64, M64, NONE ), F_48, 0, no_RM, 0xA5, 0x00, P_64, AP_REP )
insx(SCASQ, scasq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xAF, 0x00, P_64, AP_REPxx, RWF_X64)
insn(SCASQ, 1, OpCls( M64, NONE, NONE ), F_48, 0, no_RM, 0xAF, 0x00, P_64, AP_REPxx)
insx(STOSQ, stosq, OpCls( NONE, NONE, NONE ), F_48, 0, no_RM, 0xAB, 0x00, P_64, AP_REP, RWF_X64)
insn(STOSQ, 1, OpCls( M64, NONE, NONE ), F_48, 0, no_RM, 0xAB, 0x00, P_64, AP_REP )


insx(PEXTRQ, pextrq, OpCls( R64_M64, XMM, I8_U ), F_660F3A,0, no_WDS, 0x16, 0x00, P_64|P_SSE4,0, RWF_X64)
insx(PINSRQ, pinsrq, OpCls( XMM, R64_M64, I8_U ), F_660F3A,1, no_WDS, 0x22, 0x00, P_64|P_SSE4,0, RWF_X64)

insx(SWAPGS, swapgs, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xF8, P_64, 0, RWF_X64)
insx(SYSCALL_, syscall, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x05, 0x00, P_64, 0, RWF_X64)
insx(SYSRET, sysret, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x07, 0x00, P_64, 0, RWF_X64)
# 1166 "./instruct.h"
ins (BLENDPD, blendpd, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x0D, 0x00, P_686|P_SSE4, 0)
ins (BLENDPS, blendps, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x0C, 0x00, P_686|P_SSE4, 0)
ins (BLENDVPD, blendvpd, OpCls( XMM, XMM_M128, XMM0 ), F_660F38, 1, no_WDS, 0x15, 0x00, P_686|P_SSE4, 0)
ins (BLENDVPS, blendvps, OpCls( XMM, XMM_M128, XMM0 ), F_660F38, 1, no_WDS, 0x14, 0x00, P_686|P_SSE4, 0)
ins (DPPD, dppd, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x41, 0x00, P_686|P_SSE4, 0)
ins (DPPS, dpps, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x40, 0x00, P_686|P_SSE4, 0)
ins (EXTRACTPS, extractps, OpCls( RGT16, XMM, I8_U ), F_660F3A, 0, no_WDS, 0x17, 0x00, P_686|P_SSE4, 0)
insn(EXTRACTPS, 1, OpCls( M32, XMM, I8_U ), F_660F3A, 0, no_WDS, 0x17, 0x00, P_686|P_SSE4, 0)
ins (INSERTPS, insertps, OpCls( XMM, XMM_M32, I8_U ), F_660F3A, 1, no_WDS, 0x21, 0x00, P_686|P_SSE4, 0)
ins (MOVNTDQA, movntdqa, OpCls( XMM, M128, NONE ), F_660F38, 1, no_WDS, 0x2A, 0x00, P_686|P_SSE4, 0)
ins (MPSADBW, mpsadbw, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x42, 0x00, P_686|P_SSE4, 0)
ins (PACKUSDW, packusdw, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x2B, 0x00, P_686|P_SSE4, 0)
ins (PBLENDVB, pblendvb, OpCls( XMM, XMM_M128, XMM0 ), F_660F38, 1, no_WDS, 0x10, 0x00, P_686|P_SSE4, 0)
ins (PBLENDW, pblendw, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x0E, 0x00, P_686|P_SSE4, 0)
ins (PCMPEQQ, pcmpeqq, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x29, 0x00, P_686|P_SSE4, 0)
ins (PEXTRB, pextrb, OpCls( RGT16_M08,XMM, I8_U ), F_660F3A, 0, no_WDS, 0x14, 0x00, P_686|P_SSE4, 0)
ins (PEXTRD, pextrd, OpCls( R32_M32, XMM, I8_U ), F_660F3A, 0, no_WDS, 0x16, 0x00, P_686|P_SSE4, 0)
ins (PHMINPOSUW, phminposuw, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x41, 0x00, P_686|P_SSE4, 0)
ins (PINSRB, pinsrb, OpCls( XMM, R32_M08, I8_U ), F_660F3A, 1, no_WDS, 0x20, 0x00, P_686|P_SSE4, 0)
ins (PINSRD, pinsrd, OpCls( XMM, R32_M32, I8_U ), F_660F3A, 1, no_WDS, 0x22, 0x00, P_686|P_SSE4, 0)
ins (PMAXSB, pmaxsb, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3C, 0x00, P_686|P_SSE4, 0)
ins (PMAXSD, pmaxsd, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3D, 0x00, P_686|P_SSE4, 0)
ins (PMAXUW, pmaxuw, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3E, 0x00, P_686|P_SSE4, 0)
ins (PMAXUD, pmaxud, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3F, 0x00, P_686|P_SSE4, 0)
ins (PMINSB, pminsb, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x38, 0x00, P_686|P_SSE4, 0)
ins (PMINSD, pminsd, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x39, 0x00, P_686|P_SSE4, 0)
ins (PMINUW, pminuw, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3A, 0x00, P_686|P_SSE4, 0)
ins (PMINUD, pminud, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x3B, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXBW, pmovsxbw, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x20, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXBD, pmovsxbd, OpCls( XMM, XMM_M32, NONE ), F_660F38, 1, no_WDS, 0x21, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXBQ, pmovsxbq, OpCls( XMM, XMM_M16, NONE ), F_660F38, 1, no_WDS, 0x22, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXWD, pmovsxwd, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x23, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXWQ, pmovsxwq, OpCls( XMM, XMM_M32, NONE ), F_660F38, 1, no_WDS, 0x24, 0x00, P_686|P_SSE4, 0)
ins (PMOVSXDQ, pmovsxdq, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x25, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXBW, pmovzxbw, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x30, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXBD, pmovzxbd, OpCls( XMM, XMM_M32, NONE ), F_660F38, 1, no_WDS, 0x31, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXBQ, pmovzxbq, OpCls( XMM, XMM_M16, NONE ), F_660F38, 1, no_WDS, 0x32, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXWD, pmovzxwd, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x33, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXWQ, pmovzxwq, OpCls( XMM, XMM_M32, NONE ), F_660F38, 1, no_WDS, 0x34, 0x00, P_686|P_SSE4, 0)
ins (PMOVZXDQ, pmovzxdq, OpCls( XMM, XMM_M64, NONE ), F_660F38, 1, no_WDS, 0x35, 0x00, P_686|P_SSE4, 0)
ins (PMULDQ, pmuldq, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x28, 0x00, P_686|P_SSE4, 0)
ins (PMULLD, pmulld, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x40, 0x00, P_686|P_SSE4, 0)
ins (PTEST, ptest, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x17, 0x00, P_686|P_SSE4, 0)
ins (ROUNDPS, roundps, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x08, 0x00, P_686|P_SSE4, 0)
ins (ROUNDPD, roundpd, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x09, 0x00, P_686|P_SSE4, 0)
ins (ROUNDSS, roundss, OpCls( XMM, XMM_M32 , I8_U ), F_660F3A, 1, no_WDS, 0x0A, 0x00, P_686|P_SSE4, 0)
ins (ROUNDSD, roundsd, OpCls( XMM, XMM_M64 , I8_U ), F_660F3A, 1, no_WDS, 0x0B, 0x00, P_686|P_SSE4, 0)

ins (CRC32, crc32, OpCls( RGT16, R8_M08, NONE ), F_F20F38, 1, no_WDS, 0xF0, 0x00, P_686|P_SSE4, 0)
insn(CRC32, 1, OpCls( RGT16, RGT8_MS, NONE ), F_F20F38, 1, no_WDS, 0xF1, 0x00, P_686|P_SSE4, 0)
ins (PCMPESTRM, pcmpestrm, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x60, 0x00, P_686|P_SSE4, 0)
ins (PCMPESTRI, pcmpestri, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x61, 0x00, P_686|P_SSE4, 0)
ins (PCMPISTRM, pcmpistrm, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x62, 0x00, P_686|P_SSE4, 0)
ins (PCMPISTRI, pcmpistri, OpCls( XMM, XMM_M128, I8_U ), F_660F3A, 1, no_WDS, 0x63, 0x00, P_686|P_SSE4, 0)
ins (PCMPGTQ, pcmpgtq, OpCls( XMM, XMM_M128, NONE ), F_660F38, 1, no_WDS, 0x37, 0x00, P_686|P_SSE4, 0)
ins (POPCNT, popcnt, OpCls( RGT8, RGT8_MS, NONE ), F_F30F, 1, no_WDS ,0xB8, 0x00, P_686|P_SSE4, 0)
# 1232 "./instruct.h"
ins (XRSTOR, xrstor, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x28, P_686|P_SSE4,0)
ins (XSAVE, xsave, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x20, P_686|P_SSE4,0)
ins (XSAVEOPT, xsaveopt, OpCls( M_ANY, NONE, NONE ), F_0F, 0, no_WDS, 0xAE, 0x30, P_686|P_SSE4,0)
ins (XGETBV, xgetbv, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0xD0, P_686|P_SSE4,0)
ins (XSETBV, xsetbv, OpCls( NONE, NONE, NONE ), F_0F, 0, no_WDS, 0x01, 0xD1, P_686p|P_SSE4,0)



ins (VMCALL, vmcall, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC1, P_686, 0)
ins (VMLAUNCH,vmlaunch, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC2, P_686p,0)
ins (VMRESUME,vmresume, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC3, P_686p,0)
ins (VMXOFF, vmxoff, OpCls( NONE, NONE, NONE ), F_0F, 0, 0, 0x01, 0xC4, P_686p,0)
ins (VMPTRLD, vmptrld, OpCls( M64, NONE, NONE ), F_0F, 0, no_WDS, 0xC7, 0x30, P_686p,0)
ins (VMPTRST, vmptrst, OpCls( M64, NONE, NONE ), F_0F, 0, no_WDS, 0xC7, 0x38, P_686p,0)
ins (VMCLEAR, vmclear, OpCls( M64, NONE, NONE ), F_660F, 0, no_WDS, 0xC7, 0x30, P_686p,0)
ins (VMXON, vmxon, OpCls( M64, NONE, NONE ), F_F30F, 0, no_WDS, 0xC7, 0x30, P_686p,0)
ins (VMREAD, vmread, OpCls( R32_M32, R32, NONE ), F_0F, 0, no_WDS, 0x78, 0x00, P_686p,0)
ins (VMWRITE, vmwrite, OpCls( R32, R32_M32, NONE ), F_0F, 1, no_WDS, 0x79, 0x00, P_686p,0)
ins (INVEPT, invept, OpCls( RGT16, M128, NONE ), F_660F38,1, no_WDS, 0x80, 0x00, P_686p,0)
ins (INVVPID, invvpid, OpCls( RGT16, M128, NONE ), F_660F38,1, no_WDS, 0x81, 0x00, P_686p,0)
# 1273 "./instruct.h"
insx(VBROADCASTSS, vbroadcastss, OpCls( XMM, M32, NONE ), F_660F38,1, no_WDS, 0x18, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VBROADCASTSS, 1, OpCls( YMM, M32, NONE ), F_660F38,1, no_WDS, 0x18, 0x00, P_686|P_AVX, 0)
insx(VBROADCASTSD, vbroadcastsd, OpCls( YMM, M64, NONE ), F_660F38,1, no_WDS, 0x19, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VBROADCASTF128, vbroadcastf128, OpCls( YMM, M128, NONE ), F_660F38,1, no_WDS, 0x1A, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VBLENDVPD, vblendvpd, OpCls( XMM, XMM_M128, XMM ), F_660F3A,1, no_WDS, 0x4B, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VBLENDVPS, vblendvps, OpCls( XMM, XMM_M128, XMM ), F_660F3A,1, no_WDS, 0x4A, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VINSERTF128, vinsertf128, OpCls( YMM, XMM_M128, I8_U ), F_660F3A,1, no_WDS, 0x18, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VEXTRACTF128, vextractf128, OpCls( XMM, YMM, I8_U ), F_660F3A,0, no_WDS, 0x19, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VEXTRACTF128, 1, OpCls( M128, YMM, I8_U ), F_660F3A,0, no_WDS, 0x19, 0x00, P_686|P_AVX, 0)
insx(VMASKMOVPS, vmaskmovps, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x2C, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VMASKMOVPS, 1, OpCls( M128, XMM, NONE ), F_660F38,0, no_WDS, 0x2E, 0x00, P_686|P_AVX, 0)
insx(VMASKMOVPD, vmaskmovpd, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x2D, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VMASKMOVPD, 1, OpCls( M128, XMM, NONE ), F_660F38,0, no_WDS, 0x2F, 0x00, P_686|P_AVX, 0)
insx(VPBLENDVB, vpblendvb, OpCls( XMM, XMM_M128, XMM ), F_660F3A,1, no_WDS, 0x4C, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VPERMILPD, vpermilpd, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0D, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VPERMILPD, 1, OpCls( XMM, XMM_M128, I8_U ), F_660F3A,1, no_WDS, 0x0D, 0x00, P_686|P_AVX, 0)
insx(VPERMILPS, vpermilps, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0C, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VPERMILPS, 1, OpCls( XMM, XMM_M128, I8_U ), F_660F3A,1, no_WDS, 0x0C, 0x00, P_686|P_AVX, 0)



insx(VPERM2F128, vperm2f128, OpCls( YMM, YMM_M256, I8_U ), F_660F3A,1, no_WDS, 0x06, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VTESTPS, vtestps, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0E, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VTESTPD, vtestpd, OpCls( XMM, XMM_M128, NONE ), F_660F38,1, no_WDS, 0x0F, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VZEROALL, vzeroall, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x77, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VZEROUPPER, vzeroupper, OpCls( NONE, NONE, NONE ), F_0F, 0, no_RM, 0x77, 0x00, P_686|P_AVX, 0, RWF_VEX )
insx(VCVTPD2DQ, vcvtpd2dq, OpCls( XMM, XMM_M128, NONE ), F_F20F, 1, no_WDS, 0xE6, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VCVTPD2DQ, 1, OpCls( XMM, YMM_M256, NONE ), F_F20F, 1, no_WDS, 0xE6, 0x00, P_686|P_AVX, 0)
insx(VCVTTPD2DQ, vcvttpd2dq, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0xE6, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VCVTTPD2DQ, 1, OpCls( XMM, YMM_M256, NONE ), F_660F, 1, no_WDS, 0xE6, 0x00, P_686|P_AVX, 0)
insx(VCVTPD2PS, vcvtpd2ps, OpCls( XMM, XMM_M128, NONE ), F_660F, 1, no_WDS, 0x5A, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VCVTPD2PS, 1, OpCls( XMM, YMM_M256, NONE ), F_660F, 1, no_WDS, 0x5A, 0x00, P_686|P_AVX, 0)
insx(VMOVDDUP, vmovddup, OpCls( XMM, XMM_M64, NONE ), F_F20F, 1, no_WDS, 0x12, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VMOVDDUP, 1, OpCls( YMM, YMM_M256, NONE ), F_F20F, 1, no_WDS, 0x12, 0x00, P_686|P_AVX, 0)

insx(VMOVMSKPD, vmovmskpd, OpCls( RGT16, XMM, NONE ), F_660F, 1, no_WDS, 0x50, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VMOVMSKPD, 1, OpCls( RGT16, YMM, NONE ), F_660F, 1, no_WDS, 0x50, 0x00, P_686|P_AVX, 0)
insx(VMOVMSKPS, vmovmskps, OpCls( RGT16, XMM, NONE ), F_0F, 1, no_WDS, 0x50, 0x00, P_686|P_AVX, 0, RWF_VEX )
insn(VMOVMSKPS, 1, OpCls( RGT16, YMM, NONE ), F_0F, 1, no_WDS, 0x50, 0x00, P_686|P_AVX, 0)
# 32 "main.c" 2

# 1 "./label.h" 1
# 34 "./label.h"
struct qualified_type;

extern void LabelInit( void );
extern char *GetAnonymousLabel( char *, int );
extern struct asym *CreateLabel( const char *, enum memtype, struct qualified_type *, bool );
# 34 "main.c" 2
# 1 "./linnum.h" 1



struct line_num_info {
    struct line_num_info *next;
    uint_32 number;
    union {
        uint_32 offset;

        struct {
            uint_32 line_number:20,
                    file:12;
        };
    };
    union {
        unsigned srcfile;
        struct asym *sym;
    };
};

void LinnumInit( void );
void LinnumFini( void );
void QueueDeleteLinnum( struct qdesc * );
# 35 "main.c" 2
# 1 "./listing.h" 1
# 11 "./listing.h"
enum lsttype {
 LSTTYPE_DATA,
 LSTTYPE_CODE,
 LSTTYPE_EQUATE,
 LSTTYPE_TMACRO,
 LSTTYPE_DIRECTIVE,
 LSTTYPE_MACRO,
 LSTTYPE_STRUCT,
 LSTTYPE_LABEL,
 LSTTYPE_MACROLINE,
};

extern void LstInit( void );
extern void LstWrite( enum lsttype, uint_32 ofs, void * sym );
extern void LstWriteSrcLine( void );
extern void LstWriteCRef( void );
extern void LstPrintf( const char *format, ... );
extern void LstNL( void );

extern void LstSetPosition( void );
# 36 "main.c" 2
# 1 "./lqueue.h" 1






extern void DeleteLineQueue( void );
extern void AddLineQueue( const char *line );
extern void AddLineQueueX( const char *fmt, ... );
extern void RunLineQueue( void );
# 37 "main.c" 2
# 1 "./ltext.h" 1



ltext(BYTE, "Byte" )
ltext(WORD, "Word" )
ltext(DWORD, "DWord" )
ltext(FWORD, "FWord" )
ltext(QWORD, "QWord" )
ltext(TBYTE, "TByte" )
ltext(PARA, "Para" )
ltext(OWORD, "XmmWord")
ltext(PAGE, "Page" )

ltext(NEAR, "Near" )
ltext(NEAR16, "Near16" )
ltext(NEAR32, "Near32" )

ltext(NEAR64, "Near64" )

ltext(FAR, "Far" )
ltext(FAR16, "Far16" )
ltext(FAR32, "Far32" )

ltext(FAR64, "Far64" )

ltext(LNEAR, "L Near" )
ltext(LNEAR16, "L Near16")
ltext(LNEAR32, "L Near32")

ltext(LNEAR64, "L Near64")

ltext(LFAR, "L Far" )
ltext(LFAR16, "L Far16" )
ltext(LFAR32, "L Far32" )

ltext(LFAR64, "L Far64" )

ltext(PTR, "Ptr" )
ltext(PROC, "Proc" )
ltext(FUNC, "Func" )
ltext(NUMBER, "Number" )
ltext(PRIVATE, "Private")
ltext(STACK, "Stack" )
ltext(PUBLIC, "Public" )
ltext(COMMON, "Common" )
ltext(EXTERNAL, "External" )
ltext(UNDEFINED,"Undefined")
ltext(GROUP, "GROUP" )
ltext(NOSEG, "No Seg" )
ltext(TEXT, "Text" )
ltext(ALIAS, "Alias" )
ltext(ABS, "Abs" )
ltext(COMM, "COMM" )
ltext(VARARG, "VARARG" )

ltext(VOID, "" )
ltext(C, "C" )
ltext(SYSCALL, "SYSCALL")
ltext(STDCALL, "STDCALL")
ltext(PASCAL, "PASCAL" )
ltext(FORTRAN, "FORTRAN")
ltext(BASIC, "BASIC" )
ltext(FASTCALL, "FASTCALL")

ltext( TXT_MACROS, "Macros:" )
ltext( TXT_MACROCAP, "                N a m e                 Type" )
ltext( TXT_STRUCTS, "Structures and Unions:" )
ltext( TXT_STRUCTCAP, "                N a m e                 Size/Ofs   Type" )
ltext( TXT_RECORDS, "Records:" )
ltext( TXT_RECORDCAP, "                N a m e                 Width   # fields\n" "                                        Shift   Width    Mask   Initial" )
ltext( TXT_TYPEDEFS, "Types:" )
ltext( TXT_TYPEDEFCAP, "                N a m e                 Size    Attr" )
ltext( TXT_SEGS, "Segments and Groups:" )
ltext( TXT_SEGCAP, "                N a m e                 Size     Length   Align   Combine Class" )
ltext( TXT_PROCS, "Procedures, parameters and locals:" )
ltext( TXT_PROCCAP, "                N a m e                 Type     Value    Segment  Length" )
ltext( TXT_SYMBOLS, "Symbols:" )
ltext( TXT_SYMCAP, "                N a m e                 Type       Value     Attr")
# 38 "main.c" 2
# 1 "./macro.h" 1
# 36 "./macro.h"
enum macro_flags {

    MF_LABEL = 0x01,

    MF_NOSAVE = 0x02,
    MF_IGNARGS = 0x04
};



extern int GetLiteralValue( char *, const char * );
extern int RunMacro( struct dsym *, int, struct asm_tok[], char *, int, bool * );
extern ret_code ExpandText( char *, struct asm_tok[], unsigned int );
extern int ExpandLineItems( char *, int, struct asm_tok[], int, int );
extern ret_code ExpandLine( char *, struct asm_tok[] );
extern void ExpandLiterals( int i, struct asm_tok[] );



extern struct dsym *CreateMacro( const char * );
extern void ReleaseMacroData( struct dsym * );
extern void fill_placeholders( char *, const char *, unsigned, unsigned, char * * );
extern void SkipCurrentQueue( struct asm_tok[] );
extern ret_code StoreMacro( struct dsym *, int, struct asm_tok[], bool );
extern ret_code MacroInit( int );






extern struct asym *SetTextMacro( struct asm_tok[], struct asym *, const char *, const char * );
extern struct asym *AddPredefinedText( const char *, const char * );
extern int TextItemError( struct asm_tok * );

extern void StringInit( void );
# 39 "main.c" 2
# 1 "./mangle.h" 1
# 34 "./mangle.h"
extern int Mangle( struct asym *, char * );
extern void SetMangler( struct asym *, int, const char * );
# 40 "main.c" 2
# 1 "./memalloc.h" 1
# 34 "./memalloc.h"
extern void MemInit( void );
extern void MemFini( void );
extern void *MemAlloc( size_t size );
extern void *MemRealloc( void *ptr, size_t size );
extern void MemFree( void *ptr );
# 50 "./memalloc.h"
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/malloc.h" 1 3



# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stddef.h" 1 3
# 14 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stddef.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 1 3
# 127 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/lib/libc/musl/arch/emscripten/bits/alltypes.h" 3
typedef int ptrdiff_t;
# 15 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/stddef.h" 2 3
# 5 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/malloc.h" 2 3








struct mallinfo {
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};



extern struct mallinfo mallinfo(void);

extern void malloc_stats(void);

extern int mallopt(int, int);

extern size_t malloc_usable_size(void*);
# 46 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/malloc.h" 3
# 1 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/libc/malloc.h" 1 3
# 47 "/Users/jfmmeyers/Downloads/emsdk_portable/emscripten/1.35.0/system/include/compat/malloc.h" 2 3
# 50 "./memalloc.h" 2
# 68 "./memalloc.h"
extern void *LclAlloc( size_t );
# 41 "main.c" 2
# 1 "./msgdef.h" 1
# 11 "./msgdef.h"
static const char * const msgtexts[] = {
"usage: JWasm [ options ] filelist [@env_var]\n" "Run \"JWasm -?\" or \"JWasm -h\" for more info\n",
"%s: %lu lines, %u passes, %u ms, %u warnings, %u errors",
"JWasm v" "2.12" "pre" ", " "Dec  4 2015",
"Masm-compatible assembler.\n" "Portions Copyright (c) 1992-2002 Sybase, Inc. All Rights Reserved.\n" "Source code is available under the Sybase Open Watcom Public License.\n",
"Error",
"Warning",
"Fatal error",


"readonly",
"alignment",
"combine",
"segment word size",
"class",
"characteristics",
"alias",



"",
"",
"",
"",
"",
"",
"",
"",
"",
"",

"Value not within allowed range %s",
"Invalid associated segment: %s",
# 52 "./msgdef.h"
"",
"",


"Instruction prefix not allowed",
"Multiple base registers not allowed",
"Instruction or register not accepted in current CPU mode",
"invalid addressing mode with current CPU setting",
"Cannot use TR%u-TR%u with current CPU setting",
"Must be index or base register",
"Multiple index registers not allowed",
"Too few bits in RECORD: %s",
"Scale factor must be 1, 2, 4 or 8",
"Cannot be used as index register: %s",

"Base and index register differ in size",



"Expecting comma: %s",
"ORG needs a constant or local offset",
"POP CS is not allowed",
"Only MOV can use special register",
"Cannot use SHORT with CALL",
"Only SHORT jump distance is allowed",
"Syntax error",
"Prefix must be followed by an instruction",
"Syntax error: Unexpected colon",
"Operands must be the same size: %u - %u",
"Invalid instruction operands",
"Jump distance not possible in current CPU mode",
"Immediate data out of range",
"Can not use short or near modifiers with this instruction",
"Jump out of range by %d byte(s)",
"Displacement out of range: 0x%" "ll" "X",
"Initializer value too large",
"Symbol already defined: %s",
"Offset magnitude too large for specified size",
"Magnitude of offset exceeds 16 bit",
"Operand 2 too big",
"Operand 1 too small",
"Line too long",
"Too many tokens in a line",
"Symbol not defined : %s.%s",
"Expression expected: %s",
"Constant expected",
"Constant operand is expected",
".ELSE clause already occured in this .IF block",
"Multiple overrides",
"Segment, group or segment register expected",
"Identifier too long",
"Invalid operand size for instruction",
"Not supported: %s",
"Size not specified, assuming: %s",
"Floating-point initializer ignored",
"Only SHORT and NEAR jump distance is allowed",
"Initializer magnitude too large for specified size",
"Segment attribute is defined already: %s",
"Segment definition changed: %s, %s",
"Class name too long",
"Block nesting error: %s",
"Segment attribute is unknown: %s",
"Must be in segment block",
"Segment not defined: %s",
"Colon is expected",
"Invalid qualified type: %s",
"Qualified type is expected",
"Missing macro argument: iteration %u",
"Library name is missing",
"Cannot access label through segment registers: %s",
"Line too long after expansion: %40s",
"Language type must be specified",
"PROC, MACRO or macro loop directive must precede LOCAL",
"Cannot nest procedures",
"VARARG requires C calling convention",
"Multiple .MODEL directives, .MODEL ignored",
"Model is not declared",
"Backquote missing: `%s",
"COMMENT delimiter expected",
"END directive required at end of file",
"Nesting level too deep",
"Macro nesting level too deep",
"Symbol not defined : %s",
"Language attribute conflict: %s",
"No filename specified.",
"Out of Memory",
"Cannot open file: \"%s\" [%s]",
"Cannot close file: %s [%u]",
"File write error: %s [%u]",
"Invalid command-line option: %s",
"Internal error in %s(%u)\n",
"Expecting closing square bracket",
"Expecting file name",
"Too many errors",
"forced error%s",
"forced error: Value not equal to 0: %d%s",
"forced error: Value equal to 0: %d%s",
"forced error: symbol defined: %s",
"forced error: symbol not defined: %s",
"forced error: string blank : <%s>%s",
"forced error: string not blank : <%s>%s",
"forced error: strings not equal : <%s> : <%s>%s",
"forced error: strings equal : <%s> : <%s>%s",
"%*s%s(%" "" "u): Included by",
"%*s%s(%" "" "u)[%s]: Macro called from",
"%*s%s(%" "" "u): iteration %" "" "u: Macro called from",
"%*s%s(%" "" "u): Main line code",
"Extending jump",
"Directive ignored: %s",
"number must be a power of 2: %" "" "u",
"Incompatible with segment alignment: %s",
"Segment expected: %s",
"Incompatible CPU mode for %u-bit segment",
"Far call is converted to near call.",
"CPU option %s is not valid for selected CPU.",
"Segment '%s' is in another group already",
"Symbol type conflict: %s",
"Conflicting parameter definition: %s",
"PROC and PROTO calling convention conflict",
"Non-benign %s redefinition: %s",
"Too many bits in RECORD: %s",
"Statement not allowed inside structure definition",
"Unmatched block nesting: %s",
"Symbol redefinition: %s",
"Text item required",
"INVOKE argument type mismatch: argument %u",
"Too few arguments to INVOKE: %s",
"VARARG parameter must be last",

"LABEL parameter must be first",



"Too many arguments in macro call: %s: %s",
"Missing operator in expression",
"Unexpected literal found in expression: %s",
"Initializer must be a string or single item: %s",
"Too many initial values for structure: %s",
"Too many initial values for array: %s",
"String or text literal too long",
"PROLOGUE must be macro function",
"EPILOGUE must be macro procedure: %s",
"Reserved word expected",
"INVOKE requires prototype for procedure",
"Invalid type for data declaration: %s",
"Operand must be RECORD type or field",
"Unmatched macro nesting",
"Empty (null) string",
"No segment information to create fixup: %s",
"Register value overwritten by INVOKE",
"Missing quotation mark in string",
"Divide by zero in expression",
"General Failure",
"Cannot have implicit far jump or call to near label",
"Invalid use of register",
"Distance invalid for current segment",
"Initializer magnitude too large: %s",
"Cannot add two relocatable labels",
"Cannot define as public or external: %s",
"Positive value expected",
"FAR not allowed in FLAT model COMM variables",
"Too many arguments to INVOKE",
"Directive must appear inside a macro",
"Invalid type expression",
"Cannot declare scoped code label as PUBLIC: %s",
"Invalid radix tag",
"Instruction operand must have size",
"Use of register assumed to ERROR",
"Instructions and initialized data not supported in %s segments",
"Literal expected after '='",



"",

"Line number information for segment without class 'CODE': %s",
"Operand must be relocatable",
"Constant or relocatable label expected",
"[ELSE]IF2/.ERR2 not allowed, single-pass assembler",
"Expression too complex for UNTILCXZ",
"Operands must be in same segment",
"Invalid use of external symbol: %s",

"For -coff leading underscore required for start label: %s",



"Invalid command-line value, default is used: -%s",
"Unknown fixup type: %u at %s.%lX",
"Unsupported fixup type for %s: %s",
"Invalid fixup type for %s: %u at location %s.%lX",
"Syntax error in control-flow directive",
"Invalid .model parameter for flat model",

"Output format doesn't support externals: %s",
"Invalid start label for -bin",

"No start label defined",
"No stack defined",
"Invalid alignment - value must be 2^n (n=4..15)",
# 264 "./msgdef.h"
"Index value past end of string: %d",
"Count value too large",
"Count must be positive or zero",
"Syntax error: %s",

"Too many unwind codes in FRAME procedure",




"Model must be FLAT",



"Must use floating-point initializer",
"ORG directive not allowed in unions",
"Struct alignment must be 1, 2, 4, 8, 16 or 32",
"Structure cannot be instanced",
"Missing angle bracket or brace in literal",
"Nondigit in number: %s",
"16bit fixup for 32bit label: %s",
"Too many macro placeholders",
"Missing macro argument: %s, parameter %u",
"Doesn't work with 32-bit segments: %s",
"Segment exceeds 64k limit: %s",
"Not supported with OMF format: %s",
"Not supported with current output format: %s",
"Unknown default prologue argument: %s",
"LOADDS ignored in flat model",
"Missing right parenthesis in expression",
"Invalid operand for %s: %s",
"Structure improperly initialized: %s",
"Expected: %s",
"Invalid data initializer: %s",
"Expected data label",
"Expression must be a code address",
"-n Option needs a valid name parameter",
"Constant value too large: %" "ll" "Xh",
"Text macro used prior to definition: %s",
"Offset size incompatible with current segment",
"Instruction form requires 80386",
"Group/Segment offset size conflict: %s - %s",
"Assembly passes reached: %u",
"Filename parameter must be enclosed in <> or quotes",
"Start address on END directive ignored with .STARTUP",
"Invalid symbol type in expression: %s",
"Missing right parenthesis",
"Directive must be in control block",
"Expected: memory model",
"Type is wrong size for register",
"IF[n]DEF expects a plain symbol as argument: %s",
"Jump destination must specify a label",
"Ignored: %s",
"Missing argument for cmdline option",
"Invalid coprocessor register",

"Registers AH-DH may not be used with SPL-DIL or R8-R15",
".ENDPROLOG found before EH directives",
"Missing FRAME in PROC, no unwind code will be generated",
"Bad alignment for offset in unwind code",
"Nonzero value expected",
"Size of prolog too big, must be < 256 bytes",
"Missing .ENDPROLOG: %s",
# 337 "./msgdef.h"
".SAFESEH argument must be a PROC",
"Directive ignored without -%s switch",





"ELF GNU extensions (8/16-bit relocations) used",



"Syntax error in expression",
"Macro label not defined: %s",
"Procedure argument or local not referenced: %s",
"Group definition too large, truncated: %s",
"COMM variable exceeds 64K: %s",
"Must be public or external: %s",
"parameter/local name is reserved word: %s",
"real or BCD number not allowed",
"structure field expected",
"Constant value too large: %" "ll" "X%016" "ll" "Xh",
"ELSE clause already occured in this IF block",
"Illegal use of segment register",
"Group exceeds 64K: %s",
"EXPORT must be FAR: %s",
};
# 42 "main.c" 2
# 1 "./msgtext.h" 1
# 11 "./msgtext.h"
extern const char *MsgGetEx( int );
# 43 "main.c" 2
# 1 "./myassert.h" 1
# 41 "./myassert.h"
extern int InternalError( const char *file, unsigned line );
# 44 "main.c" 2
# 1 "./omf.h" 1
# 11 "./omf.h"
struct line_num_info;

void omf_init( struct module_info * );

void omf_set_filepos( void );

void omf_OutSelect( bool );
void omf_FlushCurrSeg( void );
void omf_check_flush( const struct line_num_info * );
# 45 "main.c" 2
# 1 "./omfint.h" 1
# 55 "./omfint.h"
struct coment_info {
    uint_8 attr;
    uint_8 cmt_class;
};

struct modend_info {
    uint_8 main_module;
    uint_8 start_addrs;
};





struct lnames_info {
    uint_16 first_idx;
    uint_16 num_names;
};


struct grpdef_info {
    uint_16 idx;
};

struct physref {
    uint_16 frame;
    uint_32 offset;
};

struct segdef_info {
    uint_16 idx;
    uint_8 use_32;
    uint_8 align;
    uint_8 combine;


    struct physref abs;
    uint_32 seg_length;
    uint_16 seg_lname_idx;
    uint_16 class_lname_idx;
    uint_16 ovl_lname_idx;
};


struct ledata_info {
    uint_16 idx;
    uint_32 offset;
};


struct base_info {
    uint_16 grp_idx;
    uint_16 seg_idx;
    uint_16 frame;
};


struct linnum_info {
    struct base_info base;
};


struct pubdef_info {
    struct base_info base;
};



struct comdat_info {
    uint_8 flags;
    uint_8 attributes;
    uint_8 align;
    uint_32 offset;
    uint_16 type_idx;
    struct base_info base;
    uint_16 public_lname_idx;
};


struct linsym_info {
    uint_8 flags;
    uint_16 public_lname_idx;
};


struct omf_rec {
    unsigned length;
    unsigned curoff;
    uint_8 *data;
    uint_8 command;
    uint_8 is_32;
    union {
        struct coment_info coment;
        struct modend_info modend;
        struct lnames_info lnames;
        struct lnames_info extdef;
        struct lnames_info comdef;
        struct grpdef_info grpdef;
        struct segdef_info segdef;
        struct ledata_info ledata;
        struct linnum_info linnum;
        struct pubdef_info pubdef;

        struct comdat_info comdat;
        struct linsym_info linsym;






    } d;
};

extern void omf_write_record( const struct omf_rec * );




enum fixgen_types {
    FIX_GEN_INTEL,
    FIX_GEN_MS386
};

extern unsigned OmfFixGenFix( const struct fixup *fix, uint_32 start_loc, uint_8 *buf, enum fixgen_types type );
extern unsigned OmfFixGenFixModend( const struct fixup *, uint_8 *buf, uint_32, enum fixgen_types type );
# 46 "main.c" 2
# 1 "./omfspec.h" 1
# 55 "./omfspec.h"
enum segdef_align_values {
    SEGDEF_ALIGN_ABS = 0,
    SEGDEF_ALIGN_BYTE = 1,
    SEGDEF_ALIGN_WORD = 2,
    SEGDEF_ALIGN_PARA = 3,
    SEGDEF_ALIGN_PAGE = 4,
    SEGDEF_ALIGN_DWORD = 5,



};






enum combine_attributes {
    COMB_INVALID = 0,
    COMB_ABOVEALL = 1,
    COMB_ADDOFF = 2,
    COMB_BAD = 3,
    COMB_FOUR = 4,
    COMB_STACK = 5,
    COMB_COMMON = 6,
    COMB_ALIGNTOP = 7,
};
# 98 "./omfspec.h"
enum frame_methods {
    FRAME_SEG = 0,
    FRAME_GRP = 1,
    FRAME_EXT = 2,

    FRAME_LOC = 4,
    FRAME_TARG = 5,
    FRAME_NONE = 6,
};






enum target_methods {
    TARGET_SEGWD = 0,
    TARGET_GRPWD = 1,
    TARGET_EXTWD = 2,


    TARGET_SEG = 4,
    TARGET_GRP = 5,
    TARGET_EXT = 6,


    TARGET_WITH_DISPL = ~4,
};



enum {
    FIXUPP_FIXUP = 0x80,

    FIXDAT_FTHREAD = 0x80,
    FIXDAT_TTHREAD = 8,
    FIXDAT_PBIT = 4,
    FIXDAT_MBIT = 0x40,
    TRDDAT_DBIT = 0x40,





    GRP_SEGIDX = 0xff,
    GRP_EXTIDX = 0xfe,
    GRP_FULLNAME = 0xfd,
    GRP_LTLDATA = 0xfb,
    GRP_ADDR = 0xfa,
};





enum cmd_omf {
# 168 "./omfspec.h"
    CMD_MIN_CMD = 0x80,

    CMD_THEADR = 0x80,
    CMD_LHEADR = 0x82,


    CMD_COMENT = 0x88,
    CMD_MODEND = 0x8a,
    CMD_EXTDEF = 0x8c,
    CMD_TYPDEF = 0x8e,
    CMD_PUBDEF = 0x90,

    CMD_LINNUM = 0x94,
    CMD_LNAMES = 0x96,
    CMD_SEGDEF = 0x98,
    CMD_GRPDEF = 0x9a,
    CMD_FIXUPP = 0x9c,
    CMD_LEDATA = 0xa0,
    CMD_LIDATA = 0xa2,




    CMD_COMDEF = 0xb0,
    CMD_BAKPAT = 0xb2,


    CMD_LEXTDEF = 0xb4,
    CMD_STATIC_EXTDEF = 0xb4,
    CMD_LPUBDEF = 0xb6,
    CMD_LCOMDEF = 0xb8,
    CMD_STATIC_COMDEF = 0xb8,

    CMD_CEXTDEF = 0xbc,
    CMD_COMDAT = 0xc2,
    CMD_LINSYM = 0xc4,
    CMD_ALIAS = 0xc6,
    CMD_NBKPAT = 0xc8,
    CMD_LLNAMES = 0xca,
    CMD_MAX_CMD = 0xca,
# 229 "./omfspec.h"
};



enum omf_fixup_types {
    LOC_OFFSET_LO = 0,
    LOC_OFFSET = 1,
    LOC_BASE = 2,
    LOC_BASE_OFFSET = 3,
    LOC_OFFSET_HI = 4,




    LOC_MS_LINK_OFFSET = 5,
    LOC_MS_OFFSET_32 = 9,
    LOC_MS_BASE_OFFSET_32= 11,
    LOC_MS_LINK_OFFSET_32= 13
};



enum {
    CMT_TNP = 0x80,
    CMT_TNL = 0x40,
};
# 267 "./omfspec.h"
enum omf_comment_classes {






    CMT_DOSSEG = 0x9e,
    CMT_DEFAULT_LIBRARY = 0x9f,
    CMT_OMF_EXT = 0xa0,
    CMT_MS_OMF = 0xa1,
    CMT_MS_END_PASS_1 = 0xa2,




    CMT_WKEXT = 0xa8,


    CMT_SRCFILE = 0xe8,
    CMT_DEPENDENCY = 0xe9,
    CMT_DISASM_DIRECTIVE= 0xfd,
    CMT_LINKER_DIRECTIVE= 0xfe,


};




enum omf_ext_subtype {
    CMT_EXT_IMPDEF = 0x01,
    CMT_EXT_EXPDEF = 0x02,
    CMT_EXT_INCDEF = 0x03,
    CMT_EXT_PMLIB = 0x04,
    CMT_EXT_LNKDIR = 0x05,
    CMT_EXT_BIGEND = 0x06,
    CMT_EXT_PRECOMP = 0x07,
};







enum linker_directives {
    LDIR_SOURCE_LANGUAGE= 'D',
    LDIR_DEFAULT_LIBRARY= 'L',
    LDIR_OPT_FAR_CALLS = 'O',







};





enum disasm_directives {
# 340 "./omfspec.h"
    DDIR_SCAN_TABLE_32 = 'S',
    DDIR_SCAN_TABLE = 's'
};




enum comdef_types {
    COMDEF_FAR = 0x61,
    COMDEF_NEAR = 0x62,
    COMDEF_LEAF_SIZE = 0x80,
    COMDEF_LEAF_2 = 0x81,
    COMDEF_LEAF_3 = 0x84,
    COMDEF_LEAF_4 = 0x88
};





enum comdat_flags {



    COMDAT_CONTINUE = 0x01,
    COMDAT_ITERATED = 0x02,
    COMDAT_LOCAL = 0x04,
    COMDAT_DATAINCODE = 0x08,



    COMDAT_ALLOC_MASK = 0x0f,
    COMDAT_EXPLICIT = 0x00,
    COMDAT_FAR_CODE = 0x01,
    COMDAT_FAR_DATA = 0x02,
    COMDAT_CODE32 = 0x03,
    COMDAT_DATA32 = 0x04,



    COMDAT_MATCH_MASK = 0xf0,
    COMDAT_MATCH_NONE = 0x00,
    COMDAT_MATCH_ANY = 0x10,
    COMDAT_MATCH_SAME = 0x20,
    COMDAT_MATCH_EXACT = 0x30,



    COMDAT_ALIGN_SEG = 0x00,
    COMDAT_ALIGN_BYTE = 0x01,
    COMDAT_ALIGN_WORD = 0x02,
    COMDAT_ALIGN_PARA = 0x03,
    COMDAT_ALIGN_4K = 0x04,
    COMDAT_ALIGN_DWORD = 0x05
};
# 47 "main.c" 2
# 1 "./operands.h" 1
# 43 "./operands.h"
enum operand_type {
    OP_NONE = 0,
    OP_R8 = 0x00000001,
    OP_R16 = 0x00000002,
    OP_R32 = 0x00000004,

    OP_R64 = 0x00000008,

    OP_MMX = 0x00000010,
    OP_XMM = 0x00000020,

    OP_YMM = 0x00000040,

    OP_A = 0x00000080,
    OP_CL_ONLY = 0x00000100,
    OP_DX_ONLY = 0x00000200,
    OP_RSPEC = 0x00000400,
    OP_SR86 = 0x00000800,
    OP_SR386 = 0x00001000,

    OP_ST = 0x00002000,
    OP_ST_REG = 0x00004000,

    OP_AL = ( OP_A | OP_R8 ),
    OP_AX = ( OP_A | OP_R16 ),
    OP_EAX = ( OP_A | OP_R32 ),

    OP_RAX = ( OP_A | OP_R64 ),

    OP_CL = ( OP_CL_ONLY | OP_R8 ),
    OP_DX = ( OP_DX_ONLY | OP_R16 ),

    OP_RGT8 = ( OP_R16 | OP_R32 | OP_R64 ),
    OP_RGT16 = ( OP_R32 | OP_R64 ),
    OP_R = ( OP_R8 | OP_R16 | OP_R32 | OP_R64 ),






    OP_SR = ( OP_SR86 | OP_SR386 ),
    OP_STI = ( OP_ST | OP_ST_REG ),

    OP_I8 = 0x00010000,
    OP_I16 = 0x00020000,
    OP_I32 = 0x00040000,

    OP_I64 = 0x00080000,

    OP_I48 = 0x00100000,





    OP_I_1 = ( 0x00200000 | OP_I8 ),
    OP_I_3 = ( 0x00400000 | OP_I8 ),
    OP_I8_U = ( 0x00800000 | OP_I8 | OP_I16 | OP_I32 ),

    OP_I = ( OP_I8 | OP_I16 | OP_I32 ),
    OP_IGE8 = ( OP_I8 | OP_I16 | OP_I32 ),
    OP_IGE16 = ( OP_I16 | OP_I32 ),

    OP_I_ANY = ( OP_I | OP_I64 | OP_I48 ),




    OP_M08 = 0x01000000,
    OP_M16 = 0x02000000,
    OP_M32 = 0x04000000,
    OP_M64 = 0x08000000,
    OP_M128 = 0x10000000,

    OP_M256 = 0x20000000,

    OP_M48 = 0x40000000,
    OP_M80 = 0x80000000,


    OP_MGT8 = ( OP_M16 | OP_M32 | OP_M64 ),
    OP_MGT16 = ( OP_M32 | OP_M64 ),




    OP_MFPTR = ( OP_M32 | OP_M48 | OP_M80 ),

    OP_M_ANY = ( OP_M08 | OP_M16 | OP_M32 | OP_M64 | OP_M128 | OP_M256 | OP_M48 | OP_M80 ),





    OP_M = ( OP_M08 | OP_M16 | OP_M32 | OP_M64 | OP_M80 | OP_M128 ),

    OP_MS = ( OP_M08 | OP_M16 | OP_M32 | OP_M64 ),
};


enum operand3_type {
    OP3_NONE = 0,
    OP3_CL,
    OP3_I8_U,
    OP3_XMM0,
    OP3_I,
    OP3_HID,

    OP3_XMM = OP3_XMM0,
    OP3_YMM = OP3_XMM0,

};
# 48 "main.c" 2
# 1 "./opndcls.h" 1





OpCls( NONE, NONE, NONE )
OpCls( AX, NONE, NONE )
OpCls( I, NONE, NONE )
OpCls( I16, NONE, NONE )
OpCls( I32, NONE, NONE )
OpCls( I48, NONE, NONE )
OpCls( I8, NONE, NONE )
OpCls( I8_U, NONE, NONE )
OpCls( I_3, NONE, NONE )
OpCls( M08, NONE, NONE )
OpCls( M16, NONE, NONE )
OpCls( M16_M32, NONE, NONE )

OpCls( M16_M64, NONE, NONE )

OpCls( M32, NONE, NONE )
OpCls( M48, NONE, NONE )
OpCls( M64, NONE, NONE )
OpCls( M80, NONE, NONE )

OpCls( M128, NONE, NONE )

OpCls( MGT8, NONE, NONE )
OpCls( MS, NONE, NONE )
OpCls( M_ANY, NONE, NONE )
OpCls( R, NONE, NONE )
OpCls( R16_M16, NONE, NONE )
OpCls( R16_R32, NONE, NONE )
OpCls( R32, NONE, NONE )

OpCls( R64, NONE, NONE )
OpCls( R64_M64, NONE, NONE )
OpCls( R16_R64, NONE, NONE )

OpCls( R8_M08, NONE, NONE )
OpCls( RGT16, NONE, NONE )
OpCls( RGT8, NONE, NONE )
OpCls( SR, NONE, NONE )
OpCls( SR86, NONE, NONE )

OpCls( SR386, NONE, NONE )

OpCls( STI, NONE, NONE )
OpCls( A, DX_ONLY, NONE )
OpCls( A, I, NONE )
OpCls( A, I8_U, NONE )
OpCls( A, MS, NONE )
OpCls( A, RGT8, NONE )
OpCls( DX_ONLY, A, NONE )
OpCls( DX_ONLY, M08, NONE )
OpCls( DX_ONLY, M16, NONE )
OpCls( DX_ONLY, M32, NONE )
OpCls( DX_ONLY, MS, NONE )
OpCls( I16, I8_U, NONE )
OpCls( I8_U, A, NONE )
OpCls( M08, DX_ONLY, NONE )
OpCls( M08, M08, NONE )
OpCls( M16, DX_ONLY, NONE )
OpCls( M16, M16, NONE )
OpCls( M32, DX_ONLY, NONE )
OpCls( M32, M32, NONE )
OpCls( M32, XMM, NONE )

OpCls( M64, M64, NONE )

OpCls( M64, MMX, NONE )
OpCls( M64, XMM, NONE )
OpCls( M128, XMM, NONE )

OpCls( M256, YMM, NONE )

OpCls( MGT16, RGT16, NONE )
OpCls( MGT8, I8, NONE )
OpCls( MGT8, I8_U, NONE )
OpCls( MGT8, RGT8, NONE )
OpCls( MMX, I8_U, NONE )
OpCls( MMX, MMX, NONE )
OpCls( MMX, MMX_M64, NONE )

OpCls( MMX, MMX_M64_08, NONE )
OpCls( MMX, MMX_M64_16, NONE )
OpCls( MMX, MMX_M64_32, NONE )

OpCls( MMX, RMGT16, NONE )
OpCls( MMX, XMM, NONE )
OpCls( MMX, XMM_M64, NONE )
OpCls( MMX, XMM_M128, NONE )
OpCls( MS, A, NONE )
OpCls( MS, DX_ONLY, NONE )
OpCls( MS, I, NONE )
OpCls( MS, MS, NONE )
OpCls( MS, R, NONE )
OpCls( MS, SR, NONE )
OpCls( R, I, NONE )
OpCls( R, MS, NONE )
OpCls( R, R, NONE )
OpCls( R, R_MS, NONE )
OpCls( R16_M16, R16, NONE )
OpCls( R16_R32, I, NONE )

OpCls( R64, I, NONE )
OpCls( R64, I64, NONE )
OpCls( R64, R32_M32, NONE )

OpCls( R8, I, NONE )
OpCls( RGT16, MMX, NONE )
OpCls( RGT16, R8_M08, NONE )
OpCls( RGT16, RGT8_MS, NONE )
OpCls( RGT16, RSPEC, NONE )
OpCls( RGT16, XMM, NONE )

OpCls( RGT16, YMM, NONE )

OpCls( RGT16, XMM_M32, NONE )
OpCls( RGT16, XMM_M64, NONE )

OpCls( R32, R32_M32, NONE )
OpCls( R32_M32, R32, NONE )
OpCls( RGT16, M128, NONE )

OpCls( R64, R64_M64, NONE )
OpCls( R64_M64, R64, NONE )






OpCls( RGT8, A, NONE )
OpCls( RGT8, I, NONE )
OpCls( RGT8, I8, NONE )
OpCls( RGT8, I8_U, NONE )
OpCls( RGT8, MFPTR, NONE )
OpCls( RGT8, MS, NONE )
OpCls( RGT8, RGT8, NONE )
OpCls( RGT8, RGT8_MS, NONE )
OpCls( RGT8, R_MS, NONE )
OpCls( RGT8, SR, NONE )






OpCls( RMGT16, MMX, NONE )
OpCls( RMGT16, XMM, NONE )

OpCls( RSPEC, RGT16, NONE )
OpCls( R_MS, CL_ONLY, NONE )
OpCls( R_MS, I, NONE )
OpCls( R_MS, I8_U, NONE )
OpCls( R_MS, I_1, NONE )
OpCls( SR, MS, NONE )
OpCls( SR, RGT8, NONE )
OpCls( ST, STI, NONE )
OpCls( STI, ST, NONE )
OpCls( XMM, I8_U, NONE )

OpCls( XMM, M32, NONE )

OpCls( XMM, M64, NONE )
OpCls( XMM, M128, NONE )
OpCls( XMM, MMX, NONE )
OpCls( XMM, MMX_M64, NONE )
OpCls( XMM, RMGT16, NONE )
OpCls( XMM, XMM, NONE )
OpCls( XMM, XMM_M16, NONE )
OpCls( XMM, XMM_M32, NONE )
OpCls( XMM, XMM_M64, NONE )
OpCls( XMM, XMM_M128, NONE )

OpCls( XMM, XMM_M128_08, NONE )
OpCls( XMM, XMM_M128_16, NONE )
OpCls( XMM, XMM_M128_32, NONE )
OpCls( XMM, XMM_M128_64, NONE )


OpCls( XMM, YMM_M256, NONE )
OpCls( YMM, M32, NONE )
OpCls( YMM, M64, NONE )
OpCls( YMM, M128, NONE )
OpCls( YMM, M256, NONE )
OpCls( YMM, YMM_M256, NONE )

OpCls( M16, XMM, I8_U )
OpCls( M32, XMM, I8_U )
OpCls( MMX, MMX_M64, I8_U )


OpCls( MMX, R32_M16, I8_U )
OpCls( R32_M32, XMM, I8_U )

OpCls( R64_M64, XMM, I8_U )

OpCls( RGT16, MMX, I8_U )
OpCls( RGT16, XMM, I8_U )
OpCls( RGT16_M08,XMM, I8_U )
OpCls( RGT8, R_MS, I )
OpCls( RGT8, R_MS, I8_U )
OpCls( RGT8_MGT8,RGT8, CL )
OpCls( RGT8_MGT8,RGT8, I8_U )
OpCls( XMM, I8_U, I8_U )


OpCls( XMM, R32_M16, I8_U )
OpCls( XMM, R32_M08, I8_U )
OpCls( XMM, R32_M32, I8_U )

OpCls( XMM, R64_M64, I8_U )

OpCls( XMM, XMM, I8_U )
OpCls( XMM, XMM_M32 , HID )
OpCls( XMM, XMM_M64 , HID )
OpCls( XMM, XMM_M128, HID )
OpCls( XMM, XMM_M32 , I8_U )
OpCls( XMM, XMM_M64 , I8_U )
OpCls( XMM, XMM_M128, I8_U )
OpCls( XMM, XMM_M128, XMM0 )

OpCls( M128, YMM, I8_U )
OpCls( XMM, XMM_M128, XMM )
OpCls( XMM, YMM, I8_U )
OpCls( YMM, XMM_M128, I8_U )
OpCls( YMM, YMM_M256, I8_U )
OpCls( YMM, YMM_M256, YMM )
# 49 "main.c" 2
# 1 "./parser.h" 1
# 35 "./parser.h"
# 1 "./symbols.h" 1
# 43 "./symbols.h"
enum sym_state {
    SYM_UNDEFINED,
    SYM_INTERNAL,
    SYM_EXTERNAL,
    SYM_SEG,
    SYM_GRP,
    SYM_STACK,
    SYM_STRUCT_FIELD,
    SYM_TYPE,
    SYM_ALIAS,
    SYM_MACRO,
    SYM_TMACRO,
    SYM_CLASS_LNAME
};




enum memtype {
    MT_SIZE_MASK = 0x1F,
    MT_FLOAT = 0x20,
    MT_SIGNED = 0x40,
    MT_BYTE = 1 - 1,
    MT_SBYTE = MT_BYTE | MT_SIGNED,
    MT_WORD = 2 - 1,
    MT_SWORD = MT_WORD | MT_SIGNED,
    MT_DWORD = 4 - 1,
    MT_SDWORD= MT_DWORD | MT_SIGNED,
    MT_REAL4 = MT_DWORD | MT_FLOAT,
    MT_FWORD = 6 - 1,
    MT_QWORD = 8 - 1,
    MT_SQWORD= MT_QWORD | MT_SIGNED,
    MT_REAL8 = MT_QWORD | MT_FLOAT,
    MT_TBYTE = 10 - 1,
    MT_REAL10= MT_TBYTE | MT_FLOAT,
    MT_OWORD = 16 - 1,

    MT_YMMWORD = 32 - 1,

    MT_PROC = 0x80,
    MT_NEAR = 0x81,
    MT_FAR = 0x82,
    MT_EMPTY = 0xC0,
    MT_BITS = 0xC1,
    MT_PTR = 0xC3,
    MT_TYPE = 0xC4,
    MT_SPECIAL = 0x80,
    MT_SPECIAL_MASK = 0xC0,
    MT_ADDRESS = 0x80,
};
# 105 "./symbols.h"
struct macro_instance;

typedef void (* internal_func)( struct asym *, void * );

struct debug_info {
    uint_32 start_line;
    uint_32 end_line;
    uint_32 ln_fileofs;
    uint_16 line_numbers;
    uint_16 file;
    unsigned next_proc;
    unsigned next_file;
};

struct asym {

    struct asym *nextitem;
    char *name;
    union {
        int_32 offset;
        int_32 value;
        uint_32 uvalue;
        char *string_ptr;
        struct asym *substitute;

        ret_code (* func_ptr)( struct macro_instance *, char *, struct asm_tok * );

        int_32 class_lname_idx;
    };
    struct asym *segment;
    enum sym_state state;
    enum memtype mem_type;
    unsigned char used:1,
                    isdefined:1,
                    scoped:1,



                    iat_used:1,

                    isequate:1,
                    predefined:1,
                    variable:1,
                    ispublic:1;
    unsigned char list:1,
                    isarray:1,
                    isdata:1,
                    isproc:1,

                    issaved:1,




                    fwdref:1,
                    included:1;
    union {

        uint_32 first_size;






        struct {
            unsigned char Ofssize;
            unsigned char is_ptr;
            union {
                unsigned char ptr_memtype;
                unsigned char asmpass;
            };
            unsigned char seg_ofssize:2;
            unsigned char iscomm:1;
            unsigned char weak:1;
            unsigned char isfar:1;
            unsigned char is_vararg:1;
        };

        struct {
            unsigned char mac_vararg:1,
                            isfunc:1,

                            label:1,


                            mac_multiline:1,

                            purged:1;
        };
    };
    union {

        uint_32 first_length;

        uint_32 max_mbr_size;

        struct asym *target_type;

        uint_16 regist[2];
    };
    union {





        uint_32 total_size;

        int_32 value3264;

        struct dll_desc *dll;


        int_32 max_offset;
    };
    union {




        uint_32 total_length;
        struct asym *altname;
        struct debug_info *debuginfo;
        internal_func sfunc_ptr;
        struct {




            uint_16 cvtyperef;
            uint_8 typekind;
        };
    };

    uint_8 name_size;



    enum lang_type langtype;






    struct asym *type;

    union {

        struct fixup *bp_fixup;

        unsigned ext_idx;
        struct {

            uint_16 ext_idx1;
            uint_16 ext_idx2;
        };
    };
};






struct seg_item {
    struct seg_item *next;
    struct dsym *seg;
};

struct grp_info {
    struct seg_item *seglist;
    int grp_idx;
    int lname_idx;
    unsigned numseg;
};

typedef uint_8 * (* FlushSegFunc)( struct dsym *, uint_8 *, unsigned, void * );

struct seg_info {
    struct asym *group;
    uint_32 start_loc;
    union {
        uint_32 current_loc;
        uint_32 reloc_offset;
        uint_32 start_offset;
    };



    uint_8 *CodeBuffer;

    uint_32 bytes_written;
    union {
        struct asym *label_list;
        FlushSegFunc flushfunc;
    };
    struct {
        struct fixup *head;
        struct fixup *tail;
    } FixupList;
    union {
        void *LinnumQueue;
        uint_32 fileoffset;
        uint_32 num_linnums;
    };
    uint_32 num_relocs;
    unsigned seg_idx;
    enum seg_type segtype;
    int lname_idx;
    struct asym *clsym;
    union {
        uint_16 abs_frame;

        uint_16 comdat_number;
        uint_16 comdat_idx;

    };
    union {
        uint_32 abs_offset;
        char *aliasname;
    };
    unsigned char Ofssize;
    unsigned char characteristics;
    unsigned char alignment;

    unsigned char readonly:1;
    unsigned char info:1;
    unsigned char force32:1;
    unsigned char data_in_code:1;
    unsigned char internal:1;
    unsigned char written:1;
    unsigned char linnum_init:1;
    unsigned char combine:3;

    unsigned char comdat_selection:3;

};





struct proc_info {
    uint_16 *regslist;
    struct dsym *paralist;
    struct dsym *locallist;
    struct dsym *labellist;
    unsigned parasize;
    unsigned localsize;
    char *prologuearg;

    struct asym *exc_handler;
    int ReservedStack;

    uint_32 prolog_list_pos;
    union {
        unsigned char flags;
        struct {
            unsigned char has_vararg:1;
            unsigned char pe_type:1;
            unsigned char isexport:1;

            unsigned char forceframe:1;
            unsigned char loadds:1;
            unsigned char stackparam:1;

            unsigned char isframe:1;


            unsigned char fpo:1;

        };
    };
    uint_8 size_prolog;

    uint_16 basereg;

};



struct mparm_list {

    char *deflt;
    unsigned char required:1;
};



struct srcline {
    struct srcline *next;
    uint_8 ph_count;
    char line[1];
};



struct macro_info {
    uint_16 parmcnt;
    union {
        uint_16 localcnt;
        uint_16 autoexp;
    };
    struct mparm_list *parmlist;
    struct srcline *data;



    unsigned srcfile;
};



struct sfield {
    struct asym sym;
    struct sfield *next;

    char ivalue[1];
};

enum type_kind {
    TYPE_NONE,
    TYPE_STRUCT,
    TYPE_UNION,
    TYPE_TYPEDEF,
    TYPE_RECORD
};

struct struct_info {
    struct sfield *head;
    struct sfield *tail;






    uint_8 alignment;
    union {
        uint_8 flags;
        struct {
            unsigned char isInline:1;
            unsigned char isOpen:1;
            unsigned char OrgInside:1;
        };
    };
};






struct dsym {
    struct asym sym;
    union {
        struct seg_info *seginfo;
        struct grp_info *grpinfo;
        struct proc_info *procinfo;
        struct struct_info *structinfo;
        struct macro_info *macroinfo;




        struct dsym *nextll;
    } e;
# 483 "./symbols.h"
    struct dsym *next;
    union {






        struct dsym *prev;

        struct dsym *nextproc;

        struct dsym *nextlocal;

        struct dsym *nextparam;



    };
};

extern struct asym *SymAlloc( const char * );
extern void SymFree( struct asym * );

extern struct asym *SymCreate( const char * );
extern struct asym *SymLCreate( const char * );
extern struct asym *SymAddGlobal( struct asym * );
extern struct asym *SymAddLocal( struct asym *, const char * );
extern struct asym *SymLookup( const char * );
extern struct asym *SymLookupLocal( const char * );

extern struct asym *SymFind( const char *name );


extern void SymInit( void );
extern void SymFini( void );
extern void SymPassInit( int pass );
extern void SymMakeAllSymbolsPublic( void );
extern void SymGetAll( struct asym ** );
extern struct asym *SymEnum( struct asym *, int * );
extern uint_32 SymGetCount( void );




typedef int (* StrCmpFunc)(const void *, const void *, size_t );

extern StrCmpFunc SymCmpFunc;

extern void SymSetCmpFunc( void );
extern void SymClearLocal( void );
extern void SymSetLocal( struct asym * );
extern void SymGetLocal( struct asym * );
# 35 "./parser.h" 2

# 1 "./token.h" 1
# 40 "./token.h"
enum tok_type {
    T_FINAL,
    T_INSTRUCTION,
    T_REG,
    T_DIRECTIVE,
    T_UNARY_OPERATOR,
    T_BINARY_OPERATOR,
    T_STYPE,
    T_RES_ID,
    T_ID,
    T_STRING,
    T_NUM,
    T_FLOAT,
    T_BAD_NUM,
    T_DBL_COLON,

    T_OP_BRACKET = '(',
    T_OP_SQ_BRACKET = '[',
    T_CL_BRACKET = ')',
    T_CL_SQ_BRACKET = ']',
    T_COMMA = ',',
    T_COLON = ':',
    T_DOT = '.',
    T_QUESTION_MARK = '?',
    T_PERCENT = '%'
};

struct asm_tok {



    unsigned char token;

    union {
        unsigned char dirtype;
        unsigned char bytval;

        unsigned char precedence;
        char string_delim;
        char floattype;
        char numbase;
        char specval;
    };
    char *string_ptr;
    union {
        unsigned int tokval;
        unsigned int stringlen;
        unsigned int idarg;
        unsigned int itemlen;
        unsigned int lastidx;
    };
    char *tokpos;
};
# 36 "./parser.h" 2



enum special_token {
    T_NULL,


# 1 "./special.h" 1
# 34 "./special.h"
T_AL ,
T_CL ,
T_DL ,
T_BL ,
T_AH ,
T_CH ,
T_DH ,
T_BH ,

T_AX ,
T_CX ,
T_DX ,
T_BX ,
T_SP ,
T_BP ,
T_SI ,
T_DI ,

T_EAX ,
T_ECX ,
T_EDX ,
T_EBX ,
T_ESP ,
T_EBP ,
T_ESI ,
T_EDI ,


T_ES ,
T_CS ,
T_SS ,
T_DS ,
T_FS ,
T_GS ,

T_ST ,

T_MM0 ,
T_MM1 ,
T_MM2 ,
T_MM3 ,
T_MM4 ,
T_MM5 ,
T_MM6 ,
T_MM7 ,

T_XMM0 ,
T_XMM1 ,
T_XMM2 ,
T_XMM3 ,
T_XMM4 ,
T_XMM5 ,
T_XMM6 ,
T_XMM7 ,

T_YMM0 ,
T_YMM1 ,
T_YMM2 ,
T_YMM3 ,
T_YMM4 ,
T_YMM5 ,
T_YMM6 ,
T_YMM7 ,


T_CR0 ,
T_CR2 ,
T_CR3 ,
T_CR4 ,
T_DR0 ,
T_DR1 ,
T_DR2 ,
T_DR3 ,
T_DR6 ,
T_DR7 ,

T_TR3 ,
T_TR4 ,
T_TR5 ,
T_TR6 ,
T_TR7 ,







T_SPL ,
T_BPL ,
T_SIL ,
T_DIL ,
T_R8B ,
T_R9B ,
T_R10B ,
T_R11B ,
T_R12B ,
T_R13B ,
T_R14B ,
T_R15B ,

T_R8W ,
T_R9W ,
T_R10W ,
T_R11W ,
T_R12W ,
T_R13W ,
T_R14W ,
T_R15W ,

T_R8D ,
T_R9D ,
T_R10D ,
T_R11D ,
T_R12D ,
T_R13D ,
T_R14D ,
T_R15D ,

T_RAX ,
T_RCX ,
T_RDX ,
T_RBX ,
T_RSP ,
T_RBP ,
T_RSI ,
T_RDI ,
T_R8 ,
T_R9 ,
T_R10 ,
T_R11 ,
T_R12 ,
T_R13 ,
T_R14 ,
T_R15 ,

T_XMM8 ,
T_XMM9 ,
T_XMM10 ,
T_XMM11 ,
T_XMM12 ,
T_XMM13 ,
T_XMM14 ,
T_XMM15 ,

T_YMM8 ,
T_YMM9 ,
T_YMM10 ,
T_YMM11 ,
T_YMM12 ,
T_YMM13 ,
T_YMM14 ,
T_YMM15 ,


T_CR8 ,






T_BYTE ,
T_SBYTE ,
T_WORD ,
T_SWORD ,
T_DWORD ,
T_SDWORD ,
T_REAL4 ,
T_FWORD ,
T_QWORD ,
T_SQWORD ,
T_REAL8 ,
T_TBYTE ,
T_REAL10 ,
T_OWORD ,

T_YMMWORD ,


T_NEAR ,
T_FAR ,
T_NEAR16 ,
T_NEAR32 ,
T_FAR16 ,
T_FAR32 ,

T_MMWORD ,
T_XMMWORD ,




T_DOT_TYPE ,
T_HIGH ,

T_HIGH32 ,

T_HIGHWORD ,



T_IMAGEREL ,

T_LENGTH ,
T_LENGTHOF ,
T_LOW ,

T_LOW32 ,

T_LOWWORD ,
T_LROFFSET ,
T_MASK ,
T_OFFSET ,
T_OPATTR ,

T_SECTIONREL ,

T_SEG ,
T_SHORT ,
T_SIZE ,
T_SIZEOF ,
T_THIS ,
T_TYPE ,
T_WIDTH ,




T_EQ ,
T_NE ,
T_GE ,
T_GT ,
T_LE ,
T_LT ,
T_MOD ,
T_PTR ,



T_DUP ,
T_ADDR ,
T_FLAT ,
T_VARARG ,

T_FRAME ,




T_C ,
T_SYSCALL ,
T_STDCALL ,
T_PASCAL ,
T_FORTRAN ,
T_BASIC ,
T_FASTCALL ,
# 42 "./parser.h" 2




# 1 "./directve.h" 1
# 24 "./directve.h"
T_DOT_8086 ,
T_DOT_186 ,
T_DOT_286 ,
T_DOT_286C ,
T_DOT_286P ,
T_DOT_386 ,
T_DOT_386C ,
T_DOT_386P ,
T_DOT_486 ,
T_DOT_486P ,
T_DOT_586 ,
T_DOT_586P ,
T_DOT_686 ,
T_DOT_686P ,
T_DOT_K3D ,
T_DOT_MMX ,
T_DOT_XMM ,

T_DOT_X64 ,
T_DOT_X64P ,


T_DOT_8087 ,
T_DOT_287 ,
T_DOT_387 ,
T_DOT_NO87 ,







T_DOT_CREF ,
T_DOT_LFCOND ,
T_DOT_LIST ,
T_DOT_LISTALL ,
T_DOT_LISTIF ,
T_DOT_NOCREF ,
T_DOT_NOLIST ,
T_DOT_NOLISTIF ,
T_DOT_SFCOND ,
T_DOT_TFCOND ,
T_DOT_XCREF ,
T_DOT_XLIST ,
T_PAGE ,
T_SUBTITLE ,
T_SUBTTL ,
T_TITLE ,






T_DOT_LISTMACRO ,
T_DOT_LISTMACROALL ,
T_DOT_NOLISTMACRO ,
T_DOT_XALL ,
T_DOT_LALL ,
T_DOT_SALL ,


T_DOT_ALPHA ,
T_DOT_DOSSEG ,
T_DOT_SEQ ,
T_DOSSEG ,


T_DOT_CODE ,
T_DOT_STACK ,
T_DOT_DATA ,
T_DOT_DATA_UN ,
T_DOT_FARDATA ,
T_DOT_FARDATA_UN ,
T_DOT_CONST ,



T_DOT_IF ,
T_DOT_REPEAT ,
T_DOT_WHILE ,
T_DOT_BREAK ,
T_DOT_CONTINUE ,
T_DOT_ELSE ,
T_DOT_ELSEIF ,
T_DOT_ENDIF ,
T_DOT_ENDW ,
T_DOT_UNTIL ,
T_DOT_UNTILCXZ ,

T_DOT_EXIT ,
T_DOT_STARTUP ,

T_DOT_MODEL ,
T_DOT_RADIX ,




T_DOT_SAFESEH ,




T_DOT_ERR ,
T_DOT_ERR1 ,
T_DOT_ERR2 ,
T_DOT_ERRE ,
T_DOT_ERRNZ ,
T_DOT_ERRDIF ,
T_DOT_ERRDIFI ,
T_DOT_ERRIDN ,
T_DOT_ERRIDNI ,
T_DOT_ERRB ,
T_DOT_ERRNB ,
T_DOT_ERRDEF ,
T_DOT_ERRNDEF ,




T_COMMENT ,
T_IF ,
T_IFE ,
T_IF1 ,
T_IF2 ,
T_IFDIF ,
T_IFDIFI ,
T_IFIDN ,
T_IFIDNI ,
T_IFB ,
T_IFNB ,
T_IFDEF ,
T_IFNDEF ,
T_ELSE ,
T_ELSEIF ,
T_ELSEIFE ,
T_ELSEIF1 ,
T_ELSEIF2 ,
T_ELSEIFDIF ,
T_ELSEIFDIFI ,
T_ELSEIFIDN ,
T_ELSEIFIDNI ,
T_ELSEIFB ,
T_ELSEIFNB ,
T_ELSEIFDEF ,
T_ELSEIFNDEF ,
T_ENDIF ,



T_FOR ,
T_FORC ,
T_IRP ,
T_IRPC ,
T_REPEAT ,
T_REPT ,
T_WHILE ,



T_MACRO ,
T_EXITM ,
T_ENDM ,
T_GOTO ,
T_PURGE ,
T_INCLUDE ,
T_TEXTEQU ,
T_CATSTR ,
T_SUBSTR ,


T_INSTR ,
T_SIZESTR ,


T_DB ,
T_DW ,
T_DD ,
T_DF ,
T_DQ ,
T_DT ,


T_DOT_ALLOCSTACK ,
T_DOT_ENDPROLOG ,
T_DOT_PUSHFRAME ,
T_DOT_PUSHREG ,
T_DOT_SAVEREG ,
T_DOT_SAVEXMM128 ,
T_DOT_SETFRAME ,



T_STRUC ,
T_STRUCT ,
T_UNION ,
T_TYPEDEF ,
T_RECORD ,


T_COMM ,
T_EXTERN ,
T_EXTRN ,
T_EXTERNDEF ,
T_PUBLIC ,


T_PROTO ,
T_PROC ,
T_ENDP ,
T_LOCAL ,
T_LABEL ,
T_INVOKE ,




T_ORG ,
T_ALIGN ,
T_EVEN ,

T_SEGMENT ,


T_ENDS ,
T_GROUP ,
T_ASSUME ,

T_ALIAS ,
T_ECHO ,
T_END ,
T_EQU ,

T_INCBIN ,

T_INCLUDELIB ,
T_NAME ,
T_OPTION ,
T_POPCONTEXT ,
T_PUSHCONTEXT ,
# 46 "./parser.h" 2


SPECIAL_LAST
};



enum instr_token {
    INS_FIRST_1 = SPECIAL_LAST - 1,





# 1 "./instruct.h" 1
# 30 "./instruct.h"
T_CALL ,
# 40 "./instruct.h"
T_JMP ,
# 57 "./instruct.h"
T_JA ,
T_JAE ,
T_JB ,
T_JBE ,
T_JC ,
T_JE ,
T_JG ,
T_JGE ,
T_JL ,
T_JLE ,
T_JNA ,
T_JNAE ,
T_JNB ,
T_JNBE ,
T_JNC ,
T_JNE ,
T_JNG ,
T_JNGE ,
T_JNL ,
T_JNLE ,
T_JNO ,
T_JNP ,
T_JNS ,
T_JNZ ,
T_JO ,
T_JP ,
T_JPE ,
T_JPO ,
T_JS ,
T_JZ ,



T_JCXZ ,
T_JECXZ ,

T_JRCXZ ,

T_LOOP ,
T_LOOPE ,
T_LOOPZ ,
T_LOOPNE ,
T_LOOPNZ ,
T_LOOPD ,
T_LOOPED ,
T_LOOPZD ,
T_LOOPNED ,
T_LOOPNZD ,
T_LOOPW ,
T_LOOPEW ,
T_LOOPZW ,
T_LOOPNEW ,
T_LOOPNZW ,
# 128 "./instruct.h"
T_ADD ,
T_OR ,
T_ADC ,
T_SBB ,
T_AND ,
T_SUB ,
T_XOR ,
T_CMP ,
# 145 "./instruct.h"
T_RCL ,
T_RCR ,
T_ROL ,
T_ROR ,
T_SAL ,
T_SAR ,
T_SHL ,
T_SHR ,





T_CMPS ,
T_CMPSB ,

T_CMPSW ,

T_CMPSD ,


T_INS ,
T_INSB ,

T_INSW ,

T_INSD ,

T_LODS ,
T_LODSB ,

T_LODSW ,

T_LODSD ,

T_MOVS ,
T_MOVSB ,

T_MOVSW ,

T_MOVSD ,



T_OUTS ,
T_OUTSB ,

T_OUTSW ,

T_OUTSD ,

T_SCAS ,
T_SCASB ,

T_SCASW ,

T_SCASD ,

T_STOS ,
T_STOSB ,

T_STOSW ,

T_STOSD ,




T_AAA ,
T_AAD ,
T_AAM ,
T_AAS ,
T_DAA ,
T_DAS ,
T_LDS ,
T_LES ,
T_POPA ,
T_POPAD ,
T_POPAW ,
T_POPFD ,
T_PUSHA ,
T_PUSHAD ,
T_PUSHAW ,
T_PUSHFD ,
T_PUSHD ,






T_RETD ,

T_RETW ,







T_ARPL ,
T_LLDT ,
T_LMSW ,
T_LTR ,
T_SLDT ,
T_SMSW ,
T_STR ,
T_VERR ,
T_VERW ,
# 268 "./instruct.h"
T_DIV ,


T_IDIV ,


T_MUL ,


T_NEG ,


T_NOT ,




T_LOCK ,
T_REP ,
T_REPE ,
T_REPNE ,
T_REPNZ ,
T_REPZ ,



T_BT ,



T_BTC ,



T_BTR ,



T_BTS ,






T_CMC ,
T_CLC ,
T_STC ,
T_CLI ,
T_STI ,
T_CLD ,
T_STD ,



T_INC ,



T_DEC ,






T_PUSH ,





T_POP ,



T_PUSHW ,

T_PUSHF ,
T_POPF ,



T_MOV ,
# 371 "./instruct.h"
T_BOUND_ ,
T_BSF ,
T_BSR ,
T_BSWAP ,
T_CBW ,
T_CDQ ,
T_CWD ,
T_CWDE ,
T_CLTS ,
T_CMPXCHG ,

T_CMPXCHG8B ,
T_CPUID ,
T_ENTER ,
T_HLT ,
T_IMUL ,







T_IN ,

T_INT ,

T_INTO ,
T_INVD ,
T_INVLPG ,
T_IRET ,
T_IRETD ,



T_IRETF ,
T_IRETDF ,
T_LAHF ,
T_LAR ,
T_LSL ,
T_LEA ,
T_LEAVE ,
T_LFS ,
T_LGS ,
T_LSS ,
T_LGDT ,
T_LIDT ,
T_MOVSX ,
T_MOVZX ,
T_NOP ,
T_OUT ,


T_RDMSR ,

T_RDPMC ,
T_RDTSC ,
T_RDTSCP ,
T_RET ,

T_RETN ,

T_RETF ,

T_RSM ,
T_SAHF ,
T_SGDT ,
T_SIDT ,
T_SHLD ,

T_SHRD ,

T_SYSENTER ,
T_SYSEXIT ,
T_TEST ,



T_UD2 ,
T_WAIT ,
T_WBINVD ,
T_WRMSR ,
T_XADD ,

T_XCHG ,




T_XLAT ,

T_XLATB ,


T_SETA ,
T_SETAE ,
T_SETB ,
T_SETBE ,
T_SETC ,
T_SETE ,
T_SETG ,
T_SETGE ,
T_SETL ,
T_SETLE ,
T_SETNA ,
T_SETNAE ,
T_SETNB ,
T_SETNBE ,
T_SETNC ,
T_SETNE ,
T_SETNG ,
T_SETNGE ,
T_SETNL ,
T_SETNLE ,
T_SETNO ,
T_SETNP ,
T_SETNS ,
T_SETNZ ,
T_SETO ,
T_SETP ,
T_SETPE ,
T_SETPO ,
T_SETS ,
T_SETZ ,




T_CMOVA ,
T_CMOVAE ,
T_CMOVB ,
T_CMOVBE ,
T_CMOVC ,
T_CMOVE ,
T_CMOVG ,
T_CMOVGE ,
T_CMOVL ,
T_CMOVLE ,
T_CMOVNA ,
T_CMOVNAE ,
T_CMOVNB ,
T_CMOVNBE ,
T_CMOVNC ,
T_CMOVNE ,
T_CMOVNG ,
T_CMOVNGE ,
T_CMOVNL ,
T_CMOVNLE ,
T_CMOVNO ,
T_CMOVNP ,
T_CMOVNS ,
T_CMOVNZ ,
T_CMOVO ,
T_CMOVP ,
T_CMOVPE ,
T_CMOVPO ,
T_CMOVS ,
T_CMOVZ ,





T_FCMOVB ,
T_FCMOVBE ,
T_FCMOVE ,
T_FCMOVNB ,
T_FCMOVNBE ,
T_FCMOVNE ,
T_FCMOVNU ,
T_FCMOVU ,

T_FCOM ,



T_FCOMP ,



T_FCOMPP ,

T_FUCOM ,

T_FUCOMP ,

T_FUCOMPP ,
T_FCOMI ,
T_FCOMIP ,
T_FUCOMI ,
T_FUCOMIP ,


T_FADD ,




T_FADDP ,

T_FMUL ,




T_FMULP ,


T_FDIV ,




T_FDIVP ,

T_FDIVR ,




T_FDIVRP ,

T_FSUB ,




T_FSUBP ,

T_FSUBR ,




T_FSUBRP ,


T_FIADD ,

T_FICOM ,

T_FICOMP ,

T_FIDIV ,

T_FIDIVR ,

T_FIMUL ,

T_FISUB ,

T_FISUBR ,


T_FILD ,


T_FISTP ,


T_FIST ,


T_FLD ,



T_FSTP ,



T_FST ,



T_FLDENV ,
T_FLDENVD ,
T_FLDENVW ,
T_FNSAVE ,
T_FNSAVED ,
T_FNSAVEW ,
T_FNSTENV ,
T_FNSTENVD ,
T_FNSTENVW ,
T_FRSTOR ,
T_FRSTORD ,
T_FRSTORW ,
T_FSAVE ,
T_FSAVED ,
T_FSAVEW ,
T_FSTENV ,
T_FSTENVD ,
T_FSTENVW ,

T_FLDCW ,
T_FNSTCW ,
T_FNSTSW ,

T_FSTCW ,
T_FSTSW ,


T_FCOS ,
T_FPATAN ,
T_FPTAN ,
T_FSIN ,
T_FSINCOS ,

T_FINIT ,
T_FNINIT ,
T_FDISI ,
T_FNDISI ,
T_FENI ,
T_FNENI ,
T_FCLEX ,
T_FNCLEX ,

T_F2XM1 ,
T_FABS ,
T_FBLD ,
T_FBSTP ,
T_FCHS ,
T_FLD1 ,
T_FLDL2E ,
T_FLDL2T ,
T_FLDLG2 ,
T_FLDLN2 ,
T_FLDPI ,
T_FLDZ ,
T_FDECSTP ,
T_FINCSTP ,
T_FFREE ,

T_FFREEP ,
T_FNOP ,
T_FPREM ,
T_FPREM1 ,
T_FRNDINT ,
T_FSCALE ,
T_FSETPM ,
T_FSQRT ,
T_FTST ,
T_FWAIT ,
T_FXAM ,
T_FXCH ,

T_FXRSTOR ,
T_FXSAVE ,
T_FXTRACT ,
T_FYL2X ,
T_FYL2XP1 ,



T_EMMS ,
T_CLFLUSH ,
T_LDMXCSR ,
T_STMXCSR ,
T_LFENCE ,
T_MFENCE ,
T_SFENCE ,
T_PREFETCHNTA ,
T_PREFETCHT0 ,
T_PREFETCHT1 ,
T_PREFETCHT2 ,
T_PAUSE ,
# 745 "./instruct.h"
T_ADDPD , T_ADDPS , T_ADDSD , T_ADDSS ,
T_DIVPD , T_DIVPS , T_DIVSD , T_DIVSS ,
T_MAXPD , T_MAXPS , T_MAXSD , T_MAXSS ,
T_MINPD , T_MINPS , T_MINSD , T_MINSS ,
T_MULPD , T_MULPS , T_MULSD , T_MULSS ,
T_SQRTPD , T_SQRTPS , T_SQRTSD , T_SQRTSS ,
T_SUBPD , T_SUBPS , T_SUBSD , T_SUBSS ,


T_CMPPD ,
T_CMPPS ,

T_CMPSS ,
# 771 "./instruct.h"
T_CMPEQPD , T_CMPLTPD , T_CMPLEPD , T_CMPUNORDPD , T_CMPNEQPD , T_CMPNLTPD , T_CMPNLEPD , T_CMPORDPD ,
T_CMPEQPS , T_CMPLTPS , T_CMPLEPS , T_CMPUNORDPS , T_CMPNEQPS , T_CMPNLTPS , T_CMPNLEPS , T_CMPORDPS ,
T_CMPEQSD , T_CMPLTSD , T_CMPLESD , T_CMPUNORDSD , T_CMPNEQSD , T_CMPNLTSD , T_CMPNLESD , T_CMPORDSD ,
T_CMPEQSS , T_CMPLTSS , T_CMPLESS , T_CMPUNORDSS , T_CMPNEQSS , T_CMPNLTSS , T_CMPNLESS , T_CMPORDSS ,



T_ANDNPD ,
T_ANDNPS ,
T_ANDPD ,
T_ANDPS ,
T_ORPD ,
T_ORPS ,
T_COMISD ,
T_COMISS ,
T_XORPD ,
T_XORPS ,

T_CVTPD2PI ,
T_CVTPS2PI ,
T_CVTSD2SI ,
T_CVTSS2SI ,
T_CVTPI2PD ,
T_CVTPI2PS ,
T_CVTSI2SD ,
T_CVTSI2SS ,
T_CVTTPD2PI ,
T_CVTTPS2PI ,
T_CVTTSD2SI ,
T_CVTTSS2SI ,

T_CVTDQ2PS ,
T_CVTPS2DQ ,
T_CVTTPS2DQ ,

T_CVTPD2DQ ,
T_CVTDQ2PD ,
T_CVTTPD2DQ ,

T_CVTPD2PS ,
T_CVTPS2PD ,
T_CVTSD2SS ,
T_CVTSS2SD ,

T_MASKMOVDQU ,
T_MASKMOVQ ,


T_MOVD ,
# 828 "./instruct.h"
T_MOVQ ,
# 838 "./instruct.h"
T_MOVAPD ,

T_MOVAPS ,

T_MOVDQA ,

T_MOVDQU ,

T_MOVUPD ,

T_MOVUPS ,


T_MOVHPD ,

T_MOVHPS ,

T_MOVLPD ,

T_MOVLPS ,


T_MOVHLPS ,
T_MOVLHPS ,
T_MOVDQ2Q ,
T_MOVQ2DQ ,

T_MOVMSKPD ,
T_MOVMSKPS ,
T_MOVNTDQ ,
T_MOVNTI ,
T_MOVNTPD ,
T_MOVNTPS ,
T_MOVNTQ ,


T_MOVSS ,


T_PACKSSDW ,

T_PACKSSWB ,

T_PACKUSWB ,

T_PADDB ,

T_PADDW ,

T_PADDD ,

T_PADDQ ,

T_PADDSB ,

T_PADDSW ,

T_PADDUSB ,

T_PADDUSW ,

T_PAND ,

T_PANDN ,

T_PAVGB ,

T_PAVGW ,

T_PCMPEQB ,

T_PCMPEQW ,

T_PCMPEQD ,

T_PCMPGTB ,

T_PCMPGTW ,

T_PCMPGTD ,

T_PEXTRW ,
# 929 "./instruct.h"
T_PINSRW ,

T_PMADDWD ,

T_PMAXSW ,

T_PMAXUB ,

T_PMINSW ,

T_PMINUB ,

T_PMOVMSKB ,

T_PMULHUW ,

T_PMULHW ,

T_PMULLW ,

T_PMULUDQ ,

T_POR ,

T_PSADBW ,

T_PSHUFD ,
T_PSHUFW ,
T_PSHUFHW ,
T_PSHUFLW ,

T_PSLLW ,



T_PSLLD ,



T_PSLLQ ,



T_PSRAW ,



T_PSRAD ,



T_PSRLW ,



T_PSRLD ,



T_PSRLQ ,




T_PSLLDQ ,
T_PSRLDQ ,

T_PSUBB ,

T_PSUBW ,

T_PSUBD ,

T_PSUBQ ,

T_PSUBSB ,

T_PSUBSW ,

T_PSUBUSB ,

T_PSUBUSW ,

T_PXOR ,

T_PUNPCKHBW ,

T_PUNPCKHWD ,

T_PUNPCKHDQ ,

T_PUNPCKLBW ,

T_PUNPCKLWD ,

T_PUNPCKLDQ ,

T_PUNPCKHQDQ ,
T_PUNPCKLQDQ ,

T_RCPPS ,
T_RCPSS ,
T_RSQRTPS ,
T_RSQRTSS ,
T_SHUFPD ,
T_SHUFPS ,
T_UCOMISD ,
T_UCOMISS ,
T_UNPCKHPD ,
T_UNPCKHPS ,
T_UNPCKLPD ,
T_UNPCKLPS ,



T_FEMMS ,
T_PREFETCH ,
T_PREFETCHW ,
T_PAVGUSB ,
T_PF2ID ,
T_PF2IW ,
T_PFACC ,
T_PFADD ,
T_PFCMPEQ ,
T_PFCMPGE ,
T_PFCMPGT ,
T_PFMAX ,
T_PFMIN ,
T_PFMUL ,
T_PFNACC ,
T_PFPNACC ,
T_PFRCP ,
T_PFRCPIT1 ,
T_PFRCPIT2 ,
T_PFRSQIT1 ,
T_PFRSQRT ,
T_PFSUB ,
T_PFSUBR ,
T_PI2FD ,
T_PI2FW ,
T_PMULHRW ,
T_PSWAPD ,



T_ADDSUBPD ,
T_ADDSUBPS ,
T_FISTTP ,


T_HADDPD ,
T_HADDPS ,
T_HSUBPD ,
T_HSUBPS ,
T_LDDQU ,
T_MONITOR ,
T_MOVDDUP ,
T_MOVSHDUP ,
T_MOVSLDUP ,
T_MWAIT ,



T_PABSB ,

T_PABSD ,

T_PABSW ,

T_PALIGNR ,

T_PHADDD ,

T_PHADDSW ,

T_PHADDW ,

T_PHSUBD ,

T_PHSUBSW ,

T_PHSUBW ,

T_PMADDUBSW ,

T_PMULHRSW ,

T_PSHUFB ,

T_PSIGNB ,

T_PSIGND ,

T_PSIGNW ,




T_CDQE ,
T_CQO ,
T_PUSHFQ ,
T_POPFQ ,
T_IRETQ ,
T_CMPXCHG16B ,
T_MOVSXD ,

T_CMPSQ ,

T_LODSQ ,

T_MOVSQ ,

T_SCASQ ,

T_STOSQ ,



T_PEXTRQ ,
T_PINSRQ ,

T_SWAPGS ,
T_SYSCALL_ ,
T_SYSRET ,
# 1166 "./instruct.h"
T_BLENDPD ,
T_BLENDPS ,
T_BLENDVPD ,
T_BLENDVPS ,
T_DPPD ,
T_DPPS ,
T_EXTRACTPS ,

T_INSERTPS ,
T_MOVNTDQA ,
T_MPSADBW ,
T_PACKUSDW ,
T_PBLENDVB ,
T_PBLENDW ,
T_PCMPEQQ ,
T_PEXTRB ,
T_PEXTRD ,
T_PHMINPOSUW ,
T_PINSRB ,
T_PINSRD ,
T_PMAXSB ,
T_PMAXSD ,
T_PMAXUW ,
T_PMAXUD ,
T_PMINSB ,
T_PMINSD ,
T_PMINUW ,
T_PMINUD ,
T_PMOVSXBW ,
T_PMOVSXBD ,
T_PMOVSXBQ ,
T_PMOVSXWD ,
T_PMOVSXWQ ,
T_PMOVSXDQ ,
T_PMOVZXBW ,
T_PMOVZXBD ,
T_PMOVZXBQ ,
T_PMOVZXWD ,
T_PMOVZXWQ ,
T_PMOVZXDQ ,
T_PMULDQ ,
T_PMULLD ,
T_PTEST ,
T_ROUNDPS ,
T_ROUNDPD ,
T_ROUNDSS ,
T_ROUNDSD ,

T_CRC32 ,

T_PCMPESTRM ,
T_PCMPESTRI ,
T_PCMPISTRM ,
T_PCMPISTRI ,
T_PCMPGTQ ,
T_POPCNT ,
# 1232 "./instruct.h"
T_XRSTOR ,
T_XSAVE ,
T_XSAVEOPT ,
T_XGETBV ,
T_XSETBV ,



T_VMCALL ,
T_VMLAUNCH ,
T_VMRESUME ,
T_VMXOFF ,
T_VMPTRLD ,
T_VMPTRST ,
T_VMCLEAR ,
T_VMXON ,
T_VMREAD ,
T_VMWRITE ,
T_INVEPT ,
T_INVVPID ,
# 1273 "./instruct.h"
T_VBROADCASTSS ,

T_VBROADCASTSD ,
T_VBROADCASTF128 ,
T_VBLENDVPD ,
T_VBLENDVPS ,
T_VINSERTF128 ,
T_VEXTRACTF128 ,

T_VMASKMOVPS ,

T_VMASKMOVPD ,

T_VPBLENDVB ,
T_VPERMILPD ,

T_VPERMILPS ,




T_VPERM2F128 ,
T_VTESTPS ,
T_VTESTPD ,
T_VZEROALL ,
T_VZEROUPPER ,
T_VCVTPD2DQ ,

T_VCVTTPD2DQ ,

T_VCVTPD2PS ,

T_VMOVDDUP ,


T_VMOVMSKPD ,

T_VMOVMSKPS ,
# 59 "./parser.h" 2








# 1 "./instravx.h" 1
# 10 "./instravx.h"
T_VADDPD ,
T_VADDPS ,
T_VADDSD ,
T_VADDSS ,
T_VDIVPD ,
T_VDIVPS ,
T_VDIVSD ,
T_VDIVSS ,
T_VMAXPD ,
T_VMAXPS ,
T_VMAXSD ,
T_VMAXSS ,
T_VMINPD ,
T_VMINPS ,
T_VMINSD ,
T_VMINSS ,
T_VMULPD ,
T_VMULPS ,
T_VMULSD ,
T_VMULSS ,
T_VSQRTPD ,
T_VSQRTPS ,
T_VSQRTSD ,
T_VSQRTSS ,
T_VSUBPD ,
T_VSUBPS ,
T_VSUBSD ,
T_VSUBSS ,
T_VCMPPD ,
T_VCMPPS ,
T_VCMPSD ,
T_VCMPSS ,


T_VANDPD ,
T_VANDPS ,
T_VANDNPD ,
T_VANDNPS ,
T_VORPD ,
T_VORPS ,
T_VCOMISD ,
T_VCOMISS ,
T_VXORPD ,
T_VXORPS ,


T_VCVTDQ2PD ,
T_VCVTDQ2PS ,



T_VCVTPS2DQ ,
T_VCVTTPS2DQ ,
T_VCVTPS2PD ,
T_VCVTSD2SI ,
T_VCVTTSD2SI ,
T_VCVTSD2SS ,
T_VCVTSI2SD ,
T_VCVTSI2SS ,
T_VCVTSS2SD ,
T_VCVTSS2SI ,
T_VCVTTSS2SI ,


T_VADDSUBPD ,
T_VADDSUBPS ,
T_VBLENDPD ,
T_VBLENDPS ,
T_VDPPD ,
T_VDPPS ,
T_VEXTRACTPS ,
T_VHADDPD ,
T_VHADDPS ,
T_VHSUBPD ,
T_VHSUBPS ,
T_VINSERTPS ,
T_VLDDQU ,
T_VLDMXCSR ,
T_VSTMXCSR ,

T_VMASKMOVDQU ,
T_VMOVAPD ,
T_VMOVAPS ,
T_VMOVD ,
T_VMOVQ ,
T_VMOVDQA ,
T_VMOVDQU ,
T_VMOVHLPS ,
T_VMOVLHPS ,
T_VMOVHPD ,
T_VMOVHPS ,
T_VMOVLPD ,
T_VMOVLPS ,
T_VMOVSD ,
T_VMOVSS ,







T_VMOVNTDQ ,
T_VMOVNTDQA ,
T_VMOVNTPD ,
T_VMOVNTPS ,
T_VMOVSHDUP ,
T_VMOVSLDUP ,
T_VMOVUPD ,
T_VMOVUPS ,

T_VMPSADBW ,

T_VPABSB ,
T_VPABSW ,
T_VPABSD ,
T_VPACKSSWB ,
T_VPACKSSDW ,
T_VPACKUSWB ,
T_VPACKUSDW ,
T_VPADDB ,
T_VPADDW ,
T_VPADDD ,
T_VPADDQ ,
T_VPADDSB ,
T_VPADDSW ,
T_VPADDUSB ,
T_VPADDUSW ,
T_VPALIGNR ,
T_VPAND ,
T_VPANDN ,
T_VPAVGB ,
T_VPAVGW ,
T_VPBLENDW ,
T_VPCMPESTRI ,
T_VPCMPESTRM ,
T_VPCMPISTRI ,
T_VPCMPISTRM ,
T_VPCMPEQB ,
T_VPCMPEQW ,
T_VPCMPEQD ,
T_VPCMPEQQ ,
T_VPCMPGTB ,
T_VPCMPGTW ,
T_VPCMPGTD ,
T_VPCMPGTQ ,
T_VPEXTRB ,
T_VPEXTRW ,
T_VPEXTRD ,
T_VPINSRB ,
T_VPINSRW ,
T_VPINSRD ,

T_VPEXTRQ ,
T_VPINSRQ ,

T_VPHADDW ,
T_VPHADDD ,
T_VPHADDSW ,
T_VPHMINPOSUW ,
T_VPHSUBW ,
T_VPHSUBD ,
T_VPHSUBSW ,
T_VPMADDWD ,
T_VPMADDUBSW ,
T_VPMAXSB ,
T_VPMAXSW ,
T_VPMAXSD ,
T_VPMAXUB ,
T_VPMAXUW ,
T_VPMAXUD ,
T_VPMINSB ,
T_VPMINSW ,
T_VPMINSD ,
T_VPMINUB ,
T_VPMINUW ,
T_VPMINUD ,
T_VPMOVMSKB ,
T_VPMOVSXBW ,
T_VPMOVSXBD ,
T_VPMOVSXBQ ,
T_VPMOVSXWD ,
T_VPMOVSXWQ ,
T_VPMOVSXDQ ,
T_VPMOVZXBW ,
T_VPMOVZXBD ,
T_VPMOVZXBQ ,
T_VPMOVZXWD ,
T_VPMOVZXWQ ,
T_VPMOVZXDQ ,
T_VPMULHUW ,
T_VPMULHRSW ,
T_VPMULHW ,
T_VPMULLW ,
T_VPMULLD ,
T_VPMULUDQ ,
T_VPMULDQ ,
T_VPOR ,
T_VPSADBW ,
T_VPSHUFB ,
T_VPSHUFD ,
T_VPSHUFHW ,
T_VPSHUFLW ,
T_VPSIGNB ,
T_VPSIGNW ,
T_VPSIGND ,
T_VPSLLDQ ,
T_VPSRLDQ ,
T_VPSLLW ,
T_VPSLLD ,
T_VPSLLQ ,
T_VPSRAW ,
T_VPSRAD ,
T_VPSRLW ,
T_VPSRLD ,
T_VPSRLQ ,

T_VPTEST ,
T_VPSUBB ,
T_VPSUBW ,
T_VPSUBD ,
T_VPSUBQ ,
T_VPSUBSB ,
T_VPSUBSW ,
T_VPSUBUSB ,
T_VPSUBUSW ,
T_VPUNPCKHBW ,
T_VPUNPCKHWD ,
T_VPUNPCKHDQ ,
T_VPUNPCKHQDQ ,
T_VPUNPCKLBW ,
T_VPUNPCKLWD ,
T_VPUNPCKLDQ ,
T_VPUNPCKLQDQ ,
T_VPXOR ,

T_VRCPPS ,
T_VRCPSS ,
T_VRSQRTPS ,
T_VRSQRTSS ,
T_VROUNDPD ,
T_VROUNDPS ,
T_VROUNDSD ,
T_VROUNDSS ,
T_VSHUFPD ,
T_VSHUFPS ,
T_VUCOMISD ,
T_VUCOMISS ,
T_VUNPCKHPD ,
T_VUNPCKHPS ,
T_VUNPCKLPD ,
T_VUNPCKLPS ,
# 67 "./parser.h" 2



};




struct symbol_queue {
    struct dsym *head;
    struct dsym *tail;
};

enum queue_type {
    TAB_UNDEF = 0,
    TAB_EXT,
    TAB_SEG,
    TAB_GRP,
    TAB_PROC,
    TAB_ALIAS,
    TAB_LAST,
};


extern struct symbol_queue SymTables[];
# 100 "./parser.h"
enum rm_info {
    no_RM = 0x1,
    no_WDS = 0x2,
    R_in_OP = 0x3,
};


enum allowed_prefix {

    AP_LOCK = 0x01,
    AP_REP = 0x02,
    AP_REPxx = 0x03,
    AP_FWAIT = 0x04,
    AP_NO_FWAIT = 0x05
};





enum special_type {
    RWT_REG = 2,
    RWT_DIRECTIVE,
    RWT_UNARY_OP,
    RWT_BINARY_OP,
    RWT_STYPE,
    RWT_RES_ID
};


enum op1_flags {
    SFR_SIZMSK = 0x1F,
    SFR_IREG = 0x20,
    SFR_SSBASED = 0x40,
};


enum rex_bits {
    REX_B = 1,
    REX_X = 2,
    REX_R = 4,
    REX_W = 8
};






struct opnd_class {
    enum operand_type opnd_type[2];
    unsigned char opnd_type_3rd;
};







struct instr_item {


    unsigned char opclsidx;
    unsigned char byte1_info;
    unsigned char
        allowed_prefix : 3,
        first : 1,
        rm_info : 3,
        opnd_dir : 1;
    unsigned char reserved;



    unsigned short cpu;

    unsigned char opcode;
    unsigned char rm_byte;
};




struct special_item {
    unsigned value;
    unsigned sflags;



    uint_16 cpu;

    uint_8 bytval;



    uint_8 type;

};
# 206 "./parser.h"
enum directive_flags {
    DF_CEXPR = 0x01,
    DF_STRPARM = 0x02,

    DF_NOEXPAND = 0x04,
    DF_LABEL = 0x08,
    DF_NOSTRUC = 0x10,
    DF_NOCONCAT = 0x20,
    DF_PROC = 0x40,
    DF_STORE = 0x80,
    DF_CGEN = 0x100
};



enum directive_type {

# 1 "./dirtype.h" 1




DRT_CONDDIR ,
DRT_LOOPDIR ,
DRT_PURGE ,
DRT_INCLUDE ,
DRT_MACRO ,
DRT_CATSTR ,
DRT_SUBSTR ,
DRT_MACINT ,

DRT_DATADIR ,
DRT_END ,
DRT_ERRDIR ,
DRT_CPU ,
DRT_LISTING ,
DRT_LISTMAC ,
DRT_SEGORDER ,
DRT_SIMSEG ,
DRT_HLLSTART ,
DRT_HLLEXIT ,
DRT_HLLEND ,
DRT_STARTEXIT ,
DRT_MODEL ,
DRT_RADIX ,

DRT_SAFESEH ,

DRT_INSTR ,
DRT_SIZESTR ,

DRT_EXCFRAME ,

DRT_STRUCT ,
DRT_TYPEDEF ,
DRT_RECORD ,
DRT_COMM ,
DRT_EXTERN ,
DRT_EXTERNDEF ,
DRT_PROTO ,
DRT_PUBLIC ,
DRT_PROC ,
DRT_ENDP ,
DRT_LOCAL ,
DRT_INVOKE ,
DRT_ORG ,
DRT_ALIGN ,
DRT_SEGMENT ,
DRT_ENDS ,
DRT_GROUP ,
DRT_ASSUME ,
DRT_LABEL ,
DRT_ALIAS ,
DRT_ECHO ,
DRT_EQU ,
DRT_EQUALSGN ,

DRT_INCBIN ,

DRT_INCLIB ,
DRT_NAME ,
DRT_OPTION ,
DRT_CONTEXT ,
# 222 "./parser.h" 2

};




struct opnd_item {
    enum operand_type type;
    union {
        struct {
            int_32 data32l;
            int_32 data32h;
        };
        uint_64 data64;
    };
    struct fixup *InsFixup;
};




struct code_info {
    struct {
        enum instr_token ins;
        enum assume_segreg RegOverride;

        unsigned char rex;

        unsigned char adrsiz:1;
        unsigned char opsiz:1;
    } prefix;
    const struct instr_item *pinstr;
    enum instr_token token;
    enum memtype mem_type;
    struct opnd_item opnd[3];
    unsigned char rm_byte;
    unsigned char sib;
    unsigned char Ofssize;
    unsigned char opc_or;

    unsigned char vexregop;

    union {
        unsigned char flags;
        struct {
            unsigned char iswide:1;
            unsigned char isdirect:1;
            unsigned char isfar:1;
            unsigned char const_size_fixed:1;

            unsigned char x86hi_used:1;
            unsigned char x64lo_used:1;

            unsigned char undef_sym:1;
        };
    };
};
# 301 "./parser.h"
extern const struct instr_item InstrTable[];
extern const struct special_item SpecialTable[];
extern uint_16 optable_idx[];



extern int SizeFromMemtype( enum memtype, int, struct asym * );
extern ret_code MemtypeFromSize( int, enum memtype * );
extern int SizeFromRegister( int );
extern ret_code GetLangType( int *, struct asm_tok[], enum lang_type * );

extern void sym_add_table( struct symbol_queue *, struct dsym * );
extern void sym_remove_table( struct symbol_queue *, struct dsym * );
extern void sym_ext2int( struct asym * );

extern int OperandSize( enum operand_type, const struct code_info * );
extern void set_frame( const struct asym *sym );
extern void set_frame2( const struct asym *sym );
extern ret_code ParseLine( struct asm_tok[] );
extern void ProcessFile( struct asm_tok[] );

extern void WritePreprocessedLine( const char * );
# 50 "main.c" 2
# 1 "./pespec.h" 1








struct IMAGE_DOS_HEADER {
    uint_16 e_magic;
    uint_16 e_cblp;
    uint_16 e_cp;
    uint_16 e_crlc;
    uint_16 e_cparhdr;
    uint_16 e_minalloc;
    uint_16 e_maxalloc;
    uint_16 e_ss;
    uint_16 e_sp;
    uint_16 e_csum;
    uint_16 e_ip;
    uint_16 e_cs;
    uint_16 e_lfarlc;
    uint_16 e_ovno;
    uint_16 e_res[4];
    uint_16 e_oemid;
    uint_16 e_oeminfo;
    uint_16 e_res2[10];
    uint_32 e_lfanew;
};



struct IMAGE_DATA_DIRECTORY {
    uint_32 VirtualAddress;
    uint_32 Size;
};
# 70 "./pespec.h"
struct IMAGE_OPTIONAL_HEADER32 {

    uint_16 Magic;
    uint_8 MajorLinkerVersion;
    uint_8 MinorLinkerVersion;
    uint_32 SizeOfCode;
    uint_32 SizeOfInitializedData;
    uint_32 SizeOfUninitializedData;
    uint_32 AddressOfEntryPoint;
    uint_32 BaseOfCode;
    uint_32 BaseOfData;



    uint_32 ImageBase;
    uint_32 SectionAlignment;
    uint_32 FileAlignment;
    uint_16 MajorOperatingSystemVersion;
    uint_16 MinorOperatingSystemVersion;
    uint_16 MajorImageVersion;
    uint_16 MinorImageVersion;
    uint_16 MajorSubsystemVersion;
    uint_16 MinorSubsystemVersion;
    uint_32 Win32VersionValue;
    uint_32 SizeOfImage;
    uint_32 SizeOfHeaders;
    uint_32 CheckSum;
    uint_16 Subsystem;
    uint_16 DllCharacteristics;
    uint_32 SizeOfStackReserve;
    uint_32 SizeOfStackCommit;
    uint_32 SizeOfHeapReserve;
    uint_32 SizeOfHeapCommit;
    uint_32 LoaderFlags;
    uint_32 NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_PE_HEADER32 {
    uint_32 Signature;
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};



struct IMAGE_OPTIONAL_HEADER64 {
    uint_16 Magic;
    uint_8 MajorLinkerVersion;
    uint_8 MinorLinkerVersion;
    uint_32 SizeOfCode;
    uint_32 SizeOfInitializedData;
    uint_32 SizeOfUninitializedData;
    uint_32 AddressOfEntryPoint;
    uint_32 BaseOfCode;
    uint_64 ImageBase;
    uint_32 SectionAlignment;
    uint_32 FileAlignment;
    uint_16 MajorOperatingSystemVersion;
    uint_16 MinorOperatingSystemVersion;
    uint_16 MajorImageVersion;
    uint_16 MinorImageVersion;
    uint_16 MajorSubsystemVersion;
    uint_16 MinorSubsystemVersion;
    uint_32 Win32VersionValue;
    uint_32 SizeOfImage;
    uint_32 SizeOfHeaders;
    uint_32 CheckSum;
    uint_16 Subsystem;
    uint_16 DllCharacteristics;
    uint_64 SizeOfStackReserve;
    uint_64 SizeOfStackCommit;
    uint_64 SizeOfHeapReserve;
    uint_64 SizeOfHeapCommit;
    uint_32 LoaderFlags;
    uint_32 NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_PE_HEADER64 {
    uint_32 Signature;
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};





struct IMAGE_BASE_RELOCATION {
    uint_32 VirtualAddress;
    uint_32 SizeOfBlock;
};
# 174 "./pespec.h"
struct IMAGE_RESOURCE_DIRECTORY {
    uint_32 Characteristics;
    uint_32 TimeDateStamp;
    uint_16 MajorVersion;
    uint_16 MinorVersion;
    uint_16 NumberOfNamedEntries;
    uint_16 NumberOfIdEntries;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union {
        struct {
            uint_32 NameOffset:31;
            uint_32 NameIsString:1;
        };
        uint_32 Name;
        uint_16 Id;
    };
    union {
        uint_32 OffsetToData;
        struct {
            uint_32 OffsetToDirectory:31;
            uint_32 DataIsDirectory:1;
        };
    };
};

struct IMAGE_RESOURCE_DIR_STRING_U {
    uint_16 Length;
    int_16 NameString[1];
};

struct IMAGE_RESOURCE_DATA_ENTRY {
    uint_32 OffsetToData;
    uint_32 Size;
    uint_32 CodePage;
    uint_32 Reserved;
};
# 51 "main.c" 2
# 1 "./posndir.h" 1
# 10 "./posndir.h"
extern void AlignCurrOffset( int );
# 52 "main.c" 2
# 1 "./preproc.h" 1






extern int PreprocessLine( char *, struct asm_tok[] );
extern ret_code WriteCodeLabel( char *, struct asm_tok[] );
# 53 "main.c" 2
# 1 "./proc.h" 1
# 35 "./proc.h"
extern struct dsym *CurrProc;

extern struct asym *sym_ReservedStack;



enum proc_status {
    PRST_INSIDE_PROLOGUE = 0x01,
    PRST_INSIDE_EPILOGUE = 0x02,
    PRST_FPO = 0x04,
    PRST_PROLOGUE_NOT_DONE = 0x80,
};






extern ret_code ParseProc( struct dsym *, int, struct asm_tok[], bool, enum lang_type );
extern struct asym *CreateProc( struct asym *, const char *, enum sym_state );
extern void DeleteProc( struct dsym * );

extern ret_code CopyPrototype( struct dsym *, struct dsym * );
extern ret_code RetInstr( int, struct asm_tok[], int );
extern void write_prologue( struct asm_tok[] );
extern void ProcInit( void );

extern void ProcCheckOpen( void );
# 54 "main.c" 2

# 1 "./reswords.h" 1
# 35 "./reswords.h"
enum reservedword_flags {

    RWF_DISABLED = 1,
    RWF_IA32 = 2,

    RWF_X64 = 4,


    RWF_VEX = 8,

};



struct ReservedWord {
    uint_16 next;
    uint_8 len;
    uint_8 flags;



    const char *name;

};

extern unsigned FindResWord( const char *, unsigned char );
extern char *GetResWName( unsigned, char * );
extern bool IsKeywordDisabled( const char *, int );
extern void DisableKeyword( unsigned );

extern void RenameKeyword( unsigned, const char *, uint_8 );


extern void Set64Bit( bool );

extern void ResWordsInit( void );
extern void ResWordsFini( void );
# 56 "main.c" 2
# 1 "./segattr.h" 1

sitem( "READONLY", 0, INIT_ATTR )
sitem( "BYTE", 0, INIT_ALIGN )
sitem( "WORD", 1, INIT_ALIGN )
sitem( "DWORD", 2, INIT_ALIGN )
sitem( "PARA", 4, INIT_ALIGN )
sitem( "PAGE", 8, INIT_ALIGN )



sitem( "ALIGN", 0, INIT_ALIGN_PARAM )
sitem( "PRIVATE", COMB_INVALID, INIT_COMBINE )
sitem( "PUBLIC", COMB_ADDOFF, INIT_COMBINE )
sitem( "STACK", COMB_STACK, INIT_COMBINE )
sitem( "COMMON", COMB_COMMON, INIT_COMBINE )
sitem( "MEMORY", COMB_ADDOFF, INIT_COMBINE )
sitem( "AT", COMB_INVALID, INIT_COMBINE_AT )

sitem( "COMDAT", COMB_INVALID, INIT_COMBINE_COMDAT )

sitem( "USE16", USE16, INIT_OFSSIZE )
sitem( "USE32", USE32, INIT_OFSSIZE )

sitem( "USE64", USE64, INIT_OFSSIZE )

sitem( "FLAT", USE32, INIT_OFSSIZE_FLAT )

sitem( "INFO", 0, INIT_CHAR_INFO )
sitem( "DISCARD", 0x02000000 >> 24, INIT_CHAR )
sitem( "NOCACHE", 0x04000000 >> 24, INIT_CHAR )
sitem( "NOPAGE", 0x08000000 >> 24, INIT_CHAR )
sitem( "SHARED", 0x10000000 >> 24, INIT_CHAR )
sitem( "EXECUTE", 0x20000000 >> 24, INIT_CHAR )
sitem( "READ", 0x40000000 >> 24, INIT_CHAR )
sitem( "WRITE", 0x80000000 >> 24, INIT_CHAR )
sitem( "ALIAS", 0, INIT_ALIAS )
# 57 "main.c" 2
# 1 "./segment.h" 1
# 37 "./segment.h"
extern void SetSymSegOfs( struct asym * );
extern int GetSymOfssize( const struct asym * );

extern uint_32 GetCurrOffset( void );
extern ret_code SetCurrOffset( struct dsym *, uint_32, bool, bool );
extern struct asym *CreateIntSegment( const char *, const char *, uint_8, uint_8, bool );

extern unsigned GetSegIdx( const struct asym * );
extern void SegmentInit( int );
extern void SegmentFini( void );
extern struct asym *GetGroup( const struct asym * );
extern uint_32 GetCurrSegAlign( void );
extern ret_code SetOfssize( void );
extern enum seg_type TypeFromClassName( const struct dsym *, const struct asym * );
extern void DefineFlatGroup( void );
extern ret_code SegmentModuleExit( void );
extern void DeleteGroup( struct dsym * );





enum sim_seg {
    SIM_CODE = 0,
    SIM_STACK,
    SIM_DATA,
    SIM_DATA_UN,
    SIM_FARDATA,
    SIM_FARDATA_UN,
    SIM_CONST,
    SIM_LAST
};

extern char *SimGetSegName( enum sim_seg );
extern const char *GetCodeClass( void );
extern ret_code ModelSimSegmInit( int type );
extern void ModelSimSegmExit( void );
extern void SetModelDefaultSegNames( void );
# 58 "main.c" 2
# 1 "./special.h" 1
# 34 "./special.h"
res(AL, al, RWT_REG, OP_AL, 0, 0, P_86, 1)
res(CL, cl, RWT_REG, OP_CL, 1, 0, P_86, 1)
res(DL, dl, RWT_REG, OP_R8, 2, 0, P_86, 1)
res(BL, bl, RWT_REG, OP_R8, 3, 0, P_86, 1)
res(AH, ah, RWT_REG, OP_R8, 4, 0, P_86, 1)
res(CH, ch, RWT_REG, OP_R8, 5, 0, P_86, 1)
res(DH, dh, RWT_REG, OP_R8, 6, 0, P_86, 1)
res(BH, bh, RWT_REG, OP_R8, 7, 0, P_86, 1)

res(AX, ax, RWT_REG, OP_AX, 0, 0, P_86, 2)
res(CX, cx, RWT_REG, OP_R16, 1, 0, P_86, 2)
res(DX, dx, RWT_REG, OP_DX, 2, 0, P_86, 2)
res(BX, bx, RWT_REG, OP_R16, 3, 0, P_86, SFR_IREG|2)
res(SP, sp, RWT_REG, OP_R16, 4, 0, P_86, 2)
res(BP, bp, RWT_REG, OP_R16, 5, 0, P_86, SFR_SSBASED|SFR_IREG|2)
res(SI, si, RWT_REG, OP_R16, 6, 0, P_86, SFR_IREG|2)
res(DI, di, RWT_REG, OP_R16, 7, 0, P_86, SFR_IREG|2)

res(EAX, eax, RWT_REG, OP_EAX, 0, 0, P_386, SFR_IREG|4)
res(ECX, ecx, RWT_REG, OP_R32, 1, 0, P_386, SFR_IREG|4)
res(EDX, edx, RWT_REG, OP_R32, 2, 0, P_386, SFR_IREG|4)
res(EBX, ebx, RWT_REG, OP_R32, 3, 0, P_386, SFR_IREG|4)
res(ESP, esp, RWT_REG, OP_R32, 4, 0, P_386, SFR_SSBASED|SFR_IREG|4)
res(EBP, ebp, RWT_REG, OP_R32, 5, 0, P_386, SFR_SSBASED|SFR_IREG|4)
res(ESI, esi, RWT_REG, OP_R32, 6, 0, P_386, SFR_IREG|4)
res(EDI, edi, RWT_REG, OP_R32, 7, 0, P_386, SFR_IREG|4)


res(ES, es, RWT_REG, OP_SR86, 0, 0, P_86, 0)
res(CS, cs, RWT_REG, OP_SR86, 1, 0, P_86, 0)
res(SS, ss, RWT_REG, OP_SR86, 2, 0, P_86, 0)
res(DS, ds, RWT_REG, OP_SR86, 3, 0, P_86, 0)
res(FS, fs, RWT_REG, OP_SR386, 4, 0, P_386, 0)
res(GS, gs, RWT_REG, OP_SR386, 5, 0, P_386, 0)

res(ST, st, RWT_REG, OP_ST, 0, 0, P_87, 10)

res(MM0, mm0, RWT_REG, OP_MMX, 0, 0, P_MMX, 8)
res(MM1, mm1, RWT_REG, OP_MMX, 1, 0, P_MMX, 8)
res(MM2, mm2, RWT_REG, OP_MMX, 2, 0, P_MMX, 8)
res(MM3, mm3, RWT_REG, OP_MMX, 3, 0, P_MMX, 8)
res(MM4, mm4, RWT_REG, OP_MMX, 4, 0, P_MMX, 8)
res(MM5, mm5, RWT_REG, OP_MMX, 5, 0, P_MMX, 8)
res(MM6, mm6, RWT_REG, OP_MMX, 6, 0, P_MMX, 8)
res(MM7, mm7, RWT_REG, OP_MMX, 7, 0, P_MMX, 8)

res(XMM0, xmm0, RWT_REG, OP_XMM, 0, 0, P_SSE1, 16)
res(XMM1, xmm1, RWT_REG, OP_XMM, 1, 0, P_SSE1, 16)
res(XMM2, xmm2, RWT_REG, OP_XMM, 2, 0, P_SSE1, 16)
res(XMM3, xmm3, RWT_REG, OP_XMM, 3, 0, P_SSE1, 16)
res(XMM4, xmm4, RWT_REG, OP_XMM, 4, 0, P_SSE1, 16)
res(XMM5, xmm5, RWT_REG, OP_XMM, 5, 0, P_SSE1, 16)
res(XMM6, xmm6, RWT_REG, OP_XMM, 6, 0, P_SSE1, 16)
res(XMM7, xmm7, RWT_REG, OP_XMM, 7, 0, P_SSE1, 16)

res(YMM0, ymm0, RWT_REG, OP_YMM, 0, 0, P_AVX, 32)
res(YMM1, ymm1, RWT_REG, OP_YMM, 1, 0, P_AVX, 32)
res(YMM2, ymm2, RWT_REG, OP_YMM, 2, 0, P_AVX, 32)
res(YMM3, ymm3, RWT_REG, OP_YMM, 3, 0, P_AVX, 32)
res(YMM4, ymm4, RWT_REG, OP_YMM, 4, 0, P_AVX, 32)
res(YMM5, ymm5, RWT_REG, OP_YMM, 5, 0, P_AVX, 32)
res(YMM6, ymm6, RWT_REG, OP_YMM, 6, 0, P_AVX, 32)
res(YMM7, ymm7, RWT_REG, OP_YMM, 7, 0, P_AVX, 32)


res(CR0, cr0, RWT_REG, OP_RSPEC, 0, 0, P_386, 0)
res(CR2, cr2, RWT_REG, OP_RSPEC, 2, 0, P_386, 0)
res(CR3, cr3, RWT_REG, OP_RSPEC, 3, 0, P_386, 0)
res(CR4, cr4, RWT_REG, OP_RSPEC, 4, 0, P_586, 0)
res(DR0, dr0, RWT_REG, OP_RSPEC, 0|0x10, 0, P_386, 0)
res(DR1, dr1, RWT_REG, OP_RSPEC, 1|0x10, 0, P_386, 0)
res(DR2, dr2, RWT_REG, OP_RSPEC, 2|0x10, 0, P_386, 0)
res(DR3, dr3, RWT_REG, OP_RSPEC, 3|0x10, 0, P_386, 0)
res(DR6, dr6, RWT_REG, OP_RSPEC, 6|0x10, 0, P_386, 0)
res(DR7, dr7, RWT_REG, OP_RSPEC, 7|0x10, 0, P_386, 0)

res(TR3, tr3, RWT_REG, OP_RSPEC, 3|0x20,RWF_IA32,P_486, 0)
res(TR4, tr4, RWT_REG, OP_RSPEC, 4|0x20,RWF_IA32,P_486, 0)
res(TR5, tr5, RWT_REG, OP_RSPEC, 5|0x20,RWF_IA32,P_486, 0)
res(TR6, tr6, RWT_REG, OP_RSPEC, 6|0x20,RWF_IA32,P_386, 0)
res(TR7, tr7, RWT_REG, OP_RSPEC, 7|0x20,RWF_IA32,P_386, 0)







res(SPL, spl, RWT_REG, OP_R8, 4, RWF_X64, P_64, 1)
res(BPL, bpl, RWT_REG, OP_R8, 5, RWF_X64, P_64, 1)
res(SIL, sil, RWT_REG, OP_R8, 6, RWF_X64, P_64, 1)
res(DIL, dil, RWT_REG, OP_R8, 7, RWF_X64, P_64, 1)
res(R8B, r8b, RWT_REG, OP_R8, 8, RWF_X64, P_64, 1)
res(R9B, r9b, RWT_REG, OP_R8, 9, RWF_X64, P_64, 1)
res(R10B, r10b, RWT_REG, OP_R8, 10, RWF_X64, P_64, 1)
res(R11B, r11b, RWT_REG, OP_R8, 11, RWF_X64, P_64, 1)
res(R12B, r12b, RWT_REG, OP_R8, 12, RWF_X64, P_64, 1)
res(R13B, r13b, RWT_REG, OP_R8, 13, RWF_X64, P_64, 1)
res(R14B, r14b, RWT_REG, OP_R8, 14, RWF_X64, P_64, 1)
res(R15B, r15b, RWT_REG, OP_R8, 15, RWF_X64, P_64, 1)

res(R8W, r8w, RWT_REG, OP_R16, 8, RWF_X64, P_64, 2)
res(R9W, r9w, RWT_REG, OP_R16, 9, RWF_X64, P_64, 2)
res(R10W, r10w, RWT_REG, OP_R16, 10, RWF_X64, P_64, 2)
res(R11W, r11w, RWT_REG, OP_R16, 11, RWF_X64, P_64, 2)
res(R12W, r12w, RWT_REG, OP_R16, 12, RWF_X64, P_64, 2)
res(R13W, r13w, RWT_REG, OP_R16, 13, RWF_X64, P_64, 2)
res(R14W, r14w, RWT_REG, OP_R16, 14, RWF_X64, P_64, 2)
res(R15W, r15w, RWT_REG, OP_R16, 15, RWF_X64, P_64, 2)

res(R8D, r8d, RWT_REG, OP_R32, 8, RWF_X64, P_64, SFR_IREG|4)
res(R9D, r9d, RWT_REG, OP_R32, 9, RWF_X64, P_64, SFR_IREG|4)
res(R10D, r10d, RWT_REG, OP_R32, 10, RWF_X64, P_64, SFR_IREG|4)
res(R11D, r11d, RWT_REG, OP_R32, 11, RWF_X64, P_64, SFR_IREG|4)
res(R12D, r12d, RWT_REG, OP_R32, 12, RWF_X64, P_64, SFR_IREG|4)
res(R13D, r13d, RWT_REG, OP_R32, 13, RWF_X64, P_64, SFR_IREG|4)
res(R14D, r14d, RWT_REG, OP_R32, 14, RWF_X64, P_64, SFR_IREG|4)
res(R15D, r15d, RWT_REG, OP_R32, 15, RWF_X64, P_64, SFR_IREG|4)

res(RAX, rax, RWT_REG, OP_RAX, 0, RWF_X64, P_64, SFR_IREG|8)
res(RCX, rcx, RWT_REG, OP_R64, 1, RWF_X64, P_64, SFR_IREG|8)
res(RDX, rdx, RWT_REG, OP_R64, 2, RWF_X64, P_64, SFR_IREG|8)
res(RBX, rbx, RWT_REG, OP_R64, 3, RWF_X64, P_64, SFR_IREG|8)
res(RSP, rsp, RWT_REG, OP_R64, 4, RWF_X64, P_64, SFR_SSBASED|SFR_IREG|8)
res(RBP, rbp, RWT_REG, OP_R64, 5, RWF_X64, P_64, SFR_SSBASED|SFR_IREG|8)
res(RSI, rsi, RWT_REG, OP_R64, 6, RWF_X64, P_64, SFR_IREG|8)
res(RDI, rdi, RWT_REG, OP_R64, 7, RWF_X64, P_64, SFR_IREG|8)
res(R8, r8, RWT_REG, OP_R64, 8, RWF_X64, P_64, SFR_IREG|8)
res(R9, r9, RWT_REG, OP_R64, 9, RWF_X64, P_64, SFR_IREG|8)
res(R10, r10, RWT_REG, OP_R64, 10, RWF_X64, P_64, SFR_IREG|8)
res(R11, r11, RWT_REG, OP_R64, 11, RWF_X64, P_64, SFR_IREG|8)
res(R12, r12, RWT_REG, OP_R64, 12, RWF_X64, P_64, SFR_IREG|8)
res(R13, r13, RWT_REG, OP_R64, 13, RWF_X64, P_64, SFR_IREG|8)
res(R14, r14, RWT_REG, OP_R64, 14, RWF_X64, P_64, SFR_IREG|8)
res(R15, r15, RWT_REG, OP_R64, 15, RWF_X64, P_64, SFR_IREG|8)

res(XMM8, xmm8, RWT_REG, OP_XMM, 8, RWF_X64, P_64, 16)
res(XMM9, xmm9, RWT_REG, OP_XMM, 9, RWF_X64, P_64, 16)
res(XMM10,xmm10,RWT_REG, OP_XMM, 10, RWF_X64, P_64, 16)
res(XMM11,xmm11,RWT_REG, OP_XMM, 11, RWF_X64, P_64, 16)
res(XMM12,xmm12,RWT_REG, OP_XMM, 12, RWF_X64, P_64, 16)
res(XMM13,xmm13,RWT_REG, OP_XMM, 13, RWF_X64, P_64, 16)
res(XMM14,xmm14,RWT_REG, OP_XMM, 14, RWF_X64, P_64, 16)
res(XMM15,xmm15,RWT_REG, OP_XMM, 15, RWF_X64, P_64, 16)

res(YMM8, ymm8, RWT_REG, OP_YMM, 8, RWF_X64, P_AVX|P_64, 32)
res(YMM9, ymm9, RWT_REG, OP_YMM, 9, RWF_X64, P_AVX|P_64, 32)
res(YMM10,ymm10,RWT_REG, OP_YMM, 10, RWF_X64, P_AVX|P_64, 32)
res(YMM11,ymm11,RWT_REG, OP_YMM, 11, RWF_X64, P_AVX|P_64, 32)
res(YMM12,ymm12,RWT_REG, OP_YMM, 12, RWF_X64, P_AVX|P_64, 32)
res(YMM13,ymm13,RWT_REG, OP_YMM, 13, RWF_X64, P_AVX|P_64, 32)
res(YMM14,ymm14,RWT_REG, OP_YMM, 14, RWF_X64, P_AVX|P_64, 32)
res(YMM15,ymm15,RWT_REG, OP_YMM, 15, RWF_X64, P_AVX|P_64, 32)


res(CR8, cr8, RWT_REG, OP_RSPEC, 8, RWF_X64, P_64, 0)






res(BYTE, byte, RWT_STYPE, 0, MT_BYTE, 0, P_86, USE_EMPTY)
res(SBYTE, sbyte, RWT_STYPE, 0, MT_SBYTE, 0, P_86, USE_EMPTY)
res(WORD, word, RWT_STYPE, 0, MT_WORD, 0, P_86, USE_EMPTY)
res(SWORD, sword, RWT_STYPE, 0, MT_SWORD, 0, P_86, USE_EMPTY)
res(DWORD, dword, RWT_STYPE, 0, MT_DWORD, 0, P_86, USE_EMPTY)
res(SDWORD, sdword, RWT_STYPE, 0, MT_SDWORD, 0, P_86, USE_EMPTY)
res(REAL4, real4, RWT_STYPE, 0, MT_REAL4, 0, P_86, USE_EMPTY)
res(FWORD, fword, RWT_STYPE, 0, MT_FWORD, 0, P_86, USE_EMPTY)
res(QWORD, qword, RWT_STYPE, 0, MT_QWORD, 0, P_86, USE_EMPTY)
res(SQWORD, sqword, RWT_STYPE, 0, MT_SQWORD, 0, P_86, USE_EMPTY)
res(REAL8, real8, RWT_STYPE, 0, MT_REAL8, 0, P_86, USE_EMPTY)
res(TBYTE, tbyte, RWT_STYPE, 0, MT_TBYTE, 0, P_86, USE_EMPTY)
res(REAL10, real10, RWT_STYPE, 0, MT_REAL10, 0, P_86, USE_EMPTY)
res(OWORD, oword, RWT_STYPE, 0, MT_OWORD, 0, P_86, USE_EMPTY)

res(YMMWORD,ymmword, RWT_STYPE, 0, MT_YMMWORD, 0, P_AVX, USE_EMPTY)


res(NEAR, near, RWT_STYPE, 0, MT_NEAR, 0, P_86, USE_EMPTY)
res(FAR, far, RWT_STYPE, 0, MT_FAR, 0, P_86, USE_EMPTY)
res(NEAR16, near16, RWT_STYPE, 0, MT_NEAR, 0, P_386, USE16)
res(NEAR32, near32, RWT_STYPE, 0, MT_NEAR, 0, P_386, USE32)
res(FAR16, far16, RWT_STYPE, 0, MT_FAR, 0, P_386, USE16)
res(FAR32, far32, RWT_STYPE, 0, MT_FAR, 0, P_386, USE32)

res(MMWORD, mmword, RWT_STYPE, 0, MT_QWORD, 0, P_586|P_MMX, USE_EMPTY)
res(1,xmmword, RWT_STYPE, 0, MT_OWORD, 0, P_686|P_SSE1, USE_EMPTY)




res(DOT_TYPE, .type, RWT_UNARY_OP, AT_ALL, 14, 0, P_86, UOT_DOT_TYPE )
res(HIGH, high, RWT_UNARY_OP, AT_TLN, 6, 0, P_86, UOT_HIGH )

res(HIGH32, high32, RWT_UNARY_OP, AT_CONST | AT_FLOAT, 6, 0, P_86, UOT_HIGH32 )

res(HIGHWORD, highword, RWT_UNARY_OP, AT_CONST, 6, 0, P_86, UOT_HIGHWORD )



res(IMAGEREL, imagerel, RWT_UNARY_OP, AT_LABEL, 5, 0, P_86, UOT_IMAGEREL )

res(LENGTH, length, RWT_UNARY_OP, AT_LF, 3, 0, P_86, UOT_LENGTH )
res(LENGTHOF, lengthof, RWT_UNARY_OP, AT_LF, 3, 0, P_86, UOT_LENGTHOF )
res(LOW, low, RWT_UNARY_OP, AT_TLN, 6, 0, P_86, UOT_LOW )

res(LOW32, low32, RWT_UNARY_OP, AT_TLN | AT_FLOAT, 6, 0, P_86, UOT_LOW32 )

res(LOWWORD, lowword, RWT_UNARY_OP, AT_TLN, 6, 0, P_86, UOT_LOWWORD )
res(LROFFSET, lroffset, RWT_UNARY_OP, AT_LFN, 5, 0, P_86, UOT_LROFFSET )
res(MASK, mask, RWT_UNARY_OP, AT_TBF, 3, 0, P_86, UOT_MASK )
res(OFFSET, offset, RWT_UNARY_OP, AT_TLFN, 5, 0, P_86, UOT_OFFSET )
res(OPATTR, opattr, RWT_UNARY_OP, AT_ALL, 14, 0, P_86, UOT_OPATTR )

res(SECTIONREL, sectionrel, RWT_UNARY_OP, AT_LABEL, 5, 0, P_86, UOT_SECTIONREL)

res(SEG, seg, RWT_UNARY_OP, AT_LABEL, 5, 0, P_86, UOT_SEG )
res(SHORT, short, RWT_UNARY_OP, AT_LABEL, 14, 0, P_86, UOT_SHORT )
res(SIZE, size, RWT_UNARY_OP, AT_TLF, 3, 0, P_86, UOT_SIZE )
res(SIZEOF, sizeof, RWT_UNARY_OP, AT_TLF, 3, 0, P_86, UOT_SIZEOF )
res(THIS, this, RWT_UNARY_OP, AT_TYPE, 5, 0, P_86, UOT_THIS )
res(TYPE, type, RWT_UNARY_OP, AT_ALL, 5, 0, P_86, UOT_TYPE )
res(WIDTH, width, RWT_UNARY_OP, AT_TBF, 3, 0, P_86, UOT_WIDTH )




res(EQ, eq, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(NE, ne, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(GE, ge, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(GT, gt, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(LE, le, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(LT, lt, RWT_BINARY_OP, 0, 10, 0, P_86, 0)
res(MOD, mod, RWT_BINARY_OP, 0, 8, 0, P_86, 0)
res(PTR, ptr, RWT_BINARY_OP, 0, 4, 0, P_86, 0)



res(DUP, dup, RWT_RES_ID, 0, 0, 0, P_86, 0)
res(ADDR, addr, RWT_RES_ID, 0, 0, 0, P_86, 0)
res(FLAT, flat, RWT_RES_ID, 0, 0, 0, P_86, 0)
res(VARARG, vararg,RWT_RES_ID, 0, 0, 0, P_86, 0)

res(FRAME, frame, RWT_RES_ID, 0, 0, RWF_X64, P_64, 0)




res(C, c, RWT_RES_ID, 0, LANG_C, 0, P_86, 0)
res(SYSCALL, syscall, RWT_RES_ID, 0, LANG_SYSCALL, 0, P_86, 0)
res(STDCALL, stdcall, RWT_RES_ID, 0, LANG_STDCALL, 0, P_86, 0)
res(PASCAL, pascal, RWT_RES_ID, 0, LANG_PASCAL, 0, P_86, 0)
res(FORTRAN, fortran, RWT_RES_ID, 0, LANG_FORTRAN, 0, P_86, 0)
res(BASIC, basic, RWT_RES_ID, 0, LANG_BASIC, 0, P_86, 0)
res(FASTCALL, fastcall, RWT_RES_ID, 0, LANG_FASTCALL, 0, P_86, 0)
# 59 "main.c" 2

# 1 "./tbyte.h" 1
# 34 "./tbyte.h"
struct TB_LD {
    uint_64 m;
    unsigned short e;
};

struct TB_LD *strtotb( const char *bufptr, struct TB_LD *pld, char negative );
# 61 "main.c" 2

# 1 "./tokenize.h" 1
# 35 "./tokenize.h"
struct line_status {
    char *input;
    char *output;
    char *start;
    unsigned int index;

    char flags;
    char flags2;
    char flags3;
};

enum tokenize_flags {
    TOK_DEFAULT = 0x00,
    TOK_RESCAN = 0x01,
    TOK_NOCURLBRACES = 0x02,
    TOK_LINE = 0x04,
};

enum tok_flags3 {
    TF3_ISCONCAT = 0x01,
    TF3_EXPANSION = 0x02,
};

extern ret_code GetToken( struct asm_tok[], struct line_status * );
extern int Tokenize( char *, unsigned int, struct asm_tok[], unsigned int );
# 63 "main.c" 2
# 1 "./trmem.h" 1
# 38 "./trmem.h"
typedef struct _trmem_internal *_trmem_hdl;

typedef void (*_trmem_who)( void );



typedef void *(*_trmem_realloc_who)(void*,size_t);







enum {
    _TRMEM_ALLOC_SIZE_0 =0x0001,
    _TRMEM_REALLOC_SIZE_0 =0x0002,
    _TRMEM_REALLOC_NULL =0x0004,
    _TRMEM_FREE_NULL =0x0008,
    _TRMEM_OUT_OF_MEMORY =0x0010,

    _TRMEM_CLOSE_CHECK_FREE =0x0020

};
# 96 "./trmem.h"
_trmem_hdl _trmem_open(
    void *(*__alloc)(size_t),
    void (*__free)(void*),
    void * (*__realloc)(void*,size_t),
    void * (*__expand)(void*,size_t),
    FILE *__prt_parm,
    void (*__prt_line)( FILE *__prt_parm, const char *__buf, size_t __len ),
    unsigned __flags
);







unsigned _trmem_close( _trmem_hdl );
# 121 "./trmem.h"
void *_trmem_alloc( size_t, _trmem_who, _trmem_hdl );
void _trmem_free( void *, _trmem_who, _trmem_hdl );
void *_trmem_realloc( void *, size_t, _trmem_who, _trmem_hdl );
void *_trmem_expand( void *, size_t, _trmem_who, _trmem_hdl );
char *_trmem_strdup( const char *str, _trmem_who who, _trmem_hdl hdl );
size_t _trmem_msize( void *, _trmem_hdl );






void _trmem_prt_usage( _trmem_hdl );
unsigned _trmem_prt_list( _trmem_hdl );





unsigned long _trmem_get_current_usage( _trmem_hdl );
unsigned long _trmem_get_peak_usage( _trmem_hdl );

_trmem_who _trmem_guess_who( void * );
# 64 "main.c" 2
# 1 "./types.h" 1







struct qualified_type {
    int size;
    struct asym *symtype;
    enum memtype mem_type;
    uint_8 is_ptr;
    uint_8 is_far;
    uint_8 Ofssize;
    enum memtype ptr_memtype;
};

extern struct dsym *CurrStruct;

extern struct asym *CreateTypeSymbol( struct asym *, const char *, bool );
extern struct asym *SearchNameInStruct( const struct asym *, const char *, uint_32 *, int level );

extern ret_code GetQualifiedType( int *, struct asm_tok[], struct qualified_type * );
extern struct asym *CreateStructField( int, struct asm_tok[], const char *, enum memtype, struct asym *, uint_32 );
extern void UpdateStructSize( struct asym * );
extern ret_code SetStructCurrentOffset( int_32 );
extern ret_code AlignInStruct( int );
extern void TypesInit( void );
extern void DeleteType( struct dsym * );
# 65 "main.c" 2
# 1 "./unaryop.h" 1

res( LOW, low_op )
res( HIGH, high_op )
res( LOWWORD, lowword_op )
res( HIGHWORD, highword_op)

res( LOW32, low32_op )
res( HIGH32, high32_op )

res( OFFSET, offset_op )
res( LROFFSET, offset_op )

res( IMAGEREL, offset_op )


res( SECTIONREL, offset_op )

res( SEG, seg_op )
res( OPATTR, opattr_op )
res( DOT_TYPE, opattr_op )
res( SIZE, sizlen_op )
res( SIZEOF, sizlen_op )
res( LENGTH, sizlen_op )
res( LENGTHOF, sizlen_op )
res( SHORT, short_op )
res( THIS, this_op )
res( TYPE, type_op )
res( MASK, wimask_op )
res( WIDTH, wimask_op )
# 66 "main.c" 2

# 1 "./win32.h" 1
# 33 "./win32.h"
__declspec(dllimport) void *__stdcall VirtualAlloc( void *, size_t, uint_32, uint_32 );
__declspec(dllimport) int __stdcall VirtualFree( void *, size_t, uint_32 );
# 68 "main.c" 2
# 1 "./win64seh.h" 1





typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{
    uint_32 BeginAddress;
    uint_32 EndAddress;
    uint_32 UnwindData;
} IMAGE_RUNTIME_FUNCTION_ENTRY;



enum {
    UWOP_PUSH_NONVOL = 0,
    UWOP_ALLOC_LARGE = 1,
    UWOP_ALLOC_SMALL = 2,
    UWOP_SET_FPREG = 3,
    UWOP_SAVE_NONVOL = 4,
    UWOP_SAVE_NONVOL_FAR = 5,
    UWOP_SAVE_XMM = 6,
    UWOP_SAVE_XMM_FAR = 7,
    UWOP_SAVE_XMM128 = 8,
    UWOP_SAVE_XMM128_FAR = 9,
    UWOP_PUSH_MACHFRAME = 10
};

typedef union _UNWIND_CODE {
    struct {
        uint_8 CodeOffset;
        uint_8 UnwindOp : 4;
        uint_8 OpInfo : 4;
    };
    uint_16 FrameOffset;
} UNWIND_CODE;

enum {
    UNW_FLAG_NHANDLER = 0,
    UNW_FLAG_EHANDLER = 1,
    UNW_FLAG_UHANDLER = 2,
    UNW_FLAG_FHANDLER = 3,
    UNW_FLAG_CHAININFO = 4
};

typedef struct _UNWIND_INFO {
    uint_8 Version : 3;
    uint_8 Flags : 5;
    uint_8 SizeOfProlog;
    uint_8 CountOfCodes;
    uint_8 FrameRegister : 4;
    uint_8 FrameOffset : 4;
# 61 "./win64seh.h"
} UNWIND_INFO;
# 69 "main.c" 2

int main() {}
