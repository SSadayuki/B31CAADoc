#ifndef CATISPPActivityTypeFactory_H
#define CATISPPActivityTypeFactory_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATISPPActivityType_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPActivityTypeFactory ;
#else
extern "C" const IID IID_CATISPPActivityTypeFactory ;
#endif

/**
* Interface to create new Activity Types.
**/
class ExportedByProcessInterfaces CATISPPActivityTypeFactory : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /**
    *	Creates a new Activity Type from a Super Type.
    *   @param iNewTypeName
    *	<tt> Name of the new type of Activity </tt>    
    *   @param iSuperTypeName
    *	<tt> Name of the super type from which this new type must inherit </tt> 
    *   @return
    * 	  Handler on the newly created Activity Type
    **/
    virtual CATISPPActivityType_var 	CreateActivityType(const CATUnicodeString & iNewTypeName,
								   const CATUnicodeString & iSuperTypeName = "") const = 0 ;

    /**
    *	Creates a new Activity Type from a Super Type.
    *   @param iNewTypeName
    *	<tt> Name of the new type of Activity </tt>    
    *   @param iSuperType
    *	<tt> Handler of the super type from which this new type must inherit </tt> 
    *   @return
    * 	  Handler on the newly created Activity Type
    **/
    virtual CATISPPActivityType_var 	CreateActivityType(const CATUnicodeString & iNewTypeName,
								   const CATISPPActivityType_var & iSuperType ) const = 0 ;

};

CATDeclareHandler( CATISPPActivityTypeFactory, CATBaseUnknown) ;

#endif







