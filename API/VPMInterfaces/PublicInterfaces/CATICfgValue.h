#ifndef CATICfgValue_H
#define CATICfgValue_H

// COPYRIGHT DASSAULT SYSTEMES 1998

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATICfgInterval.h"
#include "CATIAV5Level.h"

class CATUnicodeString;
class CATTime;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgValue ;
#else
extern "C" const IID IID_CATICfgValue ;
#endif

class ExportedByGUIDVPMInterfaces CATICfgValue: public CATBaseUnknown
{
    CATDeclareInterface;
  
public:
 
	 
/**
 * Dump a String  in STDOUT, for debug purpose.
 */ 
	 virtual void Dump() const = 0;
#if defined(CATIAV5R10)
/** @nodoc */
     virtual void GetValue(int &oVal) const = 0;
/** @nodoc */
     virtual void GetValue(CATTime &oVal) const = 0;
/** @nodoc */
     virtual CATICfgInterval::Type GetType() const = 0;
#endif
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgValue, CATBaseUnknown);
//
#endif
