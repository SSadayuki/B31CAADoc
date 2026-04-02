// COPYRIGHT Dassault Systemes 2008
//===================================================================
//
// CATICciRefineTesselationOper.h
// Define the CATICciRefineTesselationOper interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//
//===================================================================
#ifndef CATICciRefineTesselationOper_H
#define CATICciRefineTesselationOper_H

/**
* @CAA2Level L0
* @CAA2Usage U3
*/


#include "CAACompositesHMAItf.h"
#include "CATBaseUnknown.h"
#include "CATDataType.h"
#include "CATMathConstant.h"
#include "CATLISTV_CATICciPliesGroup.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesHMAItf IID IID_CATICciRefineTesselationOper;
#else
extern "C" const IID IID_CATICciRefineTesselationOper ;
#endif

class CATCldPolygon;
class CATSoftwareConfiguration;
class CATListValCATISpecObject_var;
class CATISpecObject_var;
//------------------------------------------------------------------

/**
* Interface representing tesselate operator for composite design.
* <br><b>Role</b>: Operator runs a tesselation on ply groups objects provided they all have a same reference surface.
Operator generates  on tesselation result composites infos on triangles.
*
* @example
*  // example is optional
* <pre> 
* #include "CATSoftwareConfiguration.h" 
* #include "CATCldBody.h" 
* #include "CATCldPolygon.h" 
* #include "CATICciPliesGroup.h" 
*  .... 
*        CATSoftwareConfiguration * iConfig = new CATSoftwareConfiguration();
*        CATCldPolygon  * pCldPolygon = NULL; 
*        CATICciRefineTesselationOper * pRefineTess = NULL; 
*        CATCreateCciRefineTesselation ( iConfig,pRefineTess);
*        if (NULL!= pRefineTess){ 
*
*            pRefineTess -> SetPliesGroup         (_PlyGroupList) ; 
*            pRefineTess -> SetSurface            ( spRefSurface)  ; 
*            pRefineTess -> SetTessParameters     ( dSag,dStep, dAngle) ; 
*
*            //  CATISpecObject_var iCovAreaList ;
*            pRefineTess -> SetCoverageArea      (_iSpecAeraObject);
*            
*            // Run tesselation
*
*            // 0= /No infos on triangles  1=/Generates composites  triangles infos   
*            CATLONG32   iInfos      = 1; 
*            int         oDiagnostic = 0;
*            pRefineTess -> Run (iInfos  ,oDiagnostic);
*
*            // Ouput
*            pRefineTess -> GetResult (pCldPolygon) ;
*
*            delete pRefineTess; pRefineTess =NULL;
*            if (iConfig)  iConfig -> Release() ; iConfig = NULL; 
*          }
*
* ..... 
* @href CATCreateCciRefineTesselation, CATICciPliesGroup, CATICciZonesGroup, CATICciGrid
*/

