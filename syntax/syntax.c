#ifndef SYNTAX_FILES
#define SYNTAX_FILES

#include "./c_lang_syntax.c"
#include "./python_lang_syntax.c"

struct editorSyntax HLDB[] = {
  {
    "C / C++",
    C_HL_extensions,
    C_HL_keywords,
    "//",
    HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
  },
  {
    "Python",
    PYTHON_HL_extensions,
    PYTHON_HL_keywords,
    "#",
    HL_HIGHLIGHT_NUMBERS | HL_HIGHLIGHT_STRINGS
  },
};

#endif
