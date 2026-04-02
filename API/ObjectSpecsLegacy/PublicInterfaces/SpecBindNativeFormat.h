/* -*-c++-*- */
#ifndef SpecBindNativeFormat_H
#define SpecBindNativeFormat_H

// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "CATFormat.h"
#include "CP0SPEC.h"
#include "CATSystemOleContentFormat.h"

/**
* Defines a format type for CutCopyPaste.
* <b> Role: </b> must be done for each new session.
* @param iTypeName
*        name of the new kind of format.
* @param iLongName
*        description of the format.
*/
ExportedByCP0SPEC
const CATFormat*      SpecBindNativeFormat(const CATUnicodeString iTypeName, const char* iLongName = NULL);

/**
* @nodoc
* Ole Object Object Paste Management ( Format: "Embed Source" or OLE_EMBED_FORMAT);
*/
ExportedByCP0SPEC
const CATFormat*      SpecBindOleInsertionFormat(const CATUnicodeString type_name = "Embed Source");

#endif