class ExportedByCAACompositesHMAItf CATICciRefineTesselationOper: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

      // ------------------------------------------------------------------------------
      // PARAMETER 
      // ------------------------------------------------------------------------------
      
      // Required 
      // -----------------------------------------------------------------
      /**
       * Sets surface reference to tesselate. 
       * @param iSurface
       *    reference surface. 
       */ 
      virtual HRESULT SetSurface (const CATIMmiMechanicalFeature_var& iSurface) = 0;

      /** 
       * Sets Tesselate parameter.
       * <br>Default used are 10.0 , 50.0 , CATPIBY4 
       * @param iSag 
       *    sag .
       * @param iStep 
       *    step .
       * @param iMaxAngle  
       *    angle  .
       */
      virtual HRESULT SetTessParameters (double iSag, double iStep, double iMaxAngle = CATPIBY4) = 0;

      // Optionnal
      // -----------------------------------------------------------------
      /**
       * Sets list of input Plies Group on witch Plise are scan.
       *<br> Note : !! Every ply group has to have same reference surface , given to API previously by ::SetSurface 
       * @param iPliesGroupList
       *    List of ply group , in witch plies are scan and  used for tesselation.
       */ 
      virtual HRESULT SetPliesGroup (const CATLISTV(CATICciPliesGroup_var)& iPliesGroupList) = 0;

      /**
       * Sets a Grid or a Zone Group to be taken into account in tezselation.  
       * @param iCovArea
       *    Coverage area used tesselation.
       */
      virtual HRESULT SetCoverageArea (const CATIMmiMechanicalFeature_var& iCovArea) = 0;

      // ------------------------------------------------------------------------------
      // RUN 
      // ------------------------------------------------------------------------------

      /**
       * Runs  tesselation.
       * @param iInfos
       *   Used mode for tesselation:
       *   <br> iInfo =0 / Standard surface tesselation 
       *   <br> iInfo =1/  Generates composite tessellaton infos on triangles 
       */ 
      virtual HRESULT Run (CATLONG32 iInfos, int& oDiagnosis) = 0;


      // ------------------------------------------------------------------------------
      // RESULT  
      // ------------------------------------------------------------------------------
      // Ouput

      /**
       * Gets resulting tesselation data.
       * @param oCldPolygon 
       *   Tesselated polygone data structure generated , handling info for composite. 
       * <br> Note: infos are not persistaent on triangle , remains available and readable all along session only 
       */ 
      virtual HRESULT GetResult (CATCldPolygon*& oCldPolygon) = 0;

      // ------------------------------------------------------------------------------
      // DIAGNOSTIC 
      // ------------------------------------------------------------------------------

      /**
       * Gets diagnostic in case of ::Run returns oDiagnosis!= 0.
       * @param iDiag 
       *   Diagnostic. 
       * @param oListOfDiag 
       *   Data objects result diagnostic 
       */ 
       
      virtual HRESULT GetDiagnosis (int iDiag, CATLISTV(CATIMmiMechanicalFeature_var)& oListOfDiag) = 0;
	  //--------------------------------------------------------------------------------------------------
	//------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
	//--------------------------------------------------------------------------------------------------

	/**
	* @deprecated V5R26 
	* Use @see #SetSurface(CATIMmiMechanicalFeature_var&) method instead.
	* Sets surface reference to tesselate. 
	* @param iSurface
	*    reference surface. 
	*/ 
	virtual HRESULT SetSurface (const CATISpecObject_var& iSurface) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetPliesGroup(CATListV(CATICciPliesGroup_var)&) method instead.
	* Sets list of input Plies Group on witch Plise are scan.
	*<br> Note : !! Every ply group has to have same reference surface , given to API previously by ::SetSurface 
	* @param iPliesGroupList
	*    List of ply group , in witch plies are scan and  used for tesselation.
	*/ 
	virtual HRESULT SetPliesGroup (const CATListValCATISpecObject_var& iPliesGroupList) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetCoverageArea(CATIMmiMechanicalFeature_var&) method instead.
	* Sets a Grid or a Zone Group to be taken into account in tezselation.  
	* @param iCovArea
	*    Coverage area used tesselation.
	*/
	virtual HRESULT SetCoverageArea (const CATISpecObject_var& iCovArea) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetDiagnosis(int,CATListV(CATIMmiMechanicalFeature_var)&) method instead.
	* Gets diagnostic in case of ::Run returns oDiagnosis!= 0.
	* @param iDiag 
	*   Diagnostic. 
	* @param oListOfDiag 
	*   Data objects result diagnostic 
	*/ 

	virtual HRESULT GetDiagnosis (int iDiag, CATListValCATISpecObject_var& oListOfDiag) = 0;

     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------

     //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
     //
     //               N O N - C A A             M E T H O D S
     //
     //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
     /**
     * @nodoc
     * DO NOT USE.
     */
     virtual HRESULT SetSoftwareConfiguration (CATSoftwareConfiguration * iConfig) = 0;
};
//------------------------------------------------------------------
CATDeclareHandler(CATICciRefineTesselationOper, CATBaseUnknown);
#endif
