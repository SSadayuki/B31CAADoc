// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
// 
// CATISPPActivitySpecification: 
// Interface permettant de gerer les Items associe a une activite
//
//=============================================================================
// Usage Notes: 
// 	Les listes rendues par GetItems et GetModelPathItems sont 
// 	a detruire par l utilisateur.
// 
//
//=============================================================================
// Fev. 98 Creation					  P. Motte
// Jan  02 Modif Flag First Process Processes Item   gdu
//=============================================================================
#ifndef CATISPPActivitySpecification_H_
#define CATISPPActivitySpecification_H_

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//Monocodes V5Rn
#include "CATIAV5Level.h"

class CATISPPItem_var ;
class CATICkeParm_var ;
class CATISPPActivity_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPActivitySpecification ;
#else
extern "C" const IID IID_CATISPPActivitySpecification ;
#endif

/**
* <p> This interface is used to manage the association of Items (Parts, Welds, etc...)  to Activity Specifications
*
**/

class ExportedByProcessInterfaces CATISPPActivitySpecification: public CATBaseUnknown 
{
  
    CATDeclareInterface ;
    
  public:
  
  /**
   **/
    virtual CATICkeParm_var  	GetTargetState() = 0 ;
    virtual CATISPPItem_var	GetItem() = 0 ;

	virtual void	SetItem( const CATISPPItem_var &iItem) = 0 ;

    virtual CATISPPActivity_var GetActivity() = 0;
	
#ifdef CATIAV5R9
	// specify wether the Item is Assignment as default
	// or is a "First Porcess Processes Item" for the Activity
	// Assignment==0 Item assigned as usual
	// Assignment==1 Item procesed for the first time in the Process 
	virtual HRESULT SetAssignmentMode(const boolean IsFirstUseItem) = 0 ;
	virtual HRESULT GetAssignmentMode(boolean* IsFirstUseItem) = 0 ;
	virtual HRESULT SetOperator(const CATUnicodeString iOperator) = 0 ;
	virtual HRESULT GetOperator(CATUnicodeString* oOperator) = 0 ;


#endif
	
};
CATDeclareHandler( CATISPPActivitySpecification, CATBaseUnknown);
#endif











