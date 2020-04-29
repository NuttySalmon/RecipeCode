.class public Factorial
.super java/lang/Object


; -12kgofn
.field private static n I

; -1kgofresult
.field private static result I

.method public <init>()V

	aload_0
	invokenonvirtual java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method public static main([Ljava/lang/String;)V

	bipush 12
	putstatic	Factorial/n I
	iconst_1
	putstatic	Factorial/result I

; Whilenisnotdone, keepmixingnintoresultthenchilln

	L0:
;condition
	getstatic	Factorial/n I
	iconst_1
	if_icmpne L2
		iconst_0
		goto L3
	L2:
		iconst_1
	L3:
	iconst_1
	if_icmpne L1

; mixingnintoresult

	getstatic	Factorial/result I
	i2f
	getstatic	Factorial/n I
	i2f
	fmul
	f2i
	putstatic	Factorial/result I

; chilln

	getstatic	Factorial/n I
	iconst_1
	isub
	putstatic	Factorial/n I
	goto L0
	L1:

; Checkresult

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	getstatic	Factorial/result I
	invokevirtual java/io/PrintStream.println(I)V


	return

.limit locals 16
.limit stack 16
.end method
