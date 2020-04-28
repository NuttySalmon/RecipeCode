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
decl locals [ TypeSpec *type = nullptr ]: '-' number dtype=(INT_TYPE | FLOAT_TYPE | ARR_FLOAT_TYPE| ARR_INT_TYPE) OF IDENTIFIER;

//Code section
code: CODE_SYM codeLineList?;
codeLineList: (codeLine)+;
codeLine: INTEGER '.' statementList PERIOD;
statementList: statement ((THEN) statement)*;
statement:  
        | addStm 
        | subStm 
        | multStm
        | divStm
        | incStm
        | decStm
        | whileStm 
        | untilStm 
        | functionCall
        | ifStm
        | printStm
        | printCharStm
        | returnStm
        ;


//function
functionCall: FUNCTION IDENTIFIER 'for' variable call?;
call: 'with' variable ((COMMA | (COMMA? AND)) variable)*;
returnStm: RETURN variable;

//arithmetics 
addStm: ADD variable ((COMMA | (COMMA? AND)) variable)* DEST variable;
subStm: SUB variable ((COMMA | (COMMA? AND)) variable)* DEST variable;
multStm: MULT variable ((COMMA | (COMMA? AND)) variable)* DEST variable;
divStm: DIV variable SRC ('size of' variable | INTEGER);
incStm: INC variable ('for' number ('min' | 'mins'))?;
decStm: DEC variable ('for' number ('min' | 'mins'))?;


//Logic
ifStm: IF conditionList COMMA statementList (COMMA ELSE statementList)?;
whileStm: WHILE conditionList COMMA WHILE_DO statementList;
untilStm: REPEAT statementList UNTIL conditionList;
printStm: PRINT variable ((COMMA | (COMMA? AND)) variable)*;
printCharStm: PRINT_CHAR variable ((COMMA | (COMMA? AND)) variable)*;

//Logic expressions
conditionList: condition (andCond | orCond)*;
condition: operand IS NOT? ((comp=(GT | LT | EQ | GE | LE))? operand );
operand locals [ TypeSpec *type = nullptr ]: variable | constant;
constant: number | trueSym;
trueSym: TRUE_SYM;

andCond: AND condition ;
orCond: OR condition;

number locals [ TypeSpec *type = nullptr ]
        :INTEGER                   # int 
        | INTEGER '.' INTEGER   # float;
variable locals [ TypeSpec *type = nullptr ]: (INTEGER ARRAY_ELEM OF)? IDENTIFIER;


//Keywords
PERIOD: '.';
COMMA: ','(' '|NEWLINE);
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

REPEAT: [Rr]'epeat''edly'?;
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
PRINT: [Cc]'heck' ('on')?;
PRINT_CHAR: [Ww]'eight';

IS: 'is';
TRUE_SYM: 'done';
NOT: 'not';
GT: 'more than';
LT: 'less than';
EQ: 'as much as';
GE: 'more than or equal to';
LE: 'less than or equal to';


INC: [Bb]'ak'('e'|'ing');
DEC: [Cc]'hill''ing'?;
WS: [ \t]+ -> skip ; 
NEWLINE : '\r'? '\n' -> skip;
COMMENT: '(' .*? ')' -> skip;

IDENTIFIER: [a-zA-Z]+;
INTEGER: [0-9]+;
