// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U6
  */

//===================================================================
//
// CATIMldComponent.h
// Define the CATIMldComponent interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================

#ifndef CATIMldComponent_H
#define CATIMldComponent_H

#include "CATMoldItfCPP.h"
#include "CATInterfaceObject.h"

#include "CATUnicodeString.h" 
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMoldItfCPP IID IID_CATIMldComponent ;
#else
extern "C" const IID IID_CATIMldComponent ;
#endif

//------------------------------------------------------------------

/**
 * Interface to create feature component 
 * <br><b>Role</b>:
 * This inferface is used to create new feature component that have the same 
 * behaviour that all the MoldDesign feature component.
 * To do that you have to derive from this interface.
 */
class ExportedByCATMoldItfCPP CATIMldComponent: public CATInterfaceObject
{
    /** @nodoc */
	CATDeclareInterface;

  public:

    /**
     * Returns the instance of the product associated to the Mold component.
     */
		virtual CATISpecObject_var GetProductInstance() const = 0;

    /**
	 * @deprecated V5R18 
     * Returns the instance of the plate from which the mold component starts.
     */
		virtual CATISpecObject_var GetFromPlate() const = 0;

    /**
 	 * @deprecated V5R18 
	 * Returns the instance of the plate to which the mold component ends.
     */
		virtual CATISpecObject_var GetToPlate() const = 0;

    /**
     * Returns the name of the icon that is associated to the mold component.
     */
		virtual CATUnicodeString GetIcon() const = 0;
    /**
     * Returns the list of plate or components the mold component drills.
     */	 
	 	virtual CATListValCATISpecObject_var GetDrilledList() const = 0;

	/**
     * Defines the instance of the plate from which the mold component will start
	 * @param iFromPlate
	 *		Instance of the From Mold Plate
     */
		virtual void SetFromPlate(const CATISpecObject_var iFromPlate) = 0;

    /**
     * Defines the instance of the plate to which the mold component will end
	 * @param iToPlate
	 *		Instance of the To Mold Plate
     */
		virtual void SetToPlate(const CATISpecObject_var iToPlate) = 0;

    /**
     * Defines the name of the icon that will be associated to the mold component
	 * @param iStrIcon
	 *		The name of the icon that is associated to the mold component.
     */
		virtual void SetIcon(const CATUnicodeString iStrIcon) = 0;

    /**
     * Defines the list of plate or components the mold component drills.
     */	 
	 	virtual void SetDrilledList	(CATListValCATISpecObject_var iDrilledList) = 0;
};

//------------------------------------------------------------------

/** @nodoc */
CATDeclareHandler( CATIMldComponent, CATInterfaceObject );

#endif
