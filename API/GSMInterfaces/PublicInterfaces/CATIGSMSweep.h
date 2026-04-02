#ifndef CATIGSMSweep_H
#define CATIGSMSweep_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATGSMSweepDef.h"

class CATISpecObject_var;
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMSweep;
#else
extern "C" const IID IID_CATIGSMSweep;
#endif

/**
 * Interface to sweep definition feature. 
 * <b>Role</b>: Allows you to access common data for sweeps
 * Sweep types:<br> 
 * <br><b>Legal values </b>: 
 * <br><tt>  SweepUnspec   = 0</tt>    
 * <br><tt>  SweepSegment  = 1</tt>    
 * <br><tt>  SweepCircle   = 2</tt>    
 * <br><tt>  SweepConic    = 3</tt>    
 */
#define CATGSMWFSweepUnspec				0
#define CATGSMWFSweepSegment			1
#define CATGSMWFSweepCircle				2
#define CATGSMWFSweepConic				3

class ExportedByCATGitInterfaces CATIGSMSweep : public CATBaseUnknown
{

   CATDeclareInterface;

 public: 

  /**
   * Gets the list of cut points on the master guide (even number of elements).
   * These points define zones to be kept on the final swept surface.
   *   @param oPtsList
   *      Cut points list.
   */
   virtual HRESULT GetCutPoints(CATListValCATISpecObject_var & oPtsList) = 0;
  /**
   * Sets two cut points on the master guide. These points define a zone to be kept
   * on the final swept surface.
   *   @param iPt1
   *      First / start cut point.
   *   @param iPt2
   *      Second / end cut point.
   */
   virtual HRESULT AddCutPoints(const CATISpecObject_var & iPt1, const CATISpecObject_var & iPt2) = 0;
  /**
   * Removes all cut points.
   */
   virtual HRESULT RemoveAllCutPoints() = 0;


  /**
   * Gets type of Sweep.
   *   @param oT
   *      Sweep type 
   */
   virtual void GetSweepType(int & oT) = 0;
  /**
   * Sets type of Sweep.
   *   @param iT
   *      Sweep type 
   * @see CATIGSMFactory#CreateSweepType
   */
   virtual void SetSweepType(const int iT) = 0;

	/**
	* Gets the list of filling points on the master guide (even number of elements).
	* These points define zones to be filled on the final swept surface.
	*   @param oPtsList
	*      Fill points list.
	*/
	virtual HRESULT GetFillPoints(CATListValCATISpecObject_var & oPtsList) = 0;
	/**
	* Sets two cut points on the master guide. These points define a zone to be filled
	* on the final swept surface.
	*   @param iPt1
	*      First / start fill point.
	*   @param iPt2
	*      Second / end fill point.
	*/
	virtual HRESULT AddFillPoints(const CATISpecObject_var & iPt1, const CATISpecObject_var & iPt2) = 0;
	/**
	* Removes all fill points.
	*/
	virtual HRESULT RemoveAllFillPoints() = 0;
	/**
	* Removes a fill point.
	*   @param iPt1
	*      First fill point to remove.
	*   @param iPt2
	*      Second fill point to remove.
	*/
	virtual HRESULT RemoveFillPoints(const CATISpecObject_var & iPt1, const CATISpecObject_var & iPt2) = 0;

	/**
	* Sets the setback value of the twisted areas (in percentage of the guide length (from 0 to 100%).
	*   @param iValue
	*      Setback value.
	*/
	virtual HRESULT SetSetbackValue(double iValue) = 0;

	/**
	* Gets the setback value of the twisted areas (in percentage of the guide length (from 0 to 100%).
	*   @param oValue
	*      Setback value.
	*/
	virtual HRESULT GetSetbackValue(double &oValue) = 0;

	/**
	* Sets the fill twisted areas mode.
	*   @param iMode
	*		Fill mode.
	* @see CATGSMSweepFillMode
	*/
	virtual HRESULT SetFillTwistedAreas(CATGSMSweepFillMode iMode) = 0;

	/**
	* Gets the fill twisted areas mode.
	*   @param oMode
	*		Fill mode.
	* @see CATGSMSweepFillMode
	*/
	virtual HRESULT GetFillTwistedAreas(CATGSMSweepFillMode &oMode)  = 0;

	/**
	* Sets the management mode of C0 vertices as twisted areas.
	*   @param ibC0Mode
	*		TRUE : C0 vertices are managed as twisted areas
	*		FALSE : C0 vertices are not managed as twisted areas
	*/
	virtual HRESULT SetC0VerticesMode(const CATBoolean &ibC0Mode) = 0;

	/**
	* Gets the management mode of C0 vertices as twisted areas.
	*   @param obC0Mode
	*		TRUE : C0 vertices are managed as twisted areas
	*		FALSE : C0 vertices are not managed as twisted areas
	*/
	virtual HRESULT GetC0VerticesMode(CATBoolean &obC0Mode) = 0;

};

CATDeclareHandler (CATIGSMSweep, CATBaseUnknown);

#endif // CATIGSMSweep_H
