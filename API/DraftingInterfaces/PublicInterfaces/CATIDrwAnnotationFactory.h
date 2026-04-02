// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDrwAnnotationFactory_H
#define CATIDrwAnnotationFactory_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDrwDimDimension.h"
#include "CATIDrwCoordDimension.h"
#include "CATIDrwAreaFill.h"
#include "CATIDrwText.h"
#include "CATIDrwLeader.h"
#include "CATIDrwAxisLine.h"
#include "CATIDrwCenterLine.h"
#include "CATIDrwThread.h"
#include "CATIDrwSimpleText.h"
#include "CATIDrwBalloon.h"
#include "CATIDrwDatumFeature.h"
#include "CATIDrwDatumTarget.h"
#include "CATIDftDatumTarget.h"
#include "CATIDrwGDT.h"
#include "CATIView.h"
#include "CATIDrwRough.h"
#include "CATIDftArrow.h"
#include "CATIDrwPicture.h"
#include "CATIDftBalloon.h"
#include "CATIDftGDT.h"
#include "CATIDftLeader.h"
#include "CATIDftRough.h"
#include "CATDimSystemDefinition.h"

#include "CATLISTV_CATISpecObject.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATMathTransformation.h"

#include "CATLISTP_CATMathPoint2D.h"


#include "CATSymbolType.h"

class CATVectorImage;
class CATPixelImage;
class CATAnnAnnotable;
class CATAnnDirection;
class CATMathPoint2D;
class CATDimDefinition;
class CATIDimRepresentation_var;
class CATIDrwConnector;
class CATIUnknownList;
class CATIDrwDimSystem;
class CATIDrwMarkupable;
class CATListValCATBaseUnknown_var;

#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAnnotationFactory ;
#else
extern "C" const IID IID_CATIDrwAnnotationFactory ;
#endif

