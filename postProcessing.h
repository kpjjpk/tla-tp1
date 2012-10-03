#ifndef postProcessing_h
#define postProcessing_h

#include "utils.h"
#include "LinkedList.h"
#include "Grammar.h"

typedef struct relation{	
	char reachable;
	Element elem;
}relation;

typedef relation * Relation;
typedef Relation * RelationMatrix;

typedef enum {
	OK=0,INVALID_DIST,INVALID_FROM,INVALID_NONTERMINAL,INVALID_TERMINAL,DIST_NOT_USED
} ErrorCodes;

RelationMatrix generateRelationMatrix(Grammar g, int n);//n is the size of production
void findReachableProductions(RelationMatrix t,int n);//uses Warshall's algorithm
void removeUnreachableProductions(Grammar g);
ErrorCodes validate(Grammar g);

#endif
