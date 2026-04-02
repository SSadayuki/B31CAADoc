
#ifndef CATITPSEditorUIFTAInfraSettingAtt_H
#define CATITPSEditorUIFTAInfraSettingAtt_H

// COPYRIGHT Dassault Systemes 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSEditorUIFTAInfraSettingAtt;
#else
extern "C" const IID IID_CATITPSEditorUIFTAInfraSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//-----------------------------------------------------------------------------
/**
 * Interface to the 3D Annotations Infrastructure setting controller.
 * <b>Role</b>: The 3D Annotations Infrastructure setting controller object deals with the setting
 * parameters displayed in:
 * <ul>
 *   <li>The Tolerancing property page
 *   <li>The Display property page
 *   <li>The Constructed Geometry property page
 *   <li>The Manipulators property page
 *   <li>The Dimension property page
 *   <li>The Annotation property page
 *   <li>The Tolerances property page
 *   <li>The View/Annotation Plane property page
 *   <br>To access this property page:
 *     <ul>
 *       <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *       <li>Click + left of <b>Mechanical Design</b> to unfold the workbench list</li>   
 *       <li>Click <b>Functionnal Toleracing & Annotation</b></li>
 *     </ul>
 *   </li>
 * </ul>
 */

class ExportedByCATTPSItfCPP CATITPSEditorUIFTAInfraSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  //------------------------------------------------------
  //  Standard setting parameter
  //------------------------------------------------------

    /**
     * Retrieves the Standard setting parameter value.
     * <br><b>Role</b>: The Standard setting parameter defines the standard of the annotation's set
     * <br><b>Legal values</b>:The three color indexes range from 0 to 255.
     * @param oStandard [out]
     *   The Standard
     * @return
     *   S_OK if the Standard setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */

     virtual HRESULT GetStandard( CATUnicodeString& oStandard ) = 0;

    /**
     * Retrieves the Leader Associativity setting parameter value.
     * <br><b>Role</b>: The Leader Associativity setting parameter defines the associativity 
     * of leader on a surface
     * <br><b>Legal values</b>:Undefined, Free, Perpendicular
     * @param oLeaderAssociativity [out]
     *   The Associativity
     * @return
     *   S_OK if the Leader Associativity setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetLeaderAssociativity( unsigned char* oLeaderAssociativity ) = 0;

    /**
     * Retrieves the Grid Display setting parameter value.
     * <br><b>Role</b>: The Grid Display setting parameter display a grid on the active to view 
     * @param oGridDisplay [out]
     *   The Grid Display
     * @return
     *   S_OK if the Grid Display setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridDisplay( unsigned char* oGridDisplay ) = 0;

    /**
     * Retrieves the Grid Snap Point setting parameter value.
     * <br><b>Role</b>: The Grid Snap Point setting parameter force the annotation to be positionning on the grid.
     * @param oGridSnapPoint [out]
     *   The Grid Snap Point
     * @return
     *   S_OK if the Grid Snap Point setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridSnapPoint( unsigned char* oGridSnapPoint ) = 0;

    /**
     * Retrieves the Allow Distortions setting parameter value.
     * <br><b>Role</b>: The Allow Distortions setting parameter allow a distorsion between vertical and horizontal.
     * @param oAllowDistortions [out]
     *   The Allow Distortions
     * @return
     *   S_OK if the Allow Distortions setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetAllowDistortions( unsigned char* oAllowDistortions ) = 0;

    /**
     * Retrieves the Grid Primary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid Primary Spacing setting parameter defines the spacing on the grid.
     * @param oGridPrimarySpacing [out]
     *   The Grid Primary Spacing
     * @return
     *   S_OK if the Grid Primary Spacing setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridPrimarySpacing( double* oGridPrimarySpacing ) = 0;

    /**
     * Sets the Grid Secondary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid Secondary Spacing setting parameter defines the number of case on the grid
     * @param oGridSecondaryStep [out]
     *   The Grid Secondary Spacing
     * @return
     *   S_OK if the Grid Secondary Spacing setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridSecondaryStep( int* oGridSecondaryStep ) = 0;

    /**
     * Retrieves the Grid V Primary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid V Primary Spacing setting parameter defines the spacing on the grid on the second direction.
     * @param oGridVPrimarySpacing [out]
     *   The Grid V Primary Spacing
     * @return
     *   S_OK if the Grid V Primary Spacing setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridVPrimarySpacing( double* oGridVPrimarySpacing ) = 0;

    /**
     * Retrieves the Grid V Secondary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid V Secondary Spacing setting parameter defines the number of case on the grid on the second direction
     * @param oGridVSecondaryStep [out]
     *   The Grid V Secondary Spacing
     * @return
     *   S_OK if the Grid V Secondary Spacing setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetGridVSecondaryStep( int* oGridVSecondaryStep ) = 0;

    /**
     * Retrieves the Under Set setting parameter value.
     * <br><b>Role</b>: The Under Set setting parameter defines the annotations'
     * position in the 2D graph (under the annnotations' set)
     * @param oUnderSet [out]
     *   The UnderSet information
     * @return
     *   S_OK if the UnderSet setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetUnderSet( unsigned char* oUnderSet ) = 0;

    /**
     * Retrieves the Under View setting parameter value.
     * <br><b>Role</b>: The Under View setting parameter defines the annotations'
     * position in the 2D graph (under the 3D view)
     * @param oUnderView [out]
     *   The UnderView information
     * @return
     *   S_OK if the UnderView setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetUnderView( unsigned char* oUnderView ) = 0;

    /**
     * Retrieves the Under Feature setting parameter value.
     * <br><b>Role</b>: The Under View setting parameter defines the annotations'
     * position in the 2D graph
     * @param oUnderFeature [out]
     *   The UnderFeature information
     * @return
     *   S_OK if the UnderFeature setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT GetUnderFeature( unsigned char* oUnderFeature ) = 0;

    /**
     * Retrieves the Save in CGR setting parameter value.
     * <br><b>Role</b>: The Save in CGR setting parameter defines the save of annotations in CGR.
     * @param oValue [out]
     *   The Save in CGR information
     * @return
     *   S_OK if the Standard setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetSaveInCGR( unsigned char* oSaveInCGR ) = 0;

    /**
     * Retrieves the Manipulator Reference Size setting parameter value.
     * <br><b>Role</b>: The Manipulator Reference Size setting parameter defines the size of the manipulator
     * @param oValue [out]
     *   The Size of the Manipulator
     * @return
     *   S_OK if the Manipulator Reference Size setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetManRefSiz( double* oManRefSiz ) = 0;

    /**
     * Retrieves the Manipulator Zoom Capability Size setting parameter value.
     * <br><b>Role</b>: The Manipulator Zoom Capability setting parameter defines the capability of zoom on the manipulator.
     * @param oValue [out]
     *   The Manipulator Zoom Capability
     * @return
     *   S_OK if the Manipulator Zoom Capability setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetManZooCap( unsigned char* oManZooCap ) = 0;

    /**
     * Retrieves the Move After Creation setting parameter value.
     * <br><b>Role</b>: The Move After Creation setting parameter defines capability to move the annotation after the creation.
     * @param oValue [out]
     *   The Move After Creation information
     * @return
     *   S_OK if the Move After Creation setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetMoveAfterCreation( unsigned char* oMoveAfterCreation ) = 0;

    /**
     * Retrieves the View Associativity setting parameter value.
     * <br><b>Role</b>: The View Associativity setting parameter defines the associativity of the view with the geometry.
     * @param oValue [out]
     *   The View Associativity information
     * @return
     *   S_OK if the View Associativity setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetViewAssociativity( unsigned char* oViewAssociativity ) = 0;

    /**
     * Retrieves the View Referential setting parameter value.
     * <br><b>Role</b>: The View Referential setting parameter defines display or not the referential view.
     * @param oValue [out]
     *   The oValue
     * @return
     *   S_OK if the View Referential setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetViewReferential( unsigned char* oViewReferential ) = 0;

    /**
     * Retrieves the View Referential Zoomable setting parameter value.
     * <br><b>Role</b>: The View Referential Zoomable setting parameter defines the capability to zoom ont he referential view.
     * @param oValue [out]
     *   The oValue
     * @return
     *   S_OK if the View Referential Zoomable setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetViewReferentialZoomable( unsigned char* oViewReferentialZoomable ) = 0;

    /**
     * Retrieves the View Profile setting parameter value.
     * <br><b>Role</b>: The View Profile setting parameter defines the display or not of the profile of the view.
     * @param oValue [out]
     *   The oValue
     * @return
     *   S_OK if the View Profile setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetViewProfile( unsigned char* oViewProfile ) = 0;

    /**
     * Sets the Standard setting parameter value.
     * <br><b>Role</b>: The Standard setting parameter defines the standard of the annotation's set
     * @param iStandard [in]
     *   The Standard
     * @return
     *   S_OK if the Standard setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT SetStandard( CATUnicodeString& iStandard ) = 0;

    /**
     * Sets the Leader Associativity setting parameter value.
     * <br><b>Role</b>: The Leader Associativity setting parameter defines the associativity 
     * of leader on a surface
     * <br><b>Legal values</b>:Undefined, Free, Perpendicular
     * @param iLeaderAssociativity [in]
     *   The Associativity
     * @return
     *   S_OK if the Leader Associativity setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetLeaderAssociativity( unsigned char iLeaderAssociativity ) = 0;

    /**
     * Sets the Grid Display setting parameter value.
     * <br><b>Role</b>: The Grid Display setting parameter display a grid on the active to view 
     * @param iGridDisplay [in]
     *   The Grid Display
     * @return
     *   S_OK if the Grid Display setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetGridDisplay( unsigned char iGridDisplay ) = 0;

    /**
     * Sets the Grid Snap Point setting parameter value.
     * <br><b>Role</b>: The Grid Snap Point setting parameter force the annotation to be positionning on the grid.
     * @param iGridSnapPoint [in]
     *   The Grid Snap Point
     * @return
     *   S_OK if the Grid Snap Point setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetGridSnapPoint( unsigned char iGridSnapPoint ) = 0;

    /**
     * Sets the Allow Distortions setting parameter value.
     * <br><b>Role</b>: The Allow Distortions setting parameter allow a distorsion between vertical and horizontal.
     * @param iAllowDistortions [in]
     *   The Allow Distortions
     * @return
     *   S_OK if the Allow Distortions setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetAllowDistortions( unsigned char iAllowDistortions ) = 0;

    /**
     * Sets the Grid Primary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid Primary Spacing setting parameter defines the spacing on the grid.
     * @param iGridPrimarySpacing [in]
     *   The Grid Primary Spacing
     * @return
     *   S_OK if the Grid Primary Spacing setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */

     virtual HRESULT SetGridPrimarySpacing( double iGridPrimarySpacing ) = 0;
    /**
     * Sets the Grid Secondary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid Secondary Spacing setting parameter defines the number of case on the grid
     * @param iGridSecondaryStep [in]
     *   The Grid Secondary Spacing
     * @return
     *   S_OK if the Grid Secondary Spacing setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetGridSecondaryStep( int iGridSecondaryStep ) = 0;

    /**
     * Sets the Grid V Primary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid V Primary Spacing setting parameter defines the spacing on the grid on the second direction.
     * @param iGridVPrimarySpacing [in]
     *   The Grid V Primary Spacing
     * @return
     *   S_OK if the Grid V Primary Spacing setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetGridVPrimarySpacing( double iGridVPrimarySpacing ) = 0;

    /**
     * Sets the Grid V Secondary Spacing setting parameter value.
     * <br><b>Role</b>: The Grid V Secondary Spacing setting parameter defines the number of case on the grid on the second direction
     * @param iGridVSecondaryStep [in]
     *   The Grid V Secondary Spacing
     * @return
     *   S_OK if the Grid V Secondary Spacing setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetGridVSecondaryStep( int iGridVSecondaryStep ) = 0;

    /**
     * Sets the Under Set setting parameter value.
     * <br><b>Role</b>: The Under Set setting parameter defines the annotations'
     * position in the 2D graph (under the annnotations' set)
     * @param iUnderSet [in]
     *   The UnderSet information
     * @return
     *   S_OK if the UnderSet setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetUnderSet( unsigned char iUnderSet ) = 0;

    /**
     * Sets the Under View setting parameter value.
     * <br><b>Role</b>: The Under View setting parameter defines the annotations'
     * position in the 2D graph (under the 3D view)
     * @param iUnderView [in]
     *   The UnderView information
     * @return
     *   S_OK if the UnderView setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetUnderView( unsigned char iUnderView ) = 0;

    /**
     * Sets the Under Feature setting parameter value.
     * <br><b>Role</b>: The Under View setting parameter defines the annotations'
     * position in the 2D graph
     * @param iUnderFeature [in]
     *   The UnderFeature information
     * @return
     *   S_OK if the UnderFeature setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetUnderFeature( unsigned char iUnderFeature ) = 0;

    /**
     * Sets the Save in CGR setting parameter value.
     * <br><b>Role</b>: The Save in CGR setting parameter defines the save of annotations in CGR.
     * @param iValue [in]
     *   The Save in CGR information
     * @return
     *   S_OK if the Save In CGR setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetSaveInCGR( unsigned char iSaveInCGR ) = 0;

    /**
     * Sets the Manipulator Reference Size setting parameter value.
     * <br><b>Role</b>: The Manipulator Reference Size setting parameter defines the size of the manipulator.
     * @param iValue [in]
     *   The Size of the Manipulator
     * @return
     *   S_OK if the Manipulator Reference Size setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetManRefSiz( double iManRefSiz ) = 0;

    /**
     * Sets the Manipulator Zoom Capability Size setting parameter value.
     * <br><b>Role</b>: The Manipulator Zoom Capability setting parameter defines the capability of zoom on the manipulator.
     * @param iValue [in]
     *   The Manipulator Zoom Capability
     * @return
     *   S_OK if the Manipulator Zoom Capability setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetManZooCap( unsigned char iManZooCap ) = 0;

    /**
     * Sets the Move After Creation setting parameter value.
     * <br><b>Role</b>: The Move After Creation setting parameter defines capability to move the annotation after the creation.
     * @param iValue [in]
     *   The Move After Creation information
     * @return
     *   S_OK if the Move After Creation setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetMoveAfterCreation( unsigned char iMoveAfterCreation ) = 0;

    /**
     * Sets the View Associativity setting parameter value.
     * <br><b>Role</b>: The View Associativity setting parameter defines the associativity of the view with the geometry.
     * @param oValue [out]
     *   The View Associativity information
     * @return
     *   S_OK if the View Associativity setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetViewAssociativity( unsigned char iViewAssociativity ) = 0;

    /**
     * Sets the View Referential setting parameter value.
     * <br><b>Role</b>: The View Referential setting parameter defines display or not the referential view.
     * @param iValue [in]
     *   The oValue
     * @return
     *   S_OK if the View Referential setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetViewReferential( unsigned char iViewReferential ) = 0;

    /**
     * Sets the View Referential Zoomable setting parameter value.
     * <br><b>Role</b>: The View Referential Zoomable setting parameter defines the capability to zoom ont he referential view.
     * @param iValue [in]
     *   The iValue
     * @return
     *   S_OK if the View Referential Zoomable setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT SetViewReferentialZoomable( 
                                      unsigned char iViewReferentialZoomable ) = 0;

    /**
     * Sets the View Profile setting parameter value.
     * <br><b>Role</b>: The View Profile setting parameter defines the display or not of the profile of the view.
     * @param iValue [in]
     *   The iValue
     * @return
     *   S_OK if the View Profile setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetViewProfile( unsigned char iViewProfile ) = 0;

    /**
     * Retrieves the state of the Standard parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetStandardInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the Leader Associativity parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetLeaderAssociativityInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridDisplay parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridDisplayInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridSnapPoint parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridSnapPointInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the AllowDistortions parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetAllowDistortionsInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridPrimarySpacing parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridPrimarySpacingInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridSecondaryStep parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridSecondaryStepInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridVPrimarySpacing parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridVPrimarySpacingInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the GridVSecondaryStep parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetGridVSecondaryStepInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the UnderSet Tree Visu parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetUnderSetInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the UnderView Tree Visu parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetUnderViewInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the UnderFeature Tree Visu parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetUnderFeatureInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the Save In CGR parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetSaveInCGRInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the Manipulator reference size parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetManRefSizInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the Manipulator zoom capability parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetManZooCapInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the Move After Creation parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetMoveAfterCreationInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the View associativity parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetViewAssociativityInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the View Referential parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetViewReferentialInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the View Referential Zoomable parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetViewReferentialZoomableInfo( CATSettingInfo* opInfo ) = 0;

    /**
     * Retrieves the state of the View Profile parameter.
     * @param oInfo
     *  Address of an object CATSettingInfo.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetViewProfileInfo( CATSettingInfo* opInfo ) = 0;

    /** 
     * Locks or unlocks the Standard parameter.
     * <br><b>Role</b>: Locks or unlocks the Standard parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetStandardLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Leader Associativity parameter.
     * <br><b>Role</b>: Locks or unlocks the Leader Associativity parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetLeaderAssociativityLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the GridDisplay parameter.
     * <br><b>Role</b>: Locks or unlocks the GridDisplay parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridDisplayLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the GridSnapPoint parameter.
     * <br><b>Role</b>: Locks or unlocks the GridSnapPoint parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridSnapPointLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the AllowDistortions parameter.
     * <br><b>Role</b>: Locks or unlocks the AllowDistortions parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAllowDistortionsLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the GridPrimarySpacing parameter.
     * <br><b>Role</b>: Locks or unlocks the GridPrimarySpacing parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridPrimarySpacingLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the GridSecondaryStep parameter.
     * <br><b>Role</b>: Locks or unlocks the GridSecondaryStep parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridSecondaryStepLock (unsigned char  iLocked ) = 0;

    /** 
     * Locks or unlocks the GridVPrimarySpacing parameter.
     * <br><b>Role</b>: Locks or unlocks the GridVPrimarySpacing parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridVPrimarySpacingLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the GridVSecondaryStep parameter.
     * <br><b>Role</b>: Locks or unlocks the GridVSecondaryStep parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetGridVSecondaryStepLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the UnderSet Tree Visu parameter.
     * <br><b>Role</b>: Locks or unlocks the UnderSet Tree Visu parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetUnderSetLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the UnderView Tree Visu parameter.
     * <br><b>Role</b>: Locks or unlocks the UnderView Tree Visu parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetUnderViewLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the UnderFeature Tree Visu parameter.
     * <br><b>Role</b>: Locks or unlocks the UnderFeature Tree Visu parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetUnderFeatureLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Save In CGR parameter.
     * <br><b>Role</b>: Locks or unlocks the Save In CGR parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetSaveInCGRLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Manipulator reference size parameter.
     * <br><b>Role</b>: Locks or unlocks the Manipulator reference size parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetManRefSizLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Manipulator zoom capability parameter.
     * <br><b>Role</b>: Locks or unlocks the Manipulator zoom capability parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetManZooCapLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Move After Creation parameter.
     * <br><b>Role</b>: Locks or unlocks the Move After Creation parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetMoveAfterCreationLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the View associativity parameter.
     * <br><b>Role</b>: Locks or unlocks the View associativity parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetViewAssociativityLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the View Referential parameter.
     * <br><b>Role</b>: Locks or unlocks the View Referential parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetViewReferentialLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the View Referential Zoomable parameter.
     * <br><b>Role</b>: Locks or unlocks the View Referential Zoomable parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetViewReferentialZoomableLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the View Profile parameter.
     * <br><b>Role</b>: Locks or unlocks the View Profile parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *  the locking operation to be performed
     *  <b>Legal values</b>:
     *  <br><tt>1 :</tt>   to lock the parameter.
     *  <br><tt>0:</tt>   to unlock the parameter.
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetViewProfileLock( unsigned char iLocked ) = 0;
};
#endif
