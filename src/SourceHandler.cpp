#include "SourceHandler.hpp"
void SourceHandler ::nextch() {
  if (ch == '\0')
    return;
  if (ch == linelength) {
    linelength = 0, ;
    charpos = 0;
    minerrpos = 0;
    linelength++;
    startNewLine();
  }
}
