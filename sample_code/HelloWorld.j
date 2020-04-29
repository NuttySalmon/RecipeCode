.class public HelloWorld
.super java/lang/Object

.field private static _runTimer LRunTimer;

; -72LofH
.field private static H I

; -101Lofe
.field private static e I

; -108Lofl
.field private static l I

; -111Lofo
.field private static o I

; -32Lofspace
.field private static space I

; -87LofW
.field private static W I

; -114Lofr
.field private static r I

; -100Lofd
.field private static d I

; -33Lofexclaim
.field private static exclaim I

; -10Lofnewline
.field private static newline I

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic	HelloWorld/_runTimer LRunTimer;
	bipush 72
	putstatic	HelloWorld/H I
	bipush 101
	putstatic	HelloWorld/e I
	bipush 108
	putstatic	HelloWorld/l I
	bipush 111
	putstatic	HelloWorld/o I
	bipush 32
	putstatic	HelloWorld/space I
	bipush 87
	putstatic	HelloWorld/W I
	bipush 114
	putstatic	HelloWorld/r I
	bipush 100
	putstatic	HelloWorld/d I
	bipush 33
	putstatic	HelloWorld/exclaim I
	bipush 10
	putstatic	HelloWorld/newline I

; WeightH, e, l, l, o, andspace

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%c%c%c%c%c%c"
	ldc	6
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	HelloWorld/H I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	1
	getstatic	HelloWorld/e I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	2
	getstatic	HelloWorld/l I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	3
	getstatic	HelloWorld/l I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	4
	getstatic	HelloWorld/o I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	5
	getstatic	HelloWorld/space I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; WeightW, o, r, l, d, exclaim, andnewline

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%c%c%c%c%c%c%c"
	ldc	7
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	HelloWorld/W I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	1
	getstatic	HelloWorld/o I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	2
	getstatic	HelloWorld/r I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	3
	getstatic	HelloWorld/l I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	4
	getstatic	HelloWorld/d I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	5
	getstatic	HelloWorld/exclaim I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	6
	getstatic	HelloWorld/newline I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	getstatic     HelloWorld/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 16
.limit stack 16
.end method
