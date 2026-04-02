/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997

#ifndef CATISPPContainer_H
#define CATISPPContainer_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIContainer_var ;
class CATISPPActivityType_var ;
class CATListValCATBaseUnknown_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPContainer ;
#else
extern "C" const IID IID_CATISPPContainer ;
#endif

/** @nodoc
  * Deprecated R6. Should not be used.
  */
#define ActivityTypeRoot CATUnicodeString() 

/** @nodoc
  * Deprecated R6. Should not be used.
  */
enum CATSPPLibrarieKind { Applicative, User, All } ;

/**
* Interface to manage process container.
*/

class ExportedByProcessInterfaces CATISPPContainer : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /** @nodoc
	  * Recuperation des informations concernant la librairie
	  */
    virtual CATIContainer_var			GetLibrary() const = 0 ;
    
    /** @nodoc */
	virtual CATISPPActivityType_var		GetActivityType(const CATUnicodeString & iTypeName = ActivityTypeRoot) const = 0 ;
    
	/** @nodoc */
	virtual CATListValCATBaseUnknown_var*	GetAllActivityType(CATSPPLibrarieKind LibKind = All) const = 0 ;
//    virtual CATISPPActivityType_var		GetLogicalType() const = 0 ;
//    virtual CATListValCATBaseUnknown_var*	GetAllLogicalType(const int depth = 1) const = 0 ;

};
// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler( CATISPPContainer, CATBaseUnknown) ;

#endif







