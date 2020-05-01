.class public Meatball
.super java/lang/Object


; -5kgofbeef
.field private static beef I

; -2kgofpork
.field private static pork I

; -4.25goforegano
.field private static oregano F

; -60mLofmilk
.field private static milk F

; -1gofbreadcrumbs
.field private static breadcrumbs F

; -1gofmixture
.field private static mixture F

; -6Lofwater
.field private static water I

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	iconst_5
	putstatic	Meatball/beef I
	iconst_2
	putstatic	Meatball/pork I
	ldc	4.25
	putstatic	Meatball/oregano F
	bipush 60
	i2f
	putstatic	Meatball/milk F
	iconst_1
	i2f
	putstatic	Meatball/breadcrumbs F
	iconst_1
	i2f
	putstatic	Meatball/mixture F
	bipush 6
	putstatic	Meatball/water I

; Addoreganoandbreadcrumbstobeef

	getstatic	Meatball/beef I
	i2f
	getstatic	Meatball/oregano F
	fadd
	getstatic	Meatball/breadcrumbs F
	fadd
	f2i
	putstatic	Meatball/beef I

; addbeeftopork

	getstatic	Meatball/pork I
	getstatic	Meatball/beef I
	iadd
	putstatic	Meatball/pork I

; Mixmilkandbeefintomixture

	getstatic	Meatball/mixture F
	getstatic	Meatball/milk F
	fmul
	getstatic	Meatball/beef I
	i2f
	fmul
	putstatic	Meatball/mixture F

; Ifmixtureisas much asbreadcrumbs, removeporkfrombeef, otherwiseaddbreadcrumbstomixture

	;mixtureisas much asbreadcrumbs
;condition
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

	getstatic	Meatball/beef I
	getstatic	Meatball/pork I
	isub
	putstatic	Meatball/beef I
	goto L1

;if false
	L0:

; addbreadcrumbstomixture

	getstatic	Meatball/mixture F
	getstatic	Meatball/breadcrumbs F
	fadd
	putstatic	Meatball/mixture F
	L1:

; Removemixturefrombeef

	getstatic	Meatball/beef I
	i2f
	getstatic	Meatball/mixture F
	fsub
	f2i
	putstatic	Meatball/beef I

; Whilebeefisnotdone, keepbakingbeef

	L4:
;condition
	getstatic	Meatball/beef I
	iconst_1
	if_icmpne L6
		iconst_0
		goto L7
	L6:
		iconst_1
	L7:
	iconst_1
	if_icmpne L5

; bakingbeef

	getstatic	Meatball/beef I
	iconst_1
	iadd
	putstatic	Meatball/beef I
	goto L4
	L5:

; Checkoregano, mixture, andbeef

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/oregano F
	invokevirtual java/io/PrintStream.println(F)V
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/mixture F
	invokevirtual java/io/PrintStream.println(F)V
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/beef I
	invokevirtual java/io/PrintStream.println(I)V

; Repeatedlyaddoreganotomixtureuntilmixtureismore than or equal tobeef

	L8:

; addoreganotomixture

	getstatic	Meatball/mixture F
	getstatic	Meatball/oregano F
	fadd
	putstatic	Meatball/mixture F
;condition
	getstatic	Meatball/mixture F
	getstatic	Meatball/beef I
	i2f
	fcmpl
	iflt L10
		iconst_1
		goto L11
	L10:
		iconst_0
	L11:
	iconst_1
	if_icmpne L8

; checkmixture

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/mixture F
	invokevirtual java/io/PrintStream.println(F)V

; Checkmilk

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/milk F
	invokevirtual java/io/PrintStream.println(F)V

; dividemilkinto3

	getstatic	Meatball/milk F
	iconst_3
	i2f
	fdiv
	putstatic	Meatball/milk F

; checkmilk

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Meatball/milk F
	invokevirtual java/io/PrintStream.println(F)V


	return

.limit locals 16
.limit stack 16
.end method
