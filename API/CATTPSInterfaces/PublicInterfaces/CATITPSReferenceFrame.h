#ifndef CATITPSReferenceFrame_H
#define CATITPSReferenceFrame_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSConstrainingDOF.h"
#include "CATTPSDatumOrderInFrame.h"

class CATITPSList;
class CATITTRS;
class CATITPSDatum;
class CATITTRS_var;
class CATListValCATBaseUnknown_var;

extern "C" const IID IID_CATITPSReferenceFrame;

/**
 * Interface designed to manage reference frame associated to a TPS.
 * Reference frame is composed of three boxes.
 * <pre>
 * <r>                        Reference Frame
 * <r>                       / 
 * <r>                 _____|_____
 * <r>                /           \
 * <r>        ---------------------
 * <r>        |   |   |Box|Box|Box|
 * <r>        |   |   | 1 | 2 | 3 |
 * <r>        ---------------------
 * <pre>
 * Reference Frame must be defined with the SetFrame method that returns a 
 * semantic diagnostic on the input frame. When not in a definition context,
 * this diagnostic on frame is included in global diagnostic returned by 
 * CATITPSSemanticValidity::Check() method.
 * @see CATITPSSemanticValidity#Check
 */
class CATITPSReferenceFrame : public IUnknown
{
  public:

