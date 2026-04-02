#ifndef CATHybProject_h
#define CATHybProject_h

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/ 

#include "CATIACGMLevel.h" // automatic treatment EB_2014_04_16
#include "CATHybOperatorImp.h"
#include "CATCGMOperatorDebug.h"
#include "ListPOfCATCell.h"
#include "ListPOfCATFace.h"
#include "CATListOfDouble.h"
#include "CATListOfInt.h"
#include "BOHYBOPELight.h"
#include "CATIAV5Level.h"

/** @nodoc @nocgmitf */
ExportedByBOHYBOPELight CATHybProject* CATCreateTopPoseSur(CATGeoFactory*           iFactory,
  CATTopData*              iData,
  CATBody*                 iBodyToProject,
  CATBody*                 iBodySupport);
   
/** @nocgmitf */
ExportedByBOHYBOPELight CATHybProject * CATCreateTopProject(CATGeoFactory*           iFactory,
  CATTopData*              iData,
  CATBody*                 iBodyToProject,
  CATBody*                 iBodySupport,
  CATMathDirection*        iDirection);
   

class CATExtHybProject;

/**
* Class defining the operator that projects a body on another one.
* It follows the general frame of all operator and satisfies to the smart mechanism: the
* input bodies are not modified. A new resulting body is created, 
* possibly sharing data with the input bodies.
*<ul>
* <li>CATHybProject is created with the <tt>CATCreateTopProject</tt> global function.
* It must be
* directly deleted with the usual C++ <tt>delete</tt> operator after use.
* It is not streamable. 
* <li>The intersection can be restricted on a given domain on each body with the methods
* <tt>SetFirstDomainToIntersect</tt> and <tt>SetSecondDomainToIntersect</tt>
*<li>The result is accessed with the <tt>GetResult</tt> method. If you do not want 
* to keep the resulting body, use the @href CATICGMContainer#Remove method to remove it from the 
* geometric factory.
*</ul>
* @see CATCreateTopProject
*/
class ExportedByBOHYBOPELight CATHybProject : public CATHybOperatorImp
{
   
   friend ExportedByBOHYBOPELight CATHybProject* CATCreateTopPoseSur(CATGeoFactory*           iFactory,
      CATTopData*              iData,
      CATBody*                 iBodyToProject,
      CATBody*                 iBodySupport);
   
   friend ExportedByBOHYBOPELight CATHybProject * CATCreateTopProject(CATGeoFactory*           iFactory,
      CATTopData*              iData,
      CATBody*                 iBodyToProject,
      CATBody*                 iBodySupport,
      CATMathDirection*        iDirection);
   
  CATCGMVirtualDeclareClass(CATHybProject);
protected :
   
   /** @nodoc */
   CATHybProject(CATGeoFactory* iFactory, CATTopData* iTopData, CATExtHybProject* iExtensible,
      CATBody* iBodyToProject, CATBody* iBodySupport, CATMathDirection* iDirection);	

public :

   //  Destructor
   ~CATHybProject();     

   /** @nodoc  */
   #ifdef CATIACGMV5R20
   #define CATHybProjectDefineRunOperator
   #endif
   // (Empty macro in customer release mode; no effect on generated code)
    #ifdef CATCGMOperatorDebugMode
   #define CATHybProjectDefineRunOperator
    #endif
   #ifdef CATHybProjectDefineRunOperator
   virtual int Run() ;
  /** @nodoc @nocgmitf */
   virtual int RunOperator() ;
   #endif

   /**
    * Defines which domain of the first body must be projected.
    * @param iDomain
    * The pointer to the domain to project.
    */
   void SetDomainToProject(CATDomain* iDomain); 
   /**
    * Defines on which domain of the second body the projection is done.
    * @param iDomain
    * The pointer to the domain on which to project.
    */
   void SetDomainSupport(CATDomain* iDomain);   
   
   /**
    * Returns the maximum distance of projection for a given domain of the resulting body.
    * @param iDomainOfResultBody
    * The pointer to the domain.
    * @return
    * The distance.
    */
   double GetDistance(CATDomain* iDomainOfResultBody);
   
   // treatment with Suppress Flatten domain of the Result (to use before run)
   // default value is : 0 --> No Suppression of the Result
   //                    1 --> Domain in wich all cells result from flatten operation are eliminated ...
   /** @nodoc */
   void SetSuppressFlattenDomainMode(int yes_or_no=1);
   /** @nodoc */
   int  GetSuppressFlattenDomainMode() const;

   // In case LayDown Wire On Shell, we can precise the faces on the support
   // default is : all the faces are take into account
   /** 
   * Specifies the faces of the support body on which the projection should be done.
   * <br> By default, all faces are taken into account.
   * @param iCoveredFaces
   * The faces on which the projection should be done.
   */
   void SetCoveredFaces(CATLISTP(CATFace) & iCoveredFaces);
   /** @nodoc */
   int IsCoveredFacesActive() const;

    /**
    * Specify a maximum distance for the solution(s) to be kept. By default all the solutions
    * are returned.
    * @param iMaxDistance
    * The maximum distance.
    */
   void SetMaxDistanceValue(double iMaxDistance);
   /** @nodoc */
   double GetMaxDistanceValue() const;
   /** @nodoc */
   int IsMaxDistanceActive() const;  
   
   /** @nodoc */
   CATHybProjectionContext GetContext();
   /** @nodoc */
   void SetContext(CATHybProjectionContext iContext);

   /** @nodoc */
   void        SetSimplificationMode(CATBoolean iSimplification);
   /** @nodoc */
   CATBoolean  GetSimplificationMode() const;

   /** @nodoc  */
   CATBoolean IsCompletelyLaidDown();

   /** @nodoc  */
   inline CATExtHybProject* GetHybProjectExtensible() const;

#ifdef CATIACGMV5R17
   /** @nodoc */
   void SetNewSmoothing(CATLONG32 iSmooth);	
    /** @nodoc */
   void GetNewSmoothing(CATLONG32 & oSmooth);
  /** @nodoc */
   void SetOutputWireCleaning3DMode(CATLONG32 iOutputWireCleaning3DMode);	
    /** @nodoc */
   void GetOutputWireCleaning3DMode(CATLONG32 & oOutputWireCleaning3DMode);

#endif
 
#ifdef CATIACGMR419CAA
   /** @nodoc 
   * Set the extrapolation mode 
   * for the extrapolation of the projection result wire on the SupportSurface
   * @param iExtrapolationMode
   * <br><b>Legal values</b>:
   * <dl><dt><tt>0</tt><dd> No Extrapolation. 
   *     <dt><tt>1</tt><dd> Extrapolation in tangency continuity. </dl>
   *     <dt><tt>1</tt><dd> Extrapolation in curvature continuity. </dl>
   */
  void SetExtrapolationMode(short iExtrapolationMode = 0);

  /** @nodoc 
   * Get the extrapolation mode 
   * for the extrapolation of the projection result wire on the SupportSurface
   * @param iExtrapolationMode
   * <br><b>Legal values</b>:
   * <dl><dt><tt>0</tt><dd> No Extrapolation. 
   *     <dt><tt>1</tt><dd> Extrapolation in tangency continuity. </dl>
   *     <dt><tt>1</tt><dd> Extrapolation in curvature continuity. </dl>
   */
  void GetExtrapolationMode(short &oExtrapolationMode);
#endif
};

/** @nodoc  */
inline CATExtHybProject* CATHybProject::GetHybProjectExtensible() const
{
   if (!_Extensible) CATThrowForNullPointerReturnValue(NULL);
   return (CATExtHybProject*) _Extensible;
}

#endif
