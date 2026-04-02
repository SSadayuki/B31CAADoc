//===================================================================
// COPYRIGHT Dassault Systemes 2000
//===================================================================
#ifndef CATISamEntityVisu_H
#define CATISamEntityVisu_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CAT3DBagRep;
class CATPickPath;
class CATPathElement;
class CATRepPath;
class CATNotification;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEntityVisu ;
#else
extern "C" const IID IID_CATISamEntityVisu ;
#endif

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisEntityVisu
  */

//------------------------------------------------------------------

/**
 * Management of visualization of analysis entities and sets
 * <p>
 * This interface allows not to implement CATI3DGeoVisu Interface. Analysis default implementation 
 * is already done. It will call this interface for appropriate rebuild of your visualization.<br>
 *
 * <p><b>BOA information</b>: this interface can be implemented using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATAnalysisInterface CATISamEntityVisu: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Build the entity graphical representation.
 * By default, This method is the only on to be implemented
 * @param iEntityUpToDate informs if the entity is UpToDate or not.
 * @return CAT3DBagRep The Bag rep, can be empty but always returns one.
 */
    virtual CAT3DBagRep * BuildEntityRep(int iEntityUpToDate) = 0 ;

  /**
   * Builds step by step a path of objects from a path of graphical representations.
   * <br><b>Role</b>: 
   * This will be called in standard DS implementation of CATIVisu for Analysis entities.
   * <font color="red">CATEAnalysisEntityVisu returns E_NOTIMPL, and CATExtIVisu::DecodeGraphic is called.</font>
   */
     virtual HRESULT DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt) = 0 ;    

  /**
   * Builds step by step a path of graphical representations from a path of objects for (pre)highlight purposes.
   * <br><b>Role</b>: 
   * The same as @see CATExtIVisu#BuildRepPath but it is for (pre)highlight purposes only.
   * <font color="red">CATEAnalysisEntityVisu is used to complete the default behavior.</font>
   */
     virtual HRESULT BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep ) = 0 ;

  /**
   * Modifies the geometry or the graphical attributes of the object.
   * <br><b>Role</b>: this method is used to process all the notifications concerning 
   * visual changes for one object.
   *
   * @return the status of the notification's processing.
   * <br><b> Legal values</b>: the status is either
   * <ol><li> 0 when the input notification has not been processed. Then the default processing is applied </li>
   *<li> 1 when the input notification has been processed. </li>
   * </ol>
   *
   * @param iNotif
   * the input notification holding all the information we need in order to process it.
   */
		virtual int ModifyRep(const CATNotification &iNotif) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEntityVisu, CATBaseUnknown );

#endif
