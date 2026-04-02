// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisEntityVisu.h Provide adaptor to interface CATISamEntityVisu
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisEntityVisu_H
#define CATEAnalysisEntityVisu_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATISamEntityVisu.h"
class CATPickPath;
class CATPathElement;
class CATRepPath;

//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamEntityVisu interface.
 * This adapter allow a BOA implementation.
 * @see CATISamEntityVisu
 */

class ExportedByCATAnalysisResources CATEAnalysisEntityVisu: public CATISamEntityVisu
{

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CATEAnalysisEntityVisu ();
     virtual ~CATEAnalysisEntityVisu ();

/**
 * Build the entity graphical representation.
 * By default, This method is the only on to be implemented
 * @param iEntityUpToDate informs if the entity is UpToDate or not.
 * @return CAT3DBagRep An empty BagRep is created.
 */
    virtual CAT3DBagRep * BuildEntityRep(int iEntityUpToDate);

  /**
   * Builds step by step a path of objects from a path of graphical representations.
   * <br><b>Role</b>: 
   * This will be called in standard DS implementation of CATIVisu for Analysis entities.
   * <font color="red">This implementation returns E_NOTIMPL, and CATExtIVisu::DecodeGraphic is called.</font>
   */
     virtual HRESULT DecodeGraphic ( const CATPickPath &iPickPath, CATPathElement &ioPathElt) ;    

  /**
   * Builds step by step a path of graphical representations from a path of objects for (pre)highlight purposes.
   * <br><b>Role</b>: 
   * The same as @see CATExtIVisu#BuildRepPath but it is for (pre)highlight purposes only.
   * <font color="red">This implementation is used to complete the default behavior.</font>
   */
     virtual HRESULT BuildHighlightLook(const CATPathElement &iPathElt, CATRepPath &ioPathRep ) ;

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
		virtual int ModifyRep(const CATNotification &iNotif) ;

  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisEntityVisu (CATEAnalysisEntityVisu &);
  CATEAnalysisEntityVisu& operator=(CATEAnalysisEntityVisu&);

};

//-----------------------------------------------------------------------

#endif
