# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SHREEPARNA PAUL

*INTERN ID*: CT04DL1292

*DOMAIN*: C PROGRAMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

**This repository features a compact yet powerful C lexical analyzer crafted entirely in ANSI C (C99-compatible), designed to demonstrate the first stage of compiler construction: tokenization. At its core, the analyzer reads an input C source file character by character using fgetc(), building tokens in a temporary buffer. It then classifies each token into one of three categories: keywords, identifiers, or operators. Keywords are recognized through comparison against a static array of C reserved words, while simple single-character operators (+, -, *, /, =, %) are detected using lightweight checks with strchr(). Whenever a token is correctly formed, the program prints both the token and its type, clearly illustrating the inner workings of lexical parsing.

Because it deliberately avoids complex external tools or libraries, this project is extremely portable and easy to build: just compile it with a standard C compiler like GCC or Clang. A minimal Makefile is included for convenience—running make produces the executable, and you can analyze a C file using ./lexical_analyzer input.c. There's no external dependency, so it runs seamlessly across Unix-like environments, and on Windows with C compiler support. You can edit the code using any text editor or IDE—VS Code, Vim, Code::Blocks, and CLion are all excellent options. This portability makes it an ideal teaching aid or a prototype for more advanced system tools.

Conceptually, this analyzer mirrors the scanning mechanisms found in more advanced tools such as Lex/Flex. However, unlike those token generators, this implementation is manually written using fundamental library functions—showing how finite-state machine logic can be implemented via straightforward C code 
github.com
. As a result, it provides learners with clear insight into how tokenization transitions operate, how whitespace and backtracking are handled, and how lexical boundaries are detected.

While the current version only supports single-character operators and alphanumeric identifiers, its design allows for easy extension. For those interested in evolving this into a full-featured lexer, consider adding support for multi-character operators (==, <=, ++, &&), numeric literals (integer, floating-point, hexadecimal), string and character literals, and comment skipping (// and /* … */). You might also include punctuation tokens such as ;, ,, (), {}, and [], as well as handle preprocessor directives like #include and #define. These enhancements align with how educational lexical analysis projects develop in academic settings .

Beyond its learning value, this tool serves as a practical starting point for building custom pre-processors, lightweight static analyzers, or code-formatting utilities. By expanding on the token stream it generates, you can feed a parser (e.g., written with Bison or Lemon) and progress toward a full compiler front end. Alternatively, adding a symbol-table could transform it into a basic context-aware analyzer—similar to how more sophisticated compilers break down language structure .

To summarize, this project offers a clean, dependency-free snapshot of lexical analysis that is both educational and extensible. Beginners gain foundational exposure to compiler front ends, while intermediate developers can leverage it for experimentation or prototyping. Contributions and enhancements are welcome—fork the repo, extend its capabilities, and commit your updates. Clone the repository, build with make, analyze a C file, and take your first step into compiler design!**