    /**
     * <br /><strong>Role</strong>: Sets Frame of the TPS. Frame is defined by a string in each box.
     *   @param iFirstBox
     *   @param iSecondBox
     *   @param iThirdBox
     *     Texts in first, second and third boxes.
     *   @param oDiagnostic
     *     Message that contains semantic diagnostic on Reference Frame.
     *     It is composed of [0...n] NLS Keys separated by blank.
     *     <tt>oDiagnostic</tt> must be deleted after use.
     */
    virtual HRESULT SetFrame (const wchar_t * iFirstBox,
                              const wchar_t * iSecondBox,
                              const wchar_t * iThirdBox,
                              wchar_t ** oDiagnostic) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves Frame of the TPS.
     *   @param oFirstBox
     *   @param oSecondBox
     *   @param oThirdBox
     *     Texts in first, second and third boxes.
     */
    virtual HRESULT GetFrame (wchar_t ** oFirstBox,
                              wchar_t ** oSecondBox,
                              wchar_t ** oThirdBox) const = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves all datums simple used in Reference Frame.
     *   @param oDatums [out, CATITPSList#Release]
     *     All objects of the collection adhere to CATITPSDatumSimple.
     */
    virtual HRESULT GetAllDatumsSimple (CATITPSList ** oDatums) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the AxisSystem TTRS.
     *  @param ispAxisSystemTTRS
     *   AxisSystem TTRS. If it is NULL, the AxisSystem TTRS in the model
     *   will be removed.
     *  returns S_OK when the TTRS has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetAxisSystemTTRS(const CATITTRS_var& ispAxisSystemTTRS) = 0;

    /**
     * <br /><strong>Role</strong>: Gets the AxisSystem TTRS.
     *  @param ospAxisSystemTTRS
     *   AxisSystem TTRS
     *  returns S_OK when the TTRS has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetAxisSystemTTRS(CATITTRS_var &ospAxisSystemTTRS) = 0;

    /**
     * <br /><strong>Role</strong>: Sets the values of Degrees Of Freedom(DOF) [x,y,z,u,v,w].
     * <br /><strong>Precondition</strong>: Only for ASME 2009 (does not exist in ISO).
     * Is only defined when "Axis System" attribute is valued.
     *  @param inBox
     *   First, Second or the Third Box of the DRF on which
     *   the Degrees Of Freedom is to be set.
     *  @param iValue
     *   Legal values are:-
     *   CATTPSConstrainX,
     *   CATTPSConstrainY,
     *   CATTPSConstrainZ,
     *   CATTPSConstrainU,
     *   CATTPSConstrainV,
     *   CATTPSConstrainW
     *   E.G.:- To set [x,z] as the DOF:-
     *   iValue = CATTPSConstrainX|CATTPSConstrainZ;
     *  @return HRESULT
     *    S_OK : the Degrees Of Freedom has been correctly set.
     *    E_FAIL or E_NOIMPL : the Degrees Of Freedom cannot be set.
     */
    virtual HRESULT SetDegreesOfFreedom (const int inBox,
                                         const CATTPSConstrainingDOF iValue) = 0; 

    /**
    * <br /><strong>Role</strong>: Retrieves the values of Degrees Of Freedom(DOF) [x,y,z,u,v,w].
    * <br /><strong>Precondition</strong>: Only for ASME 2009 (does not exist in ISO).
    * Is only defined when "Axis System" attribute is valued.
    *  @param inBox
    *   First, Second or the Third Box of the DRF on which
    *   the Degrees Of Freedom is to be retrieved.
    *  @param oValue
    *   Legal values are:-
    *   CATTPSConstrainX,
    *   CATTPSConstrainY,
    *   CATTPSConstrainZ,
    *   CATTPSConstrainU,
    *   CATTPSConstrainV,
    *   CATTPSConstrainW
    *  @return HRESULT
    *    S_OK : the Degrees Of Freedom has been correctly retrieved.
    *    E_FAIL or E_NOIMPL : the Degrees Of Freedom cannot be retrieved.
    */
    virtual HRESULT GetDegreesOfFreedom (const int inBox,
                                         CATTPSConstrainingDOF &oValue) const = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves the the list of Datum Feature participating to the box definition.
     * This method is coming in addition to the existing ones no more in position to satisfy
     * navigation in box definition after ISO 5459:2011 standard support.
     * This call is nevertheless not limited to ISO standard; it support also ASME
     * standard and is for instance well suited to parse such a following content:
     * A(M)-B(L)[Phi 12.6] that can be present in a single box.
     * @param iDRFBoxContext      [ in ]
     *   Position in the DRF composition of the box to consider
     * @param oListOfDatumInBox   [ out ]
     *   List containing the Datum Feature used in the considered box.
     *   Notice: based on this list, end user can query the CATITPSDatumSimple or
     *   CATITPSProjectedExtension interfaces to manage modifiers (respectively [CF]
     *   or (P) whose management is performed directly on Datum Feature).
     *   @see CATITPSProjectedExtension, CATITPSDatumSimple
     *  @return HRESULT
     *    S_OK : reveals a proper execution, list of Datum Feature has a reliable content.
     *    E_FAIL or E_NOIMPL : otherwise on error.
     */
    virtual HRESULT GetDatumFeatureInBox( const CATTPSDatumOrderInFrame iDRFBoxContext,
                                          CATListValCATBaseUnknown_var & oListOfDatumInBox ) const = 0;

    /**
     * <br /><strong>Role</strong>: Gets modifiers per box. 
     * Retrieves the list of objects (given back under the relevant behavioral interface) to 
     * access and manage to modifier and their related information applied in context of this
     * datum system (datum reference frame in ASME).
     * Notice that due to the complexity of the grouping that may result in reference frame
     * (refer to ISO 5459:2011 standard), allowed modifications are at the margin meaning that
     * modifier can be reset if it was applied... This protocol is mainly focusing in ability
     * to navigate into gathering defined within a specific Datum System and thus read in
     * a consistent manner the semantic information.
     * Interfaces caller may be returned are stricly identified in the array of IIDs used
     * in sequence to query the accurate behavior; one can cite as of now CATITPSMaterialCondition,
     * CATITPSDatumBSCModifier, CATITPSDatumTranslationModifier, CATITPSDistanceVariable,
     * CATITPSOrientationOnly or CATITPSSimulationFeature.
     * This call is nevertheless not limited to ISO standard; it support also ASME.
     * @see CATITPSMaterialCondition, CATITPSDatumBSCModifier, CATITPSDatumTranslationModifier, CATITPSDistanceVariable, CATITPSOrientationOnly, CATITPSSimulationFeature
     *  @param iDRFBoxContext                [ in ]
     *   First, Second or the Third Box of the DRF to investigate.
     *  @param oModifierTypeCount            [ out ]
     *   Indicates the number of elements both in array of IIDs and in list of objects.
     *  @param oIIDOfItfToQuery              [ out, delete ]
     *   Interfaces UID to be employed to query object in the list to go on studying
     *   modifiers. The order in this array is strictly aligned with the order in the
     *   returned list of abjects; an example of use is proposed in following.
     *  @param oListOfObjectToManageModifier [ out ]
     *   Objects to take into account for getting access to modifier information.
     *
     *  @example Sample to analyse modifiers applied on Primary box of the Reference Frame:
     *  CATITPSReferenceFrame * piDRF = NULL;
     *  ...
     *  // Retrieve interface
     *  ...
     *  int Count = 0;
     *  IID ** IIDList = NULL;
     *  CATLISTV( CATBaseUnknown_var ) ObjectList ;
     *  HRESULT rc = piDRF -> GetModifiersInBox ( ::CATTPSDOIFPrimary, &Count, &IIDList, ObjectList );
     *  if ( FAILED( rc ) || ( Count != ObjectList.Size( ))) { // Error handling ... }
     *  ...
     *  // Loop on different modifier management objects
     *  IID                * pUIDForQuery = NULL ;
     *  IUnknown           * piItf        = NULL ;
     *  CATBaseUnknown_var   spItemList   = NULL_var ;
     *  for (int i = 0; i < Count; i++ )
     *  {
     *    // use IIDList[i] for accessing list members
     *    pUIDForQuery = IIDList[i] ;
     *    if (! pUIDForQuery )  { // Error handling ... }
     *     
     *    // Query IID corresponding ineterface to go on
     *    spItemList = ObjectList[ i+1 ] ;
     *    if ( NULL_var == spItemList )  { // Error handling ... }
     *    rc = spItemList->QueryInterface( *pUIDForQuery, (void **) &piItf ) ;
     *    if (FAILED( rc ) || (! piItf ))  { // Error handling ... }
     *    ...
     *    // Treatment with pointeur on the Itf
     *    ...
     *    piItf->Release( ); piItf = NULL;
     *  }
     *  delete [] IIDList; // Remove list
     *  @return HRESULT
     *    S_OK : reveals a proper execution, list has a reliable content.
     *    E_FAIL or E_NOIMPL : otherwise on error.
     */
    virtual HRESULT GetModifiersInBox( const CATTPSDatumOrderInFrame     iDRFBoxContext,
                                       int                           *   oModifierTypeCount,
                                       IID                           *** oIIDOfItfToQuery,
                                       CATListValCATBaseUnknown_var  &   oListOfObjectToManageModifier ) const = 0 ;

};
#endif

