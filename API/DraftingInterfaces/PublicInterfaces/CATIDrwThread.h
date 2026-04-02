#ifndef CATIDrwThread_H
#define CATIDrwThread_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwCenterLine.h"
#include "CATDftThreadTypeEnum.h"

// Mathematics
#include "CATLISTP_CATMathCircleArc2D.h"

class CATIDftGenExternalLink;
class CATListPtrCATFace;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwThread ;
#else
extern "C" const IID IID_CATIDrwThread ;
#endif

/**
* Interface to manage thread type and representation.
*/

class ExportedByDraftingItfCPP CATIDrwThread : public CATIDrwCenterLine
{
  CATDeclareInterface;

   public:

   /**
   * Set the thread quadrant and the thread type.
   * @param iQuadrant
   *   Thread quadrant.
   *   <br>Value must be an integer between 0 and 3.
   * @param iType
   *   Thread type : CATDftThreaded or CATDftTaped.
   */
   virtual void SetThreadType(const int iQuadrant=0, CATDftThreadTypeEnum iType=CATDftTaped) = 0;

   /**
   * Get Thread information .
   * @param oCircleArcList
   *   Thread arc circle geometry.
   *   <br>List has only one element for now.
   * @param oQuadrant
   *   Thread quadrant.
   *   <br>Value will be between 0 and 3.
   * @param oType
   *   Thread type : Threaded or Taped.
   */
   virtual void GetThreadInfo(CATLISTP(CATMathCircleArc2D) & oCircleArcList, 
                              int & oQuadrant, CATDftThreadTypeEnum & oType) const =0;

   /**
   * Get Thread information.
   * @param oCircleArc
   *   Thread arc circle geometry.
   * @param oQuad
   *   Thread quadrant.
   *   <br>Value will be between 0 and 3.
   * @param oType
   *   Thread type : Threaded or Taped.
   * @param oShowMode
   *   Thread arc circle linetype.
   */
   virtual HRESULT GetThreadInfo(CATMathCircleArc2D *oCircleArc, int *oQuad, 
                                  CATDftThreadTypeEnum *oType, int *oShowMode) =0;

   /**
   * Get Threadable object.
   * @param oThread
   *   Threadable object in case 
   */
   virtual HRESULT GetThreadableObject(CATBaseUnknown **oThread) =0;

   /**
   * @nodoc
   * Replace reference.
   * <br>Internal use only.
   */
   virtual void ReplaceReference(const CATFace_var & iFace, const CATBody_var & iBody, 
                                 const CATIProduct_var & iProd, CATMathPoint2D * ipt, double * iRadHole,
                                  const CATISpecObject_var & iSpec = NULL_var, double *iRadThd=NULL) = 0;

   /**
   * @nodoc
   * Replace reference.
   * <br>Internal use only.
   */
   virtual HRESULT Modify(CATIDftGenExternalLink *iGenExtLink, double &iRadThd,
                          double &iRadHole, CATMathPoint2D &iCenter) = 0;

   /**
   * @nodoc
   * Replace reference.
   * <br>Internal use only.
   * Release to perform on oExternalLink
   */
   virtual HRESULT GetDftExternalLink(CATIDftGenExternalLink **oExternalLink) = 0;

   /**
   * @nodoc
   * Is the thread pointing to.
   * @param iObj
   *   Object to test if the thread is pointing to. Must be not NULL
   * @param isPointing
   *   TRUE if the thread is pointing to iObj else FALSE
   * <br>Internal use only.
   */
   virtual HRESULT AmIPointing(CATBaseUnknown *iObj, CATBoolean &isPointing) const = 0;

   /**
   * @nodoc
   * To use only in case of technological result feature.
   * iObj is an input and take into account to build the thread
   * Method used only during generative update
   * <br>Internal use only.
   */
   virtual HRESULT BuildFast(CATBaseUnknown *iObj) = 0;
};

CATDeclareHandler(CATIDrwThread, CATIDrwCenterLine);
#endif
