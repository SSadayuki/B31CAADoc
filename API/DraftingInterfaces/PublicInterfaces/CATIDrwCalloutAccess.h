// COPYRIGHT Dassault Systemes 2003

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
 
#ifndef CATIDrwCalloutAccess_H
#define CATIDrwCalloutAccess_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATSymbolType.h"
#include "CATDftArrowEnum.h"


class CATIDrwAnnotationComponent;
class CATIDftView;
class CATIUnknownList;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCalloutAccess;
#else
extern "C" const IID IID_CATIDrwCalloutAccess ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage callout
 * <p>
 * Callout represents an operation that has been performed on a generative view (such as a section cut for example).
 * Callout is associated to the following view type: Section view, section cut, detail view, auxiliary view and break view.
 * This interface manages main characteristics of callout. CATIVisProperties interface may be used to manage the whole 
 * visualization properties of callout.  
 *
 * @see CATIVisProperties, CATIGenerSpec, CATIDftView
 */
class ExportedByDraftingItfCPP CATIDrwCalloutAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Kind of callout.
  * @param SectionCallout
  *   Callout defining section view or section cut.
  * @param BreakCallout
  *   Callout defining break view.
  * @param DetailCallout
  *   Callout defining Detail view.
  * @param ProjectionCallout
  *   Callout defining auxiliary view.
  */
    enum CATDrwCalloutType {SectionCallout,BreakCallout,DetailCallout,ProjectionCallout};

  /** 
  * Returns the type of callout.
  * <b>Role</b>: Returns the type of callout.
  * @param oCalloutType
  *     Type of the callout.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetCalloutType(CATDrwCalloutType &oCalloutType) = 0;

    
  /** 
  * Returns the associated view to callout.
  * <b>Role</b>: Returns the view defined by the callout.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oAssociatedView after use.
  * @param oAssociatedView
  *     View defined by the callout.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or no view found or view doesn' exist for this type of callout.
  * </dl>
  */
    virtual HRESULT GetAssociatedView(CATIDftView  **oAssociatedView) = 0;


  /** 
  * Returns the visibility of the profile.
  * <b>Role</b>: Returns the visibility of the profile.
  * @param oVisibility
  *     visibility value.
  *      <br><b>Legal values</b>:
  *          1 = Callout is completely drawn.
  *          2 = Callout is partially drawn.
  *          3 = Callout is minimal.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Visibility doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT GetVisibility(int &oVisibility) = 0;

  /** 
  * Returns the thickness of profile.
  * <b>Role</b>: Returns the thickness of profile defining the callout.
  * @param oThickness
  *     Thickness value  [1 to 55].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetProfileThickness(int &oThickness) = 0;


  /** 
  * Returns the line type of profile.
  * <b>Role</b>: Returns the line type of profile defining the callout.
  * @param oLineType
  *     line type value  [1 to 63].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetProfileLineType(int &oLineType) = 0;


  /** 
  * Returns the thickness of corner.
  * <b>Role</b>: Returns the thickness of corner defined the callout.
  * @param oThickness
  *     Thickness value  [1 to 55].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT GetCornerThickness(int &oThickness) = 0;


  /** 
  * Returns the line type of corner.
  * <b>Role</b>: Returns the line type of corner defined the callout.
  * @param oLineType
  *     line type value  [1 to 63].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT GetCornerLineType(int &oLineType) = 0;


  /** 
  * Returns the length of corner.
  * <b>Role</b>: Returns the length of corner defined the callout.
  * @param oLengthCorner
  *     length value.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout
  * </dl>
  */
    virtual HRESULT GetCornerLength(double &oLengthCorner) = 0;

  /** 
  * Returns the number of arrows.
  * <b>Role</b>: Returns the number of arrows available for this callout.
  * @param oNbOfArrows
  *     Number of arrows.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetNumberOfArrow(int &oNbOfArrows) = 0;

  /** 
  * Returns informations of one arrow.
  * <b>Role</b>: Returns informations of arrow defined by iNumArrow.
  * @param iNumArrow
  *     Number of arrow.
  * @param oHeadPostion
  *     Head of arrow coordinates.
  * @param oOrientation
  *     Arrow orientation.
  * @param oLength
  *     Length of the arrow.
  * @param oTypeSymb
  *     Type of extremity symbol.
  *    @see CATSymbolType
  * @param oLengthSymb
  *     Length of extremity symbol.
  * @param oAngleSymb
  *     Angle extremity symbol.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * <dt> <tt>E_INVALIDARG</tt>   <dd> Wrong number of arrows.
  * </dl>
  */
    virtual HRESULT GetInfoOfArrow(const int iNumArrow, double *oHeadPosition, double &oOrientation, double &oLength, SymbolType &oTypeSymb, double &oLengthSymb, double &oAngleSymb) = 0;

  /** 
  * Returns the thickness of Callout Arrows.
  * <b>Role</b>: Returns the thickness of Callout Arrows.
  * @param iNumArrow
  *     Number of arrow.
  * @param oArrowThickness
  *     Thickness value  [1 to 8].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetArrowsThickness(const int iNumArrow,int &oArrowThickness) = 0;

    
  /** 
  * Returns attachment of callout arrows.
  * <b>Role</b>: Returns attachment of callout arrows.
  * @param oAttachmentType
  *     Attachment type.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or no attachment notion available for this callout.
  * </dl>
  */
    virtual HRESULT GetArrowsAttachment(CATDftArrowExtremity &oAttachmentType) = 0;

  /** 
  * Returns the Position of Callout Arrows.
  * <b>Role</b>: Returns the Position of Callout Arrows.
  * @param oArrowPosition
  *     Position value.
  *      <br><b>Legal values</b>:
  *          0 = Start Position.
  *          50 = Middle Position.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetArrowsPosition(int &oArrowPosition) = 0;


    /** 
  * Returns the number of texts.
  * <b>Role</b>: Returns the number of texts available for this callout.
  * @param oNbOfTexts
  *     Number of texts available for this callout.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT GetNumberOfTexts(int &oNbOfTexts) = 0;

  /** 
  * Returns text.
  * <b>Role</b>: Returns text objet defined by iNumText.
  * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oText after use.
  * @param iNumText
  *     Number of text: Start to 1 to Number of texts returned by GetNumberOfTexts method.
  * @param oText
  *     Text instance.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * <dt> <tt>E_INVALIDARG</tt>   <dd> Wrong number of texts.
  * </dl>
  */
    virtual HRESULT GetCalloutText(const int iNumText,CATIDrwAnnotationComponent **oText) = 0;

  /** 
  * Sets the visibility of the profile.
  * <b>Role</b>: Sets the visibility of the profile.
  * @param iVisibility
  *     visibility value.
  *      <br><b>Legal values</b>:
  *          1 = Callout is completely drawn.
  *          2 = Callout is partially drawn.
  *          3 = Callout is minimal.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Visibility doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT SetVisibility(const int iVisibility) = 0;


  /** 
  * Sets the thickness of profile.
  * <b>Role</b>: Sets the thickness of profile defining the callout.
  * @param iThickness
  *     Thickness value  [1 to 55].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_INVALIDARG </tt>   <dd> Wrong thickness value.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT SetProfileThickness(const int iThickness) = 0;


  /** 
  * Sets the line type of profile.
  * <b>Role</b>: Sets the line type of profile defining the callout.
  * @param iLineType
  *     line type value  [1 to 63].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_INVALIDARG </tt>   <dd> Wrong line type value.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT SetProfileLineType(const int iLineType) = 0;


  /** 
  * Sets the thickness of corner.
  * <b>Role</b>: Sets the thickness of corner defined the callout.
  * @param iThickness
  *     Thickness value  [1 to 55].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_INVALIDARG </tt>   <dd> Wrong thickness value.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT SetCornerThickness(const int iThickness) = 0;


  /** 
  * Sets the line type of corner.
  * <b>Role</b>: Sets the line type of corner defined the callout.
  * @param iLineType
  *     line type value  [1 to 63].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_INVALIDARG </tt>   <dd> Wrong line type value.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout.
  * </dl>
  */
    virtual HRESULT SetCornerLineType(const int iLineType) = 0;


  /** 
  * Sets the length of corner.
  * <b>Role</b>: Sets the length of corner defined the callout.
  * @param iLengthCorner
  *     length value.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or Corner doesn't exist for this type of callout
  * </dl>
  */
    virtual HRESULT SetCornerLength(const double iLengthCorner) = 0;


  /** 
  * Sets informations of one arrow.
  * <b>Role</b>: Sets informations of arrow defined by iNumArrow.
  * @param iNumArrow
  *     Number of arrow.
  * @param oLength
  *     Length of the arrow.
  * @param oTypeSymb
  *     Type of extremity symbol.
  * <br><b>Legal values</b> :
  *     - FILLED_ARROW
  *     - BLANKED_ARROW
  *     - UNFILLED_ARROW
  *     - OPEN_ARROW
  *    @see CATSymbolType
  * @param oLengthSymb
  *     Length of extremity symbol.
  * @param oAngleSymb
  *     Angle extremity symbol.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * <dt> <tt>E_INVALIDARG</tt>   <dd> Wrong number of arrows.
  * </dl>
  */
    virtual HRESULT SetInfoOfArrow(const int iNumArrow, const double iLength,  const SymbolType iTypeSymb, const double iLengthSymb,const  double iAngleSymb) = 0;

  /** 
  * Sets the thickness of Callout Arrows.
  * <b>Role</b>: Sets the thickness of Callout Arrows.
  * @param iNumArrow
  *     Number of arrow.
  * @param iArrowThickness
  *     Thickness value  [1 to 8].
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT SetArrowsThickness(const int iNumArrow,const int iArrowThickness) = 0;
    
  /** 
  * Sets attachment of callout arrows.
  * <b>Role</b>: Sets attachment of callout arrows.
  * @param iAttachmentType
  *     Attachment type. 
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior or no attachment notion available for this callout.
  * </dl>
  */
    virtual HRESULT SetArrowsAttachment(const CATDftArrowExtremity iAttachmentType) = 0;

  /** 
  * Sets the Position of Callout Arrows.
  * <b>Role</b>: Sets the Position of Callout Arrows.
  * @param iArrowPosition
  *     Position value.
  *      <br><b>Legal values</b>:
  *          0 = Start Position.
  *          50 = Middle Position.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Method correctly executed.
  * <dt> <tt>E_FAIL</tt>   <dd> Abnormal behavior.
  * </dl>
  */
    virtual HRESULT SetArrowsPosition(const int iArrowPosition) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIDrwCalloutAccess, CATBaseUnknown);

//------------------------------------------------------------------

#endif
