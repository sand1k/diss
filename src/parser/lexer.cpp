#include "lexer.h"

const char *_kKeywords[] =
{
    "break",
    "case",
    "catch",
    "class",
    "const",
    "continue",
    "debugger",
    "default",
    "delete",
    "do",
    "else",
    "export",
    "extends",
    "finally",
    "for",
    "function",
    "if",
    "import",
    "in",
    "instanceof",
    "new",
    "return",
    "super",
    "switch",
    "this",
    "throw",
    "try",
    "typeof",
    "var",
    "void",
    "while",
    "with",
    "yield"
};

const char *_kFutureReservedWords[] = 
{
    "enum",
    "await"
};

void Lexer::Run(const std::string &source)
{

}
