#ifndef CATKWEErrorSeverity_h
#define CATKWEErrorSeverity_h

// COPYRIGHT DASSAULT SYSTEMES 2002
/** 
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "KnowledgeItf.h"

/**
* Class containing the definition of a Knowledge error message.
*/
class ExportedByKnowledgeItf CATKWEErrorSeverity 
{
	public:

		/**
		* Severity Level of a message thrown during the evaluation or the parse of a knowlegde Object.
		* It can be formula, rule, check, optimization, set of equations ...
		* @param Information
		*	The message is an information. The process will go on.
		* @param Warning
		*	The message is a warning. The process will go on but the result has to be taken with caution.
		* @param Error
		*	The message is an error. The process is stopped.
		*/
		enum Severity { Information, Warning, Error };

	private:
		CATKWEErrorSeverity();

};
#endif
