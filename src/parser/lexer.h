#include <string>
#include <vector>

enum TokenId
{
    // Keywords
    TK_BREAK,
    TK_CASE,
    TK_CATCH,
    TK_CLASS,
    TK_CONST,
    TK_CONTINUE,
    TK_DEBUGGER,
    TK_DEFAULT,
    TK_DELETE,
    TK_DO,
    TK_ELSE,
    TK_EXPORT,
    TK_EXTENDS,
    TK_FINALLY,
    TK_FOR,
    TK_FUNCTION,
    TK_IF,
    TK_IMPORT,
    TK_IN,
    TK_INSTANCEOF,
    TK_NEW,
    TK_RETURN,
    TK_SUPER,
    TK_SWITCH,
    TK_THIS,
    TK_THROW,
    TK_TRY,
    TK_TYPEOF,
    TK_VAR,
    TK_VOID,
    TK_WHILE,
    TK_WITH,
    TK_YIELD,

    // Punctuators
    TK_L_BRACE,
    TK_R_BRACE,
    TK_L_PAREN,
    TK_R_PAREN,
    TK_L_BRACKET,
    TK_R_BRACKET
};

typedef struct Token
{
    TokenId id;
} Token;

class Lexer
{
public:
    Lexer() {}

    void Run(const std::string &);

private:
    static const char *_kKeywords[];
    static const char *_kFutureReservedWords[];

    std::vector<Token> _Tokens;
};
