#ifndef CATISPPItem_H
#define CATISPPItem_H
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPItem ;
#else
extern "C" const IID IID_CATISPPItem ;
#endif

class CATISPPActivityRoot_var;

/**
* Interface to be implemented by every object supposed to be managed by an activity.
*/


class ExportedByProcessInterfaces CATISPPItem : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /**
    *	Returns the type of the Item as a character string containing the type name.
    */
    virtual CATUnicodeString		GetType() const = 0 ;

    /**
    *	Tests the type of a specific Item.
    *	@return
    *		<dt><tt>TRUE</tt>		<dd>when the item is of type or of sub-type of iTypeName.
    *		<dt><tt>FALSE</tt>		<dd>when the item is NOT of type or of sub-type of iTypeName.
    */

    virtual CATBoolean			IsSubTypeOf(const CATUnicodeString& iTypeName) = 0 ;

    
    /**
    *	Returns the Label (external user name) of an Activity.
    *   A default Label is given to an Activity as it is created.    
    */
    virtual CATUnicodeString 		GetLabel() const = 0 ;


    /**
    *	Tests if the item is assigned in the specified process.
    *	@return
    *		<dt><tt>TRUE</tt>		<dd>when the Activity is of type or of sub-type of iProcess.
    *		<dt><tt>FALSE</tt>		<dd>when the Activity is NOT of type or of sub-type of iProcess.
    */

    virtual CATBoolean			IsAssigned(const CATISPPActivityRoot_var iProcess) const = 0 ;




};

CATDeclareHandler( CATISPPItem, CATBaseUnknown) ;

#endif







