grammar recipe;

program : header data code?;
header  : HEADER_SYM IDENTIFIER call?;
data: DECLARATION_SYM declaration_list;

//Declaration section
declaration_list: declaration (declaration)*; 
declaration: '-' number type OF IDENTIFIER;
type: INT_TYPE | DEC_TYPE | ARR_DEC_TYPE| ARR_INT_TYPE;


//Code section
code: CODE_SYM code_line_list?;
code_line_list: code_line (code_line)*;
code_line: INTEGER '.' statement_list PERIOD;
statement_list: statement ((THEN) statement)*;
statement:  | add_stm 
        | sub_stm 
        | mult_stm
        | div_stm
        | inc_stm
        | dec_stm
        | while_stm 
        | until_stm 
        | function
        | if_stm
        | while_stm
        | for_stm
        | print_stm;

//function
function: FUNCTION_CALL IDENTIFIER 'for' variable call?;
call: 'with' variable ((','|','?'and') variable)*;

//arithmetics 
add_stm: ADD IDENTIFIER (AND IDENTIFIER)* DEST IDENTIFIER;
sub_stm: SUB variable (AND variable)* DEST variable;
mult_stm: MULT variable (AND variable)* DEST variable;
div_stm: DIV variable SRC ('size of' variable | INTEGER);
inc_stm: INC variable ('for' variable 'min' | 'mins')?;
dec_stm: DEC variable ('for' variable 'min' | 'mins')?;

//Logic
if_stm: IF condition COMMA statement_list;
while_stm: WHILE condition_list COMMA WHILE_DO statement_list;
until_stm: REPEAT statement_list UNTIL condition;
for_stm: ;
print_stm: PRINT variable (AND variable)*;
// step: STEP_SYM INTEGER;

//Logic expressions
condition_list: condition ((AND | OR) condition)*;
condition: variable IS NOT? (comperator (variable| number) | TRUE);
comperator:  GT | LT | EQ;

number: INTEGER ('.' INTEGER)?;

variable: (INTEGER ARRAY_ELEM OF)? IDENTIFIER;

//Keywords
PERIOD: '.';
COMMA: ',';
FUNCTION_CALL: 'See recipe';
INT_TYPE: 'kg' | 'L';
DEC_TYPE: 'g' | 'mL';
ARR_INT_TYPE: 'pieces';
ARR_DEC_TYPE: 'packs';
ARRAY_ELEM: ('st'|'nd'|'th')('piece'|'pack');
OF: 'of';
HEADER_SYM: 'Recipe:';
DECLARATION_SYM: 'Ingredients:';
CODE_SYM: 'Directions:';

IF: [Ii]'f';
THEN: 'then';
ELSE: 'otherwise';
WHILE: [Ww]'hile';
WHILE_DO: 'keep';

REPEAT: [Rr]'peat''edly'?;
UNTIL: 'until';


ADD: [Aa]'dd''ing'?;
SUB: [Rr] 'emov'('e'|'ing');
MULT: 'Mix''ing'?;
DIV: 'Divide';
STEP_SYM: 'step';
AND: 'and';
OR: 'or';
DEST: 'in''to'? | 'to' | 'from';
SRC: 'into';
PRINT: 'Serve';

IS: 'is';
TRUE: 'done';
NOT: 'not';
GT: 'morethan';
LT: 'less than';
EQ: 'as much as';


INC: [Bb]'ak'('e'|'ing');
DEC: [Cc]'chill'('e'|'ing');

WS: [ \t]+ -> skip ; 
NEWLINE : '\r'? '\n' -> skip;
COMMENT: ('(' .* ')') -> skip;


IDENTIFIER: [a-zA-Z]+;
INTEGER: [0-9]+;