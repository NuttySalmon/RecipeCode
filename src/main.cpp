#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "../antlr/RecipeLexer.h"
#include "../antlr/RecipeParser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int argc, const char *args[])
{
    ifstream ins;

    // Create the input stream.
    ins.open(args[1]);
    ANTLRInputStream input(ins);

    // Create a lexer which scans the input stream
    // to create a token stream.
    RecipeLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    // Create a parser which parses the token stream
    // to create a parse tree.
    RecipeParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);

    Pass2Visitor *pass2 = new Pass2Visitor();
    pass2->visit(tree);

    return 0;
}