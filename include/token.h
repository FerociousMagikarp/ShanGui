#pragma once

enum class Token
{
    Eof,                         // 结束符

    // ================================================================
    // 主要
    // ================================================================
    Identifier,                  // 标识符，变量名、类名等
    Number,                      // 整型数字常量
    NumberFloat,                 // 浮点数字常量
    String,                      // 字符串
    Char,                        // 字符

    // ================================================================
    // 关键字
    // ================================================================
    // 包管理
    KeywordPackage,              // 包名
    KeywordImport,               // 导入

    // 类型
    KeywordBool,
    KeywordByte,
    KeywordChar,
    KeywordInt,
    KeywordUInt,
    KeywordFloat,
    KeywordUFloat,

    KeywordInt8,
    KeywordInt16,
    KeywordInt32,
    KeywordInt64,
    KeywordUInt8,
    KeywordUInt16,
    KeywordUInt32,
    KeywordUInt64,
    KeywordFloat16,
    KeywordFloat32,
    KeywordFloat64,
    KeywordUFloat16,
    KeywordUFloat32,
    KeywordUFloat64,
    KeywordChar32,
    KeywordVoid,
    KeywordAuto,

    // 数据
    KeywordTrue,
    KeywordFalse,
    KeywordNull,

    KeywordReturn,

    // ================================================================
    // 操作符
    // ================================================================
    // 括号
    LeftParen,                   // (
    RightParen,                  // )
    LeftBracket,                 // [
    RightBracket,                // ]
    LeftBrace,                   // {
    RightBrace,                  // }
    LeftComment,                 // /*
    RightComment,                // */

    // 操作符
    // 四则
    OperatorPlus,                // +
    OperatorMinus,               // -
    OperatorStar,                // *
    OperatorSlash,               // /
    OperatorPercentage,          // %

    // 逻辑
    OperatorGreater,             // >
    OperatorGreaterEqual,        // >=
    OperatorLess,                // <
    OperatorLessEqual,           // <=
    OperatorEqual,               // ==
    OperatorNotEqual,            // !=
    OperatorAnd,                 // &&
    OperatorOr,                  // ||
    OperatorNot,                 // !

    // 赋值
    OperatorAssign,              // =
    OperatorAssignPlus,          // +=
    OperatorAssignMinus,         // -=
    OperatorAssignMulti,         // *=
    OperatorAssignDivi,          // /=
    OperatorAssignResi,          // %=

    // 控制
    OperatorDot,                 // .
    OperatorComma,               // ,
    OperatorSemicolon,           // ;
    OperatorDoubleQuote,         // "
    OperatorSingleQuote,         // '
    OperatorEmptyString,         // ""
    OperatorComment,             // //
};
