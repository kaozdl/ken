
#ifndef PYLANG_SYNTAX
#define PYLANG_SYNTAX

char *PYTHON_HL_extensions[] = { ".py", NULL };
char *PYTHON_HL_keywords[] = {
  "if", "while", "for", "break", "return", "else",
  "elif", "try", "except", "in", "class", "lambda",

  "int|","long|","double|","float|","str|","unsigned|","signed|",
  "None|","True|","False|", NULL
};
#endif
