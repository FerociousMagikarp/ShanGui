#pragma once

#include <unordered_map>
#include <string>
#include "token.h"

class Lexer
{
    public:
        Lexer();
        ~Lexer() = default;
        Lexer(const Lexer&) = delete;
        Lexer(Lexer&&) = delete;
        Lexer& operator= (const Lexer&) = delete;
        Lexer& operator= (Lexer&&) = delete;

    private:
        std::unordered_map<std::string, Token> m_word_map;
};