/**
* Interface to create annotation.
* <b>Role</b>: Use this interface to create annotation in the object which 
* implements this interface (i.e. a view).
*/
class ExportedByDraftingItfCPP CATIDrwAnnotationFactory : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
  * Creates an area fill.
  * Warning : If the pitch of the pattern is larger than the width
  * of the profile to fill, this one is thicken.
  * @param iGeomList
  *   Geometrical supports
  * @param iPattern
  *   Pattern to be applied
  * @param iName
  *   Name of the area fill
  */
  virtual CATIDrwAreaFill_var CreateDrwAreaFill(CATLISTV(CATISpecObject_var) &iGeomList,
    CATISpecObject_var iPattern,
    CATUnicodeString iName)=0;
  
  //------------------------------------------------------------------------------
  
  /**
  * @nodoc
  * Creates an area fill on points.
  */
  virtual CATIDrwAreaFill_var CreateDrwAreaFill(CATLISTP(CATMathPoint2D) &iPointList,
    CATISpecObject_var iPattern)=0;

  //------------------------------------------------------------------------------
  
  /**
  * @nodoc
  * Creates a dimension from selected elements.
  * @param iAnnSelections
  *   Array of pointers on CATAnnSelection objects
  * @param iAnnSelectionNbr
  *   Size of the iAnnSelections array
  * @param iDimType
  *   Type of the dimension to create
  * @param iPosition
  *   Position (2D) of the dimension's value in the view
  * @param iRepMode
  *   Optional imposed representation mode to take in account
  * @param iLdcDirection
  *   Optional imposed direction of the dimension line. 
  * @see CATAnnSelection,CATDrwDimType,CATDrwDimRepresentation
  */
  virtual CATIDrwDimDimension_var CreateDimension(CATAnnAnnotable ** iAnnSelections,
    int iAnnSelectionNbr,
    CATDrwDimType iDimType, 
    double *iPosition=NULL, 
    CATDrwDimRepresentation iRepMode=DrwDimAuto, 
    CATAnnDirection * iLdcDirection=NULL) = 0;

  /**
  *@nodoc
  * Creates a dimension from DrawItems associative to the DrawItems.
  * Caution : this means we are not directly linked with the 3D.
  * @param iAnnSelections
  * array of pointers on CATAnnSelection objects
  * @param iAnnSelectionNbr
  * size of the iAnnSelections array
  * @param iDimType
  * type of the dimension to create
  * @param iPosition
  * position (2D) of the dimension's value in the view
  * @param iRepMode
  * optional imposed representation mode to take in account
  * @param iLdcDirection
  * optional imposed direction of the dimension line. 
  */
  virtual CATIDrwDimDimension_var CreateDimensionOnGenItem(CATAnnAnnotable** iAnnSelections, 
    int iAnnSelectionNbr,
    CATDrwDimType iDimType,
    double *iPosition=NULL,
    CATDrwDimRepresentation iRepMode=DrwDimAuto,
    CATAnnDirection * iLdcDirection=NULL) = 0;
  //------------------------------------------------------------------------------
  


  /**
  * @nodoc
  * Creates a dimension from a 3D representation of a parameter or a constraint.
  * @param iDimType
  *   Type of the dimension to create.
  * @param iDimRep
  *   External dimensioning information (3D parameter or constraint) 
  *   represented by the dimension to create.
  * @param iDescribedObject
  *   The object described by <tt>iDimRep</tt>.
  * @param iObjectDimRepIndex
  *   The <tt>iDimRep</tt> index in the list of the other representations 
  *   relative to <tt>iDescribedObject</tt>.
  * @param iPosition
  *   Coordinates of the text location in the view.
  * @param iDimRepDimMathIndex
  *   The selected dimMath in the list contained by <tt>iDimRep</tt>.
  * @see CATDrwDimType,CATIDimRepresentation
  */
  virtual CATIDrwDimDimension_var   CreateDimension(CATDrwDimType iDimType,
    CATIDimRepresentation_var iDimRep,
    CATBaseUnknown_var iDescribedObject,
    int iObjectDimRepIndex=1,
    double * iPosition=NULL,
    int iDimRepDimMathIndex=1,
    CATMathTransformation * iTransfo = NULL) = 0;
  //------------------------------------------------------------------------------
  

  /**
  * Creates a coordinates dimension.
  * @param iIndication
  *   2D coordinates of the location of reference
  * @param iIndication
  *   External reference for the dimension
  * @param iTextLocation
  *   2D coordinates of the location of the dimension
  * @param oDrwCoordDimension
  *   Created dimension 
  * @param iContext3D
  *   3D coordinates are displayed if CATTrue 
  */
  virtual HRESULT CreateDrwCoordDimension( double *iIndication, 
    CATBaseUnknown * iReference, 
    double *iTextLocation, 
    CATIDrwCoordDimension_var &oDrwCoordDimension,
	CATBoolean iContext3D = CATFalse ) = 0; 
  
  //------------------------------------------------------------------------------
  /**
  *  @nodoc
  * Creates an empty Text.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftText
  */
  virtual CATIDrwText_var CreateDrwText() = 0;
  
  //------------------------------------------------------------------------------
  /**
  *  @nodoc
  * Creates a Text.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftText
  * @param ix,iy
  *   2D coordinates of the text
  * @param iStg
  *   Optional creation text
  */
  virtual CATIDrwText_var CreateDrwText(double ix, double iy, CATUnicodeString iStg="") = 0;
  
  //------------------------------------------------------------------------------
  /**
  *  @nodoc
  * Creates a Text.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftText or CATICutAndPastable#Paste
  * @param iTextToReplicate
  *   Text containing attribute links to replicate
  * @param iPt
  *   2D coordinates of the text (ipt[0], ipt[1])
  * @param iList
  *   To replicate attribute link
  */
  virtual CATIDrwText_var CreateDrwText(CATIDrwText_var &iTextToReplicate, double *iPt=NULL, 
                                        CATListValCATISpecObject_var *iList=NULL) = 0;

  //------------------------------------------------------------------------------
  /**
  *  @nodoc
  * Creates a Text.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftText
  * @param iMod
  *   -2 use Default, -1 no symbol define, 0->n leader symbol
  * @param oLead
  *   text leader 
  * @param ix,iy
  *   2D coordinates of the text
  * @param iStg
  *   Optional creation text
  */
  virtual CATIDrwText_var CreateDrwText(int iMod, CATIDrwLeader **oLead, double ix, double iy, 
                                        CATUnicodeString iStg="") = 0;
  
  //------------------------------------------------------------------------------
  /**
  *  @nodoc
  * Creates a Text.
  * @param oText
  *   The created text. Has to be released if SUCCEEDED
  * @param iATSDefinition
  *   A pointer to a reference text.
  * @param iMarkup
  *   An object to associate th new text with.
  * @param iSelectPoint
  *   Coordinates of a point in the view to decide to poisition of the new text
  */
  virtual HRESULT CreateDrwText(CATIDrwText **oText, CATIDrwText *iATSDefinition, 
                                CATIDrwMarkupable *iMarkup=NULL, double *iSelectPoint=NULL) = 0;

  //------------------------------------------------------------------------------
  /**
  * Creates an Axis Line.
  * @param iReference1
  *   First Reference Object (2D or Generated Geometry)
  * @param iReference2
  *   Second Reference Object (=NULL_var in case of Generated Geometry)
  */
  virtual CATIDrwAxisLine_var CreateDrwAxisLine(CATBaseUnknown_var iReference1,
    CATBaseUnknown_var iReference2 = NULL_var)=0;
  //------------------------------------------------------------------------------
  /**
  * Creates a Center Line.
  * @param iReference
  *   Reference Object (2D or Generated Geometry)
  * @param iDirection
  *   Direction Reference (2D or Generated Geometry)
  */
  virtual CATIDrwCenterLine_var CreateDrwCenterLine(CATBaseUnknown_var iReference,
    CATBaseUnknown_var iDirection = NULL_var)=0;
  
  //------------------------------------------------------------------------------
  /**
  * Creates a Thread.
  * @param iReference
  *   Reference Object (2D or Generated Geometry)
  * @param iDirection
  *   Direction Reference (2D or Generated Geometry)
  * @param iQuadrant
  *   Quadrant (equals 1 to 4)
  * @param iType
  *   Thread Type (CATDftTaped or CATDftThreaded)
  */
  virtual CATIDrwThread_var CreateDrwThread(CATBaseUnknown_var iReference,
    CATBaseUnknown_var iDirection = NULL_var,
    int iQuadrant = 1, CATDftThreadTypeEnum iType = CATDftTaped)=0;

  /**
  * @nodoc
  * Creates a featText.
  * iXPos               = 2D X coordinates of the location of the text
  * iYPos               = 2D Y coordinates of the location of the text
  * iJustification      = Justification of the text
  * iTextHeight         = Heigth of the text
  * iNbText             = Number of texts
  * iTextField          = Strings to create
  * iView               = View including the text
  */
  virtual CATIDrwSimpleText_var CreateDrwFeatText( double iXPos,
    double iYPos,
    int iJustification,
    double iTextHeight,
    int iNbText,
    CATUnicodeString iTextField[],
    CATIView_var iView = NULL_var ) = 0; 
  
    
  /**
  *  @nodoc
  * Creates a Balloon.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftBalloon
  * @param iLeadXPos,iLeadYPos
  *   2D coordinates of the location of the balloon leader
  * @param iXPos,iYPos
  *   2D coordinates of the location of the balloon
  * @param DatText
  *   Balloon text
  */
  
  virtual CATIDrwBalloon_var CreateBalloon (double iLeadXPos, 
    double iLeadYPos, 
    double iXPos, 
    double iYPos, 
    CATUnicodeString &DatText) = 0;
  
  /**
  * Creates a DatumFeature.
  * @param iLeadXPos,iLeadYPos
  *   2D coordinates of the location of the DatumFeature leader
  * @param iXPos,iYPos
  *   2D coordinates of the location of the DatumFeature
  * @param DatText
  *   Balloon text
  */
  virtual CATIDrwDatumFeature_var CreateDatumFeature (double iLeadXPos, 
    double iLeadYPos, 
    double iXPos, 
    double iYPos, 
    CATUnicodeString &iDatText) = 0;


  /** 
  * Create a Datum Target annotation.
  *
  * <br><b>Role</b>: Use this method to create a new instance of
  * Datum Target annotation, with a leader.
  *
  * @param iLeaderPos[2] [in]
  *   The coordinates of Datum Target leader. Those values are given in the view axis system
  *   and expressed in mm.
  * @param iPos[2] [in]
  *   The coordinates of Datum Target anchor point. Those values are given in the view axis system
  *   and expressed in mm.
  * @param oDatumTarget [out, CATBaseUnknown#Release]
  *   @preconsition oDatumTarget must not be NULL
  *   A pointer that will be valuated with the newly created instance of Datum Target.
  *   Do not forget to Release this pointer afterwards.
  *
  * @return
  *   <code>S_OK</code> A new instance of Datum Target has been successfully created. 
  *   <code>E_INVALIDARG</code> At least one precondition has been fullfilled.
  *   <code>E_UNEXPECTED</code> An expected error occured.
  *
  */
  virtual HRESULT CreateDftDatumTarget(const double iLeaderPos[2],
                                       const double iPos[2],
                                       CATIDftDatumTarget **oDatumTarget) = 0;

  /**
  * @deprecated V5-6R2016
  * Use CreateDftDatumTarget
  */
  virtual CATIDrwDatumTarget_var CreateDatumTarget (double iLeadXPos, double iLeadYPos, 
                                                    double iXPos, double iYPos,
                                                    CATUnicodeString &iUpText,
                                                    CATUnicodeString &iLowText,
                                                    int iHasDiameter) = 0;

  /**
  *  @nodoc
  * Creates an empty GDT.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftGDT
  */
  virtual CATIDrwGDT_var CreateGDT () = 0;
  
  /**
  *  @nodoc
  * Creates an empty GDT with a Leader.
  * DEPRECATED method. see CATIDrwAnnotationFactory#CreateDftGDT
  * @param iLeadXPos,iLeadYPos
  *   2D coordinates of the location of the DatumFeature leader
  */
  virtual CATIDrwGDT_var CreateGDT (double iLeadXPos, double iLeadYPos) = 0;

  /**
  * @nodoc 
  *  This method is now replaced by @href CATIDrwAnnotationFactory#CreateDftRoughness
  * Creates a roughness symbol.
  * <br><b>Notes</b>:
  * <pre><tt>
  *      TextField [0]       TextField [3]
  *                       /-----------
  *      TextField [1]   /   TextField [4]
  *      TextField [2] \/    TextField [5]
  * 
  * </tt></pre>
  */  
  virtual CATIDrwRough_var CreateDrwRoughness ( double XPos, double YPos, 
                                                CATUnicodeString TextField [6] ) = 0 ;
  
 
  
  /**
  * @nodoc 
  *  This method is now replaced by @href CATIDrwAnnotationFactory#CreateDftRoughness
  * Creates a roughness symbol.
  * <br><b>Notes</b>:
  * <pre><tt>
  *      TextField [0]       TextField [3]
  *                       /-----------
  *      TextField [1]   /   TextField [4]
  *      TextField [2] \/    TextField [5]
  * 
  *             !    1    !    2    !    3    !    4    !
  * RoughType   !         !         !         !         !
  *             ! \    /  ! \----/  ! \    /  ! \----/  !
  *             !  \  /   !  \  /   !  \ O/   !  \ O/   !
  *             !   \/    !   \/    !   \/    !   \/    !
  * 
  * X = RoughMode ( 1=" ", 2="M", 3="C", 4="R", 
  *                 5="P", 6="X", 7="=", 8="OrthoGonal Symbol" )
  * 
  * RoughContact = 1   /------
  *                  \/
  * RoughContact = 2   O-----   
  *                  \/
  * RoughContact = 3   /   
  *                  \/
  * RoughContact = 4   O   
  *                  \/
  * </tt></pre>
  */  
  virtual CATIDrwRough_var CreateDrwRoughness ( double XPos, double YPos, 
    double TextHeight ,
    CATUnicodeString TextField [6] ,
    int    RoughType ,
    int    RoughContact ,
    int    RoughMode ) = 0 ;
  
  /**
  * @nodoc
  * Creates a dimension from selected elements.
  * @param iAnnSelections
  *   Array of pointers on CATAnnSelection objects
  * @param iAnnSelectionNbr
  *   Size of the iAnnSelections array
  * @param iDimType
  *   Type of the dimension to create
  * @param iPosition
  *   Position (2D) of the dimension's value in the view
  * @param iRepMode
  *   Optional imposed representation mode to take in account
  * @param iLdcDirection
  *   Optional imposed direction of the dimension line
  * @see CATAnnSelection,CATDrwDimType,CATDrwDimRepresentation
  */
  virtual CATIDrwDimDimension_var CreateCumulateDimension(CATAnnAnnotable ** iAnnSelections,
    int iAnnSelectionNbr,
    CATDrwDimType iDimType, 
    double *iPosition=NULL, 
    CATDrwDimRepresentation iRepMode=DrwDimAuto, 
    CATAnnDirection * iLdcDirection=NULL) = 0;

  /**
  *@nodoc
  * Creates a dimension from DrawItems associative to them.
  * @param iAnnSelections
  * array of pointers on CATAnnSelection objects
  * @param iAnnSelectionNbr
  * size of the iAnnSelections array
  * @param iDimType
  * type of the dimension to create
  * @param iPosition
  * position (2D) of the dimension's value in the view
  * @param iRepMode
  * optional imposed representation mode to take in account
  * @param iLdcDirection
  * optional imposed direction of the dimension line. 
  */
  virtual CATIDrwDimDimension_var CreateCumulateDimensionOnGenItem(CATAnnAnnotable** iAnnSelections, 
    int iAnnSelectionNbr,
    CATDrwDimType iDimType,
    double *iPosition=NULL,
    CATDrwDimRepresentation iRepMode=DrwDimAuto,
    CATAnnDirection * iLdcDirection=NULL) = 0;

  /**
  *@nodoc
  */
  virtual  CATIDrwDimDimension_var	CreateDimension(CATDrwDimType iDimType, double* iLocationPt,
    IUnknown_var iGeometry1, double * iPointOnGeometry1=NULL, 
    IUnknown_var iGeometry2=NULL_var, double * iPointOnGeometry2=NULL,
    IUnknown_var iGeometry3=NULL_var, double * iPointOnGeometry3=NULL,
    CATDrwDimRepresentation iRepMode=DrwDimAuto) = 0;



  /**
  * Creates a dimension from selected elements.
  * @param iDimElements
  *   Array of pointers on the elements to be dimensioned
  *   <br> Available elements :
  *    <ul>
  *    <li>sketcher geometry.
  *    <li>geometry generated from 3D.
  *    </ul>
  * @param iSelectionPoints
  *   Array of pointers on the selection points of each element of iDimElements.
  * @param iDimType
  *   Type of the dimension to create
  * @param iDimParameters
  *   Basic parameters of the dimension
  * @param oppCreatedDimension
  *   Created dimension
  * @param iLdcDirection
  *   Optional reference element for the direction of the dimension line.
  *   Available if iDimParameters->Orientation is set to DrwDimUserDefined.
  * @param iBuildDimOrder
  *   Optional suppressing the CATISpecObject::Build on dimension (default: build applyed)
  * @see CATIUnknownList,CATDrwDimType,CATDimDefinition
  */
    virtual HRESULT CreateDimension(CATIUnknownList * ipiDimElements,
      double ** ippSelectionPoints,
      CATDrwDimType iDimType,
      CATDimDefinition * ipDimParameters,
      CATIDrwDimDimension ** oppCreatedDimension,
      IUnknown* ipiLdcDirection=NULL, 
      int iBuildDimOrder=1) = 0;
   

  /**
  * @nodoc
  *
  * Creates a drawing arrow.
  *
  * @param ArrowStyle
  *   Symbol of the arrow head.
  * @param iBomPoint
  *   Point coordinates of the arrow tail.
  * @param iHeadPoint
  *   Point coordinates of the arrow head.
  * @param oArrow
  *   Pointer on the created arrow.
  * @param iBomPosRef
  *   The target element of the arrow tail.
  * @param iHeadPosRef
  *   The target element of the arrow head.
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
  virtual HRESULT CreateArrow ( int ArrowStyle, 
                                double iBomPoint [2] , 
                                double iHeadPoint [2], 
                                CATIDftArrow **oArrow, 
                                const IUnknown *iBomPosRef  = NULL, 
                                const IUnknown *iHeadPosRef = NULL ) = 0; 

  
  /**
  * Creates a drawing picture.
  *
  * @param iPixelImage
  *   The pixel image on which the picture is based.
  * @param iXPos
  *   X coordinate of bottom left corner.
  * @param iYPos
  *   Y coordinate of bottom left corner.
  * @param oPicture
  *   Pointer on the created picture.
  * @param iAggregate
  *   Should the picture be aggregated in the picture list ?
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
   virtual HRESULT CreatePicture( CATPixelImage * iPixelImage, 
                                 double iXPos, 
                                 double iYPos, 
                                 CATIDrwPicture ** oPicture,
                                 CATBoolean iAggregate = TRUE ) = 0;
  /**
  * Creates a drawing picture.
  *
  * @param iVectorImage
  *   The vector image on which the picture is based.
  * @param iXPos
  *   X coordinate of bottom left corner.
  * @param iYPos
  *   Y coordinate of bottom left corner.
  * @param oPicture
  *   Pointer on the created picture.
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
   virtual HRESULT CreatePicture( CATVectorImage * iVectorImage, 
                                 double iXPos, 
                                 double iYPos, 
                                 CATIDrwPicture ** oPicture ) = 0;

  /**
  * Creates a drawing arrow.
  *
  * @param iHeadPoint
  *   Point coordinates of the arrow head.
  * @param iHeadPoint
  *   Point coordinates of the arrow head.
  * @param iTailPoint
  *   Point coordinates of the arrow tail.
  * @param oArrow
  *   Pointer on the created arrow.
  * @param iHeadSymbol
  *   Symbol of the arrow head.
  * @param iTailSymbol
  *   Symbol of the arrow tail.
  * @param iHeadTarget
  *   The target element of the arrow head.
  * @param iTailTarget
  *   The target element of the arrow tail.
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
  virtual HRESULT CreateDftArrow ( const double iHeadPoint[2],
                                   const double iTailPoint[2],
                                   CATIDftArrow** oArrow,
                                   const int iHeadSymbol = OPEN_ARROW,
                                   const int iTailSymbol = NOTUSED,
                                   IUnknown* iHeadTarget = NULL,
                                   IUnknown* iTailTarget = NULL) = 0; 

  /**
  * Creates a drawing balloon.
  *
  * @param iLeaderPos
  *   View coordinates of the location of the balloon leader.
  * @param iPos
  *   View coordinates of the location of the balloon.
  * @param iText
  *   The initialization string.
  * @param oBalloon
  *   Pointer on the created balloon.
  * </dl>
  * @return
  * <dl>
  * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
  * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
  * </dl>
  */
  virtual HRESULT CreateDftBalloon ( const double iLeaderPos[2],
                                     const double iPos[2],
                                     const CATUnicodeString &iText,
                                     CATIDftBalloon** oBalloon) = 0;


  /**
  * Creates an empty GDT.
  *
  * @param iMod
  *   -2 no Leader, -1 automatic symbol, 0->n leader symbol.
  *   In each case, if a default exist, it is applied.
  * @param iLeaderPos
  *   View coordinates of the location of the GDT leader.
  * @param iGDTPos
  *   View coordinates of the location of the GDT.
  * @param oLead
  *   created leader.
  * @param oGDT
  *   created GDT.
  */
  virtual HRESULT CreateDftGDT(const int iMod,
                               const double iLeaderPos[2],
                               const double iGDTPos[2],
                               CATIDftLeader **oLead,
                               CATIDftGDT **oGDT) = 0;

  /**
    * Creates a roughness symbol.
    * @param iPosition 
    *   [in] The position where to create the roughness symbol in view coordinates
    * @param oRough [out, IUnknown#Release]
    *   [out] The created Roughness symbol
    */
  virtual HRESULT CreateDftRoughness(const double iPosition[2], CATIDftRough **oRough) = 0;
  //------------------------------------------------------------------------------
  


  /**
  * @nodoc
  * Creates a dimension from a 3D representation of a parameter or a constraint.
  * @param iDimType
  *   Type of the dimension to create.
  * @param iDimRep
  *   External dimensioning information (3D parameter or constraint) 
  *   represented by the dimension to create.
  * @param iDescribedObject
  *   The object described by <tt>iDimRep</tt>.
  * @param iObjectDimRepIndex
  *   The <tt>iDimRep</tt> index in the list of the other representations 
  *   relative to <tt>iDescribedObject</tt>.
  * @param iPosition
  *   Coordinates of the text location in the view.
  * @param iDimRepDimMathIndex
  *   The selected dimMath in the list contained by <tt>iDimRep</tt>.
  * @see CATDrwDimType,CATIDimRepresentation
  */
  virtual CATIDrwDimDimension_var   CreateDimension(CATDrwDimType iDimType,
      CATIDimRepresentation_var iDimRep,
      CATBaseUnknown_var iDescribedObject,
      CATBaseUnknown_var iSecondObject=NULL,
      CATIProduct* iProduct=NULL,
      int iObjectDimRepIndex=1,
      double * iPosition=NULL,
      int iDimRepDimMathIndex=1,
      CATMathTransformation * iTransfo=NULL,
      CATISpecObject * iSketchElement=NULL) = 0;


  /**
    * Creates a text.
    * @param iPosition 
    *   [in] The position where to create the text in view coordinates
    * @param oText [out, IUnknown#Release]
    *   [out] The created Text
    */
  virtual HRESULT CreateDftText(const double iPosition[2], CATIDftText **oText) = 0;


  /**
  * Creates a dimension system.
  * <br><b>Role</b> Creates a dimension system from the dimension given in input argument. To add other dimensions to the
  * dimension system use @href CATIDrwDimSystem#AddDimension method. At the end of the dimension system creation 
  * use @href CATIDrwDimSystem#LineUp method to take into account the dimension system parameters managing the line-up.
  * @param ipDimension [in]
  *        First dimension to aggregate in the system:
  *        This dimension is  a leading part in the dimension system. It gives the direction of the dimension system.
  *        <br><b>PreCondition</b>: Only distance dimension or angular dimension are available.
  *        <br><b>PreCondition</b>: Half dim mode is not authorized.
  * @param iSystemDef [in]
  *        Some usefull parameters to set at creation.
  * @param oSystem [out, CATBaseUnknown#Release]
  *        Returned dimension system
  */
  virtual HRESULT CreateDimSystem(CATIDrwDimDimension * ipDimension,
                                  CATDimSystemDefinition * iSystemDef,
                                  CATIDrwDimSystem ** oSystem) = 0;
  } ;

CATDeclareHandler( CATIDrwAnnotationFactory, CATBaseUnknown ) ;

#endif


