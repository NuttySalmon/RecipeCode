# Recipe-Code (programming language)
Recipe-code is an esoteric programming language that could pass as a recipe when you look at it afar (...until you actually look at the ingredients and directions). 

This project uses ANTLR 4 to generate scanner and parser, which are used to generate instruction code to be used in JVM.

CMake can be used to compile this project. The executable can then be used to compile source code written in recipe-code into .j files. The .j file can then be feed into Jasmin assembler to generate the .class file, which can be executed with Java runtime. 

## Sample code
```
Recipe: Meatball
(not a real recipe)

Ingredients:
- 5 kg of beef
- 2 kg of pork
- 4.25 g of oregano 
- 60 mL of milk
- 1 g of breadcrumbs
- 1 g of mixture
- 6 L of water

Directions:
1. Add oregano and breadcrumbs to beef then add beef to pork.
2. Mix milk and beef into mixture.
3. If mixture is as much as breadcrumbs, remove pork from beef, otherwise add breadcrumbs to mixture.
4. Divide mixture into 3 then check milk.
5. Remove mixture from beef. 
7. Repeatedly add oregano to mixture until mixture is more than or equal to beef then check mixture.
6. While beef is not done, keep baking beef.

```
## Implemented features

Here is a list of key implemented features with examples and pseudocode.
#### Overall structure
    Recipe: <program name> 

    Ingredients:
        - <data declaration here>
    
    Directions:
        1. <instruction here>
   
#### Comments: 
	(This is a comment)

#### Declaration and assignment:
`- 1 kg of pork` (int pork  = 1)

`- 1 L of milk` (int milk = 1)

`- 2.3 mL of water` (float water = 2.3)

`- 3 g of salt` (float salt = 3)

#### Addition: 
	Add water into flour. (flour = flour + water)
    Add water, salt and yeast into flour. (flour = flour + water + salt + yeast)

#### Subtraction:
    Remove banana from bowl. (bowl = bowl - banana)
    Remove banana, apple, and orange from bowl. (bowl = bowl - banana - apple - orange)

#### Multiplication:
	Mix water into flour. (flour = flour * water)
    Mix water, salt and yeast into flour. (flour = flour * water * salt * yeast)

#### Division:
	Divide pork into 4. (pork = pork / 4)
    Divide pork into size of meatball. (pork = pork / meatball)
    Divide pork into size of meatball and again into 3. (pork = pork / meatball / 3)

#### Increment:
    Bake bread. (bread = bread + 1)
    Bake bread for 4 mins. (bread = bread + 4)

#### Decrement:
    Chill mixture. (mixture = mixture - 1)
    Chill mixture for 4 mins. (mixture = mixture - 1)

#### Conditions:
    beef is as much as pork. (beef == pork)
    beef is not as much as pork. (beef != pork)
    beef is less than pork. (beef < pork)
    beef is less than or equal to pork. (beef <= pork)
    beef is done. (beef == 1)
    beef is not done. (beef != 1)
    beef is done and pork is less than flour (beef == 1 && pork < flour)
    beef is done or pork is less than flour  (beef == 1 || pork < flour)

#### If statement:
    If beef is not done, then cook beef. (IF beef != 1 THEN beef++)
    If beef less than pork, then divide pork into 2, otherwise divide beef into 5.
    (IF beef < pork THEN pork = pork/2 ELSE beef = beef/5)

#### While loop:
    While beef is not done, keep cooking beef. (WHILE beef != 1 THEN beef++)

#### Repeat until loop:
    Repeatedly cook beef until beef is done. (LOOP beef++ UNTIL beef == 1)

#### Print:
    Check beef. (print beef with new line)
    Weight beef. (treat int beef as ASCII value and print corresponding char)