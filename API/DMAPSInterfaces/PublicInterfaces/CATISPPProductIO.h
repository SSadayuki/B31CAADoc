/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATISPPProductIO :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Nov. 97   Creation                                   P. Motte
//=============================================================================
#ifndef CATISPPProductIO_H
#define CATISPPProductIO_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATUnicodeString.h"
#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"

class CATISPPItem_var ;
class CATISPPAbstractActivity_var ;
class CATISPPProductIO_var ;
class CATISPPProductFlow_var ;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPProductIO ;
#else
extern "C" const IID IID_CATISPPProductIO ;
#endif

/**
* Interface CATISPPProductIO :
**/

class ExportedByProcessInterfaces CATISPPProductIO : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /**
    *	GetProductInstance() :
    *	Cette methode permet de recuperer l'instance portée par le ProductIO.
    **/
    virtual CATISPPItem_var	GetProductInstance() const = 0 ;
    virtual void			SetProductInstance(const CATISPPItem_var & iItem) = 0 ;
    virtual CATISPPItem_var	GetDefaultItem() const = 0 ;
    virtual void			SetDefaultItem(const CATISPPItem_var & iItem) = 0 ;

    /**
    *	Creation d un Product Flow vers (ou en provenance) d un autre ProductIO
    **/
    virtual void				LinkTo(const CATISPPProductIO_var & iProductIO) = 0 ;

    /**
    *	Recuperation du Product Flow associe 
    **/
    virtual CATListValCATBaseUnknown_var*		GetProductFlow() const = 0 ;

    /**
    *	Recuperation de l'activite le long du Product Flow associe 
    **/
//    virtual CATISPPAbstractActivity_var	GetActivityAlongFlow() const = 0 ;
    virtual CATListValCATBaseUnknown_var*	GetProductIOAlongFlow() const = 0 ;

    /**
    *	Recuperation de l'activite associee 
    **/
    virtual CATISPPAbstractActivity_var	GetActivity() const = 0 ;
	/**
    *	This method allows to set the Label (external user name) of an ProductIO to iLabel.
    *   The Label of an ProductIO does not need to be unique across a Process document.
    *   A default Label is given to an ProductIO as it is created.
    **/
    virtual void SetLabel(const CATUnicodeString& iLabel) = 0 ;
    
    /**
    *	This method returns the Label (external user name) of an ProductIO.
    *   A default Label is given to an ProductIO as it is created.    
    **/
    virtual CATUnicodeString GetLabel() const = 0 ;

};
CATDeclareHandler( CATISPPProductIO, CATBaseUnknown) ;
#endif







