//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//==============================================================================
//
// CATICciTape :
//   Interface to manage the composites ply tape
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciTape (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciTape_H
#define CATICciTape_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciPhysicalEntity.h"
#include "CATISpecObject.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciTape;
#else
extern "C" const IID IID_CATICciTape ;
#endif

//------------------------------------------------------------------

/**
 * Interface to Tape.
 * <b>Role</b>: Allows to manage a Composites ply taper feature.
 */
class ExportedByCAACompositesItf CATICciTape: public CATICciPhysicalEntity
{
    CATDeclareInterface;
    
public:

   /**
   * Sets the geometry of the tape.
   * @param ispGeom
   * The geometry.
   */
   virtual HRESULT SetGeometry( CATIMmiMechanicalFeature_var ispGeom ) = 0;

   /**
   * Gets the geometry of the tape.
   * @param ospGeom
   * The geometry.
   */
   virtual HRESULT GetGeometry( CATIMmiMechanicalFeature_var &ospGeom ) = 0;

   /**
   * Sets the flatten geometry of the tape.
   * @param ispFGeom
   * The flatten geometry.
   */
   virtual HRESULT SetFlattenGeometry( CATIMmiMechanicalFeature_var ispFGeom ) = 0;

   /**
   * Gets the flatten geometry of the tape.
   * @param ospFGeom
   * The flatten geometry.
   */
   virtual HRESULT GetFlattenGeometry( CATIMmiMechanicalFeature_var &ospFGeom ) = 0;

   /**
   * Sets the width of the tape.
   * @param iWidth
   * The width
   */
   virtual HRESULT SetWidth( double iWidth ) = 0;

   /**
   * Gets the width of the tape.
   * @param oWidth
   * The width
   */
   virtual HRESULT GetWidth( double &oWidth ) = 0;

   /**
   * Sets the center line of the tape.
   * @param ispCLine
   * The center line.
   */
   virtual HRESULT SetCenterLine( CATIMmiMechanicalFeature_var ispCLine ) = 0;

   /**
   * Gets the center line of the tape.
   * @param ospCLine
   * The center line.
   */
   virtual HRESULT GetCenterLine( CATIMmiMechanicalFeature_var &ospCLine ) = 0;

   /**
   * Sets the Automatic/Manual flag tape. 
   * @param iFlag
   *     The flag tape. TRUE for Automatic and FALSE for Manual
   */
   virtual HRESULT SetMode( CATBoolean iFlag ) = 0;

   /**
   * Gets the Automatic/Manual flag tape.
   * @return
   *     Gets TRUE for Automatic and FALSE for Manual.
   */
   virtual CATBoolean IsAutomatic() = 0;

   /**
   * Sets Mode of the tape.
   * @param iMode
   *  The mode.
   */
   virtual HRESULT SetMode( CATUnicodeString iMode ) = 0;

   /**
   * Gets mode of the tape.
   * @param oMode
   *  The mode.
   */
   virtual HRESULT GetMode( CATUnicodeString &oMode ) = 0;

   /**
   * Sets side1 of the tape.
   * @param ispSide1
   * side1.
   */
   virtual HRESULT SetSide1( CATIMmiMechanicalFeature_var ispSide1 ) = 0;

   /**
   * Gets side1 of the tape.
   * @param ospSide1
   * side1.
   */
   virtual HRESULT GetSide1( CATIMmiMechanicalFeature_var &ospSide1 ) = 0;

   /**
   * Sets side2 of the tape.
   * @param ispSide2
   * side2.
   */
   virtual HRESULT SetSide2( CATIMmiMechanicalFeature_var ispSide2 ) = 0;

   /**
   * Gets side2 of the tape.
   * @param ospSide2
   * side2.
   */
   virtual HRESULT GetSide2( CATIMmiMechanicalFeature_var &ospSide2 ) = 0;

   
	//--------------------------------------------------------------------------------------------------
	//------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
	//--------------------------------------------------------------------------------------------------

	/**
	* @deprecated V5R26 
	* Use @see #SetGeometry(CATIMmiMechanicalFeature_var) method instead.
	* Sets the geometry of the tape.
	* @param ispGeom
	* The geometry.
	*/
	virtual HRESULT SetGeometry( CATISpecObject_var ispGeom ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetGeometry(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the geometry of the tape.
	* @param ospGeom
	* The geometry.
	*/
	virtual HRESULT GetGeometry( CATISpecObject_var &ospGeom ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetFlattenGeometry(CATIMmiMechanicalFeature_var) method instead.
	* Sets the flatten geometry of the tape.
	* @param ispFGeom
	* The flatten geometry.
	*/
	virtual HRESULT SetFlattenGeometry( CATISpecObject_var ispFGeom ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetFlattenGeometry(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the flatten geometry of the tape.
	* @param ospFGeom
	* The flatten geometry.
	*/
	virtual HRESULT GetFlattenGeometry( CATISpecObject_var &ospFGeom ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetCenterLine(CATIMmiMechanicalFeature_var) method instead.
	* Sets the center line of the tape.
	* @param ispCLine
	* The center line.
	*/
	virtual HRESULT SetCenterLine( CATISpecObject_var ispCLine ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetCenterLine(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the center line of the tape.
	* @param ospCLine
	* The center line.
	*/
	virtual HRESULT GetCenterLine( CATISpecObject_var &ospCLine ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetSide1(CATIMmiMechanicalFeature_var) method instead.
	* Sets side1 of the tape.
	* @param ispSide1
	* side1.
	*/
	virtual HRESULT SetSide1( CATISpecObject_var ispSide1 ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetSide1(CATIMmiMechanicalFeature_var&) method instead.
	* Gets side1 of the tape.
	* @param ospSide1
	* side1.
	*/
	virtual HRESULT GetSide1( CATISpecObject_var &ospSide1 ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetSide2(CATIMmiMechanicalFeature_var) method instead.
	* Sets side2 of the tape.
	* @param ispSide2
	* side2.
	*/
	virtual HRESULT SetSide2( CATISpecObject_var ispSide2 ) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetSide2(CATIMmiMechanicalFeature_var&) method instead.
	* Gets side2 of the tape.
	* @param ospSide2
	* side2.
	*/
	virtual HRESULT GetSide2( CATISpecObject_var &ospSide2 ) = 0;
};
CATDeclareHandler(CATICciTape, CATICciPhysicalEntity);

//------------------------------------------------------------------

#endif
