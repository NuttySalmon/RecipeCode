grammar Recipe;
@header {
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : header mainBlock;
mainBlock: block;
block: data code?;
header  : HEADER_SYM IDENTIFIER call?;
data: DECLARATION_SYM declList;

//Declaration section
declList: (decl)+; 
decl: '-' number dtype=(INT_TYPE | FLOAT_TYPE | ARR_FLOAT_TYPE| ARR_INT_TYPE) OF IDENTIFIER;

//Code section
code: CODE_SYM codeLineList?;
codeLineList: (codeLine)+;
codeLine: INTEGER '.' statementList PERIOD;
statementList: statement ((THEN) statement)*;
statement:                                                                   # empty
        | ADD IDENTIFIER (AND IDENTIFIER)* DEST IDENTIFIER                   # add
        | SUB variable (AND variable)* DEST variable                         # sub
        | MULT variable (AND variable)* DEST variable                        # mult
        | DIV variable SRC ('size of' variable | INTEGER)                    # div
        | INC variable ('for' variable 'min' | 'mins')?                      # inc
        | DEC variable ('for' variable 'min' | 'mins')?                      # dec
        | WHILE conditionList COMMA WHILE_DO statementList                 # while
        | REPEAT statementList UNTIL condition                              # repeat
        | FUNCTION IDENTIFIER 'for' variable call?                           # func_call
        | IF condition COMMA statementList (COMMA ELSE statementList)?     # if
        | PRINT variable (AND variable)*                                     # print
        | RETURN IDENTIFIER                                                  # return
        ;

//function
call: 'with' variable ((','|','?'and') variable)*;

//Logic expressions
conditionList: condition ((AND | OR) condition)*;
condition: variable IS NOT? (comp=(GT | LT | EQ) (variable| number) | TRUE);

number locals [ TypeSpec *type = nullptr ]
        :INTEGER                   # int 
        | INTEGER '.' INTEGER   # float;
variable: (INTEGER ARRAY_ELEM OF)? IDENTIFIER;

//Keywords
PERIOD: '.';
COMMA: ',';
FUNCTION: 'See recipe';
INT_TYPE: 'kg' | 'L';
FLOAT_TYPE: 'g' | 'mL';
ARR_INT_TYPE: 'pieces';
ARR_FLOAT_TYPE: 'packs';
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
DEC: [Cc]'hill''ing'?;
WS: [ \t]+ -> skip ; 
NEWLINE : '\r'? '\n' -> skip;
COMMENT: '(' .*? ')' -> skip;

IDENTIFIER: [a-zA-Z]+;
INTEGER: [0-9]+;
