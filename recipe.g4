grammar recipe;

program : header data code?;
header  : HEADER_SYM IDENTIFIER call?;
data: DECLARATION_SYM declaration_list;

//Declaration section
declaration_list: declaration (declaration)*; 
declaration: '-' (single_declaration | array_declaration);
/* */
single_declaration: number 'kg of' IDENTIFIER;
array_declaration: INTEGER ARRAY_OF number type IDENTIFIER; 
type: INT_SYM | DEC_SYM;

//Code section
code: CODE_SYM code_line_list?;
code_line_list: code_line (code_line)*;
code_line: INTEGER '.' statement_list '.';
statement_list: statement (statement)*;
statement: add_stm | sub_stm | while_stm | until_stm | function;

//function
function: FUNCTION_CALL IDENTIFIER 'for' IDENTIFIER ', ' call;
call: 'with' (IDENTIFIER ((',' | 'and' | ', and') IDENTIFIER)*)?;

//arithmetics 
add_stm: ADD IDENTIFIER (AND IDENTIFIER)* TO IDENTIFIER;
sub_stm: SUB IDENTIFIER (AND IDENTIFIER)* FROM IDENTIFIER;
mult_stm: MULT IDENTIFIER (AND IDENTIFIER)* TO IDENTIFIER;
div_stm: DIV IDENTIFIER TO ('size of' IDENTIFIER | INTEGER);
inc_stm: INC IDENTIFIER 'for' INTEGER 'min' | 'mins';
dec_stm: DEC IDENTIFIER 'for' INTEGER 'min' | 'mins';

//Logic
if_stm: IF condition_list ',' THEN (DO step | statement_list) ',' (ELSE (DO step| statement_list))?;
while_stm: condition_list ',' (DO step | statement_list);
until_stm: REPEAT (statement_list | step) UNTIL condition;
for_stm: ;
step: STEP_SYM INTEGER;

//Logic expressions
condition_list: condition ((AND | OR) condition)*;
condition: IDENTIFIER IS NOT? comperator (IDENTIFIER| number);
comperator:  GT | LT | EQ;

number: INTEGER ('.' INTEGER)?;

//Keywords
FUNCTION_CALL: 'See recipe';
OF: 'of';
ARRAY_OF: 'pieces of';
HEADER_SYM: 'Recipe:';
DECLARATION_SYM: 'Ingredients:';
CODE_SYM: 'Directions:';
IDENTIFIER: [a-zA-Z]+;
INTEGER: [0-9]+;
INT_SYM: 'kg' | 'l';
DEC_SYM: 'g' | 'ml';
IF: [Ii]'f';
THEN: 'then';
ELSE: 'otherwise';
WHILE: [Ww]'hile';
DO: 'do';
REPEAT: [Rr]'peat''edly'?;
UNTIL: 'until';
ADD: [Aa]'dd''ing'?;
SUB: [Rr] 'emov'('e'|'ing');
MULT: 'Mix''ing'?;
DIV: 'Divide';
STEP_SYM: 'step';
AND: 'and';
OR: 'or';
TO: 'in'?'to';
FROM: 'from';

IS: 'is';
TRUE: 'done';
NOT: 'not';
GT: 'morethan';
LT: 'less than';
EQ: 'as much as';

WS: [\t]+ -> skip ; 
NEWLINE : '\r'? '\n' -> skip;
COMMENT: ('(' .* ')') -> skip;

INC: 'Bake';
DEC: 'Chill';