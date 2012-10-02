#ifndef tp_h
#define tp_h

#include "utils.h"
#include "LinkedList.h"
#include "Grammar.h"
#include "postProcessing.h"

typedef enum {
	OK=0,INVALID_DIST,INVALID_FROM,INVALID_NONTERMINAL,INVALID_TERMINAL,DIST_NOT_USED
} ErrorCodes;

void errorFound(ErrorCodes err);
ErrorCodes validate(Grammar g);

#endif
