grammar Recipe;
@header {
#include "../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program: function (function)*;
function locals [ TypeSpec *type = nullptr ]: header mainBlock (returnCall)?;
mainBlock: block;
block: data? code?;
header: HEADER_SYM dtype=(PARAM_INT|PARAM_FLOAT) IDENTIFIER ('with' params)?;
data: DECLARATION_SYM declList;

//Declaration section
declList: (decl)+; 
decl locals [ TypeSpec *type = nullptr ]: '-' number dtype=(INT_TYPE | FLOAT_TYPE | ARR_FLOAT_TYPE| ARR_INT_TYPE) OF IDENTIFIER;

//Code section
code: CODE_SYM codeLineList?;
codeLineList: (codeLine)+;
codeLine: INTEGER '.' statementList PERIOD;
statementList: statement (THEN statement)*;
statement:  
        | addSubStm 
        | mulStm
        | divStm
        | incDecStm
        | whileStm 
        | untilStm 
        | functionCall
        | ifStm
        | printStm
        | printCharStm
        | assignmentStm
        ;

returnCall: INTEGER'.' returnStm;
assignmentStm: ASSIGN variable 'as' variable;

//function
functionCall: CALL IDENTIFIER 'for' variable ('with' pass)?;
pass: variable((COMMA | (COMMA? AND)) variable)*;
params: param ((COMMA | (COMMA? AND)) param)*;
param locals [ TypeSpec *type = nullptr ]: dtype=(PARAM_INT|PARAM_FLOAT) IDENTIFIER;
returnStm: RETURN variable;

//arithmetics 
addSubStm: op=(ADD | SUB) variable ((COMMA | (COMMA? AND)) variable)* DEST variable;
mulStm: MUL variable ((COMMA | (COMMA? AND)) variable)* DEST variable;
divStm: DIV variable ('and again'? DEST 'size of'? (variable | number))+;
incDecStm: op=(INC | DEC) variable ('for' number ('min' | 'mins'))?;

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
CALL: 'See recipe';
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

ASSIGN: [Tt]'reat''ing'?;

IF: [Ii]'f';
THEN: 'then';
ELSE: 'otherwise';
WHILE: [Ww]'hile';
WHILE_DO: 'keep';

REPEAT: [Rr]'epeat''edly'?;
UNTIL: 'until';



ADD: [Aa]'dd''ing'?;
SUB: [Rr] 'emov'('e'|'ing');
MUL: [Mm]'ix''ing'?;
DIV: [Dd]'ivid'('e'|'ing');
STEP_SYM: 'step';
AND: 'and';
OR: 'or';
DEST: ('in''to'? )| 'to' | 'from';
PRINT: [Cc]'heck''ing'?'on'?;
PRINT_CHAR: [Ww]'eight''ing'?;

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

PARAM_INT: [Ff]'ew';
PARAM_FLOAT: [Ss]'ome';