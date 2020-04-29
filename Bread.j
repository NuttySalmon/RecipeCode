.class public Bread
.super java/lang/Object


; -600mLofflour
.field private static flour F

; -600mLofwater
.field private static water F

; -10kgofstarter
.field private static starter I

; -1kgofyeast
.field private static yeast I

; -84kgofnuts
.field private static nuts I

; -70kgofberries
.field private static berries I

; -30kgofcheese
.field private static cheese I

; -15kgofpho
.field private static pho I

; -40gofpudding
.field private static pudding F

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	ldc	600
	i2f
	putstatic	Bread/flour F
	ldc	600
	i2f
	putstatic	Bread/water F
	bipush 10
	putstatic	Bread/starter I
	iconst_1
	putstatic	Bread/yeast I
	bipush 84
	putstatic	Bread/nuts I
	bipush 70
	putstatic	Bread/berries I
	bipush 30
	putstatic	Bread/cheese I
	bipush 15
	putstatic	Bread/pho I
	bipush 40
	i2f
	putstatic	Bread/pudding F

; Ifwaterismore thanflour, weightnuts, otherwiseweightberries

	;waterismore thanflour
;condition
	getstatic	Bread/water F
	getstatic	Bread/flour F
	fcmpl
	ifle L2
		iconst_1
		goto L3
	L2:
		iconst_0
	L3:
	iconst_1
	if_icmpne L0

;if true

; weightnuts

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/nuts I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L1

;if false
	L0:

; weightberries

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/berries I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	L1:

; Weightstarter

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/starter I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; Ifwaterismore than or equal toflourandyeastisdone, weightnuts, otherwiseweightberries

	;waterismore than or equal toflourandyeastisdone
;condition
	getstatic	Bread/water F
	getstatic	Bread/flour F
	fcmpl
	iflt L6
		iconst_1
		goto L7
	L6:
		iconst_0
	L7:
;condition
	getstatic	Bread/yeast I
	iconst_1
	if_icmpne L8
		iconst_1
		goto L9
	L8:
		iconst_0
	L9:
	iand
	iconst_1
	if_icmpne L4

;if true

; weightnuts

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/nuts I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L5

;if false
	L4:

; weightberries

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/berries I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	L5:

; Weightstarter

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C"
	ldc	1
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Bread/starter I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; Bakeyeast

	getstatic	Bread/yeast I
	iconst_1
	iadd
	putstatic	Bread/yeast I

; checkyeast

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/yeast I
	invokevirtual java/io/PrintStream.println(I)V

; Bakeflourfor4mins

	getstatic	Bread/flour F
	iconst_4
	i2f
	fadd
	putstatic	Bread/flour F

; checkflour

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/flour F
	invokevirtual java/io/PrintStream.println(F)V

; Whilestarterisnotdone, keepchillingstarterthencheckstarter

	L10:
;condition
	getstatic	Bread/starter I
	iconst_1
	if_icmpne L12
		iconst_0
		goto L13
	L12:
		iconst_1
	L13:
	iconst_1
	if_icmpne L11

; chillingstarter

	getstatic	Bread/starter I
	iconst_1
	isub
	putstatic	Bread/starter I

; checkstarter

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/starter I
	invokevirtual java/io/PrintStream.println(I)V
	goto L10
	L11:

; Repeatedlybakestarterthencheckstarteruntilstarterisas much asberries

	L14:

; bakestarter

	getstatic	Bread/starter I
	iconst_1
	iadd
	putstatic	Bread/starter I

; checkstarter

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/starter I
	invokevirtual java/io/PrintStream.println(I)V
;condition
	getstatic	Bread/starter I
	getstatic	Bread/berries I
	if_icmpne L16
		iconst_1
		goto L17
	L16:
		iconst_0
	L17:
	iconst_1
	if_icmpne L14

; Removestarterandflourfromyeast

	getstatic	Bread/yeast I
	getstatic	Bread/starter I
	isub
	i2f
	getstatic	Bread/flour F
	fsub
	f2i
	putstatic	Bread/yeast I

; checkyeast

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/yeast I
	invokevirtual java/io/PrintStream.println(I)V

; Removeflourandstarterfromyeast

	getstatic	Bread/yeast I
	i2f
	getstatic	Bread/flour F
	fsub
	getstatic	Bread/starter I
	i2f
	fsub
	f2i
	putstatic	Bread/yeast I

; checkyeast

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/yeast I
	invokevirtual java/io/PrintStream.println(I)V

; Removeyeastandstarterfromflour

	getstatic	Bread/flour F
	getstatic	Bread/yeast I
	i2f
	fsub
	getstatic	Bread/starter I
	i2f
	fsub
	putstatic	Bread/flour F

; checkflour

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/flour F
	invokevirtual java/io/PrintStream.println(F)V

; Removestarterandwaterfromflour

	getstatic	Bread/flour F
	getstatic	Bread/starter I
	i2f
	fsub
	getstatic	Bread/water F
	fsub
	putstatic	Bread/flour F

; checkflour

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/flour F
	invokevirtual java/io/PrintStream.println(F)V

; Addcheeseandpuddingtocheese

	getstatic	Bread/cheese I
	getstatic	Bread/cheese I
	iadd
	i2f
	getstatic	Bread/pudding F
	fadd
	f2i
	putstatic	Bread/cheese I

; checkcheese

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/cheese I
	invokevirtual java/io/PrintStream.println(I)V

; Addpuddingandcheesetocheese

	getstatic	Bread/cheese I
	i2f
	getstatic	Bread/pudding F
	fadd
	getstatic	Bread/cheese I
	i2f
	fadd
	f2i
	putstatic	Bread/cheese I

; checkcheese

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/cheese I
	invokevirtual java/io/PrintStream.println(I)V

; Addcheeseandphotowater

	getstatic	Bread/water F
	getstatic	Bread/cheese I
	i2f
	fadd
	getstatic	Bread/pho I
	i2f
	fadd
	putstatic	Bread/water F

; checkwater

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/water F
	invokevirtual java/io/PrintStream.println(F)V

; Addwaterandflourandcheesetopudding

	getstatic	Bread/pudding F
	getstatic	Bread/water F
	fadd
	getstatic	Bread/flour F
	fadd
	getstatic	Bread/cheese I
	i2f
	fadd
	putstatic	Bread/pudding F

; checkpudding

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Bread/pudding F
	invokevirtual java/io/PrintStream.println(F)V


	return

.limit locals 16
.limit stack 16
.end method
