// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
//
// CATICkeTextSheet.h:
//
//=============================================================================
// Usage Notes:
//
// See below
//
// 
//
//
//=============================================================================
// 08/06/98   Creation                                   T. Videcoq
//=============================================================================

/** 
* @CAA2Level L1
* @CAA2Usage U3 
*/


/**
 * This interface is an encapsulation of an array of arrays (a sheet) <br>
 * of strings contained in a file <br>
 * The file has to be a tabulated text file. Its format has to be<br>
 * string1 (tab) string2 etc <br>
 * (n lines) <br>
 * stringn (tab) stringn+1 etc <br>
 * Empty strings are allowed, but not in the first row because the number of <br>
 * columns is computed using the first row, except if you use the forceWidth <br>
 * argument of the UpdateLocalCopy method (ancestor CATICkeSheet interface <br>
 * method)<br><br>
 * To create a CATICkeTextSheet, use the CATICkeParmFactory::CreateSheet method<br>
 * with a text file path as argument
 * @see CATIDesignTable
 * @see CATICkeSheet
*/

#ifndef CATICkeTextSheet_H
#define CATICkeTextSheet_H

#include "KnowledgeItf.h"
#include "CATICkeSheet.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeTextSheet;
#else
extern "C" const IID IID_CATICkeTextSheet;
#endif

class ExportedByKnowledgeItf CATICkeTextSheet : public CATICkeSheet
{
	CATDeclareInterface;
public:
	/**
	* This methods adds a row in the text file.
	* For vertical sheets, this method is much more effective than several calls to SetCell
	* @param row
	* the list of strings to add at the end of the file.
	* @param init
	* opens the file if equal to CATCke::True
	* @param save
	* saves the file if equal to CATCke::True
	* @return
	* CATCke::True if the operations succeeds, CATCke::False else
	*/
	virtual CATCke::Boolean AddRow(CATListOfCATUnicodeString &row, CATCke::Boolean init, CATCke::Boolean save) = 0;
};
CATDeclareHandler(CATICkeTextSheet,CATICkeSheet);

#endif
