.class public Meatball
.super java/lang/Object


; -65kgofbeef
.field private static beef I

; -10kgofpork
.field private static pork I

; -4.25goforegano
.field private static oregano F

; -66Lofmilk
.field private static milk I

; -1gofbreadcrumbs
.field private static breadcrumbs F

; -1gofmixture
.field private static mixture F

; -67Lofwater
.field private static water I

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	ldc	65
	putstatic	Meatball/beef I
	ldc	10
	putstatic	Meatball/pork I
	ldc	4.25
	putstatic	Meatball/oregano F
	ldc	66
	putstatic	Meatball/milk I
	iconst_1
	i2f
	putstatic	Meatball/breadcrumbs F
	iconst_1
	i2f
	putstatic	Meatball/mixture F
	ldc	67
	putstatic	Meatball/water I

; Addoreganotobeef

	getstatic	Meatball/oregano F
	getstatic	Meatball/beef I

; addbeeftopork

	getstatic	Meatball/beef I
	getstatic	Meatball/pork I

; Mixmilkandbeefintomixture

	getstatic	Meatball/milk I
	getstatic	Meatball/beef I
	getstatic	Meatball/mixture F

; Ifmixtureisas much asbreadcrumbs, removeporkfrombeef, otherwiseaddbreadcrumbstomixture

	;mixtureisas much asbreadcrumbs
	getstatic	Meatball/mixture F
	getstatic	Meatball/breadcrumbs F
	fcmpl
	ifne L2
		iconst_1
		goto L3
	L2:
		iconst_0
	L3:
	iconst_1
	if_icmpne L0

;if true

; removeporkfrombeef

	getstatic	Meatball/pork I
	getstatic	Meatball/beef I
	goto L1

;if false
	L0:

; addbreadcrumbstomixture

	getstatic	Meatball/breadcrumbs F
	getstatic	Meatball/mixture F
	L1:

; Whilemixtureisnotdone, keepbakingmixture

	L4:
	getstatic	Meatball/mixture F
	iconst_1
	i2f
	fcmpl
	ifne L6
		iconst_0
		goto L7
	L6:
		iconst_1
	L7:
	iconst_1
	if_icmpne L5

; bakingmixture

	getstatic	Meatball/mixture F
	fconst_1
	i2f
	fadd
	putstatic	Meatball/mixture F
	goto L4
	L5:

; Chillwater

	getstatic	Meatball/water I
	iconst_1
	isub
	putstatic	Meatball/water I

; Checkoregano, pork, andbeef

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/oregano F
	invokevirtual java/io/PrintStream.println(F)V
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/pork I
	invokevirtual java/io/PrintStream.println(I)V
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/beef I
	invokevirtual java/io/PrintStream.println(I)V

; Weightbeef, milk, water, andpork

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%C%C%C%C"
	ldc	4
	anewarray	java/lang/Object
	dup
	ldc	0
	getstatic	Meatball/beef I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	1
	getstatic	Meatball/milk I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	2
	getstatic	Meatball/water I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	ldc	3
	getstatic	Meatball/pork I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop


	return

.limit locals 16
.limit stack 16
.end method
