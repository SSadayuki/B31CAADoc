#ifndef CATMSHCustomHighlight_h
#define CATMSHCustomHighlight_h

// COPYRIGHT DASSAULT SYSTEMES 2005
/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */
#include "MSHUITools.h"
#include "CATAcquisitionFilter.h"
#include <stddef.h>

class CATMSHElement;
class CATMSHNode;
class CAT3DCustomRep;

/**
 * Customized method which be called for the highlight.
 * @param iRep
 *   The CustomRep used to adds a graphic primitive to the list of managed graphic 
     primitives (see @see CAT3DCustomRep object)
 * @param iHData
 *   The data associated to the implementation of customized highlight method. 
 */
typedef HRESULT (*CATMSHMethodHilight) (CAT3DCustomRep * iRep, CATBaseUnknown * iEntity, void * iHData);

/**
 * Interface representing a pre-highlight and highlight of a finite element entity.
 * <b>Role</b>: This interface provides a customization of the highlight behavoiur
 * on : element, node, finite element's edge, finite element's face.
 * <br>
 */
class ExportedByMSHUITools CATMSHCustomHighlight : public CATAcquisitionFilter
{
public:
/**
  * Creates an object which defines custom hiligth method an associated data.
  * <br><b>Role</b>: This object creates a link to the custimzed method which should be
  * called to highlight a FEM entity.
  * @param iMethod
  *   The customized service to call in the hiligth. The parameters of this service
  *   are defined by the typedef described below.
  * @param iHData
  *   The data associated to the customized implementation of highlight. 
  */
  CATMSHCustomHighlight ( CATMSHMethodHilight iMethod = NULL , void * iHData = NULL );
/**
 * Defines the default hiligth behaviour of finite element.
 * @param iRep
 *   The rep associated to element for hiligth.
 * @param iElement
 *   The finite element object to hiligth.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The hiligth is succesfull.
 *   <dt>E_FAIL</dt><dd>The hiligth failed.
 *   </dl>
 */
  static HRESULT HighlightElement ( CAT3DCustomRep * iRep, CATMSHElement * iElement );
/**
 * Defines the default hiligth behaviour for the face of finite element.
 * @param iRep
 *   The rep associated to the hiligth of a face of finite element.
 * @param iElement
 *   The finite element object whose the face is to hiligth.
 * @param iFace
 *   The finite element face number to hiligth.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The hiligth is succesfull.
 *   <dt>E_FAIL</dt><dd>The hiligth failed.
 *   </dl>
 */
  static HRESULT HighlightFace ( CAT3DCustomRep * iRep, CATMSHElement * Element , int iFace );
/**
 * Defines the default hiligth behaviour for the edge of finite element.
 * @param iRep
 *   The rep associated to the hiligth of a edge of finite element.
 * @param iElement
 *   The finite element object whose the edge is to hiligth.
 * @param iEdge
 *   The finite element edge number to hiligth.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The hiligth is succesfull.
 *   <dt>E_FAIL</dt><dd>The hiligth failed.
 *   </dl>
 */
  static HRESULT HighlightEdge ( CAT3DCustomRep * iRep, CATMSHElement * Element , int iEdge );
/**
 * Defines the default hiligth behaviour for a node.
 * @param iRep
 *   The rep associated to the hiligth of a edge of finite element.
 * @param iNode
 *   The finite element node object to hiligth.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The hiligth is succesfull.
 *   <dt>E_FAIL</dt><dd>The hiligth failed.
 *   </dl>
 */
  static HRESULT HighlightNode ( CAT3DCustomRep * iRep, CATMSHNode * iNode );
/** 
 *  @nodoc 
 *   This method is called in the highlight step
 * @return
 *   The result of the test.
 */
  boolean GetStatus ();

protected:
/**
 * @nodoc
 */
  virtual ~CATMSHCustomHighlight ();

private:

  CATMSHMethodHilight _HMethod;
  void *              _HData;
};
#endif
