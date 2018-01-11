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
    for (unsigned int i = 0; i < source.length(); i++) {
        char c = source[i];
        Token tk;

        switch (c)
        {
        case '{':
            tk.id = TK_L_BRACE;
            break;
        case '}':
            tk.id = TK_R_BRACE;
            break;
        case '(':
            tk.id = TK_L_PAREN;
            break;
        case ')':
            tk.id = TK_R_PAREN;
            break;
        case '[':
            tk.id = TK_L_BRACKET;
            break;
        case ']':
            tk.id = TK_R_BRACKET;
            break;
        case 'v':

        default:
            break;
        };

        _Tokens.push_back(tk);
    }
}
