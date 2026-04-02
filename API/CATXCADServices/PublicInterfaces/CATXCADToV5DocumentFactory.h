// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#ifndef CATXCADToV5DocFactory_h
#define CATXCADToV5DocFactory_h

#include "CATXCADToV5DocFactory.h"
#include "CATUnicodeString.h"
#include "CATIExchangeOutputDocument.h"

/**
 * Returns the @href CATIExchangeOutputDocument object which corresponds to a XCAD output Document 
 * Converter Dedicated to import data into V5 
 * @param iDocumentType
 * The type of document to import 
 * <br><b>Legal values</b>:
 * <tt>"MultiCADProducStructure"</tt> use this value to get an OutputDocument 
 * dedicated to Create A V5 product Structure leveraged to MultiCAD insert requirements
 * <tt>"V5CATPart"</tt> use this value to get an OutputDocument dedicated to V5 CATParts creation
 * <tt>"V5cgr"</tt> use this value to get an OutputDocument dedicated to V5 cgrs creation
 * @param oXCADtoV5DocumentTranslator
 * The OutputDocument to use as translator 
 */
extern "C" ExportedByCATXCADToV5DocFactory HRESULT CreateCATXCADToV5Document(CATUnicodeString iDocumentType, 
	CATIExchangeOutputDocument_var& oXCADtoV5DocumentTranslator);

#endif // CATXCADtoV5ProductDocumentFactory_h
