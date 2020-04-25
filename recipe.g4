grammar recipe;

program : header data code?;
header  : HEADER_SYM IDENTIFIER call?;
data: DECLARATION_SYM declaration_list;

//Declaration section
declaration_list: (declaration)+; 
declaration: '-' number type OF IDENTIFIER;
type: INT_TYPE | DEC_TYPE | ARR_DEC_TYPE| ARR_INT_TYPE;


//Code section
code: CODE_SYM code_line_list?;
code_line_list: (code_line)+;
code_line: INTEGER '.' statement_list PERIOD;
statement_list: statement ((THEN) statement)*;
statement:                                                                   # empty
        | ADD IDENTIFIER (AND IDENTIFIER)* DEST IDENTIFIER                   # add
        | SUB variable (AND variable)* DEST variable                         # sub
        | MULT variable (AND variable)* DEST variable                        # mult
        | DIV variable SRC ('size of' variable | INTEGER)                    # div
        | INC variable ('for' variable 'min' | 'mins')?                      # inc
        | DEC variable ('for' variable 'min' | 'mins')?                      # dec
        | WHILE condition_list COMMA WHILE_DO statement_list                 # while
        | REPEAT statement_list UNTIL condition                              # repeat
        | FUNCTION IDENTIFIER 'for' variable call?                           # func_call
        | IF condition COMMA statement_list (COMMA ELSE statement_list)?     # if
        | PRINT variable (AND variable)*                                     # print
        | RETURN IDENTIFIER                                                  # return
        ;

//function
call: 'with' variable ((','|','?'and') variable)*;

//Logic expressions
condition_list: condition ((AND | OR) condition)*;
condition: variable IS NOT? (comperator (variable| number) | TRUE);
comperator:  GT | LT | EQ;

number: INTEGER                   # int 
        | INTEGER ('.' INTEGER)   # float;
variable: (INTEGER ARRAY_ELEM OF)? IDENTIFIER;

//Keywords
PERIOD: '.';
COMMA: ',';
FUNCTION: 'See recipe';
INT_TYPE: 'kg' | 'L';
DEC_TYPE: 'g' | 'mL';
ARR_INT_TYPE: 'pieces';
ARR_DEC_TYPE: 'packs';
ARRAY_ELEM: ('st'|'nd'|'th')('piece'|'pack');
OF: 'of';
HEADER_SYM: 'Recipe:';
DECLARATION_SYM: 'Ingredients:';
CODE_SYM: 'Directions:';
RETURN: 'Serve';

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
PRINT: [Cc]'heck';

IS: 'is';
TRUE: 'done';
NOT: 'not';
GT: 'more than';
LT: 'less than';
EQ: 'as much as';


INC: [Bb]'ak'('e'|'ing');
DEC: [Cc]'chill'('e'|'ing');

WS: [ \t]+ -> skip ; 
NEWLINE : '\r'? '\n' -> skip;
COMMENT: ('(' .* ')') -> skip;


IDENTIFIER: [a-zA-Z]+;
INTEGER: [0-9]+;