/* -*-c++-*- */
#ifndef CATIGSMUseLoft_H
#define CATIGSMUseLoft_H

// -----------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1999
// -----------------------------------------------------------------
//

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATGSMOrientation.h"
#include "CATListOfInt.h"
#include "CATGSMLoftDef.h"
#include "CATGSMCouplingDef.h"
#include "CATGSMContextDef.h"
#include "CATGSMTangentDef.h"
#include "CATGSMCanonicalDetectionDef.h"
#include "CATGSMClosingPointDef.h"
#include "CATGSMContinuityDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseLoft;
#else
extern "C" const IID IID_CATIGSMUseLoft;
#endif


class CATICkeParm_var;
class CATICkeLaw_var;

/**
 * Interface to loft surface feature.
 * <b>Role</b>: Allows you to access data of the Loft feature.
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of Volume context has not effect 
 * <br> 
 * @see CATIGSMUseFactory#CreateLoft
 */

class ExportedByCATGSMUseItf CATIGSMUseLoft : public CATBaseUnknown
{
   CATDeclareInterface;

   public: 
   
     /**
      * Adds section to the lofted surface.
      *   @param iSection
      *     section curve to be added
      *   @param iAddType
      *     type of adding : 
      *     CATGSMLoftAdd, iSection will be added at the end of 
      *     the section list.
      *     CATGSMLoftAddAfter, iSection will be added after iSectionRef.
      *     CATGSMLoftAddBefore, iSection will be added before iSectionRef.
      *        @see CATGSMLoftAddType
      *   @param iSectionRef
      *     section curve used as a reference for CATGSMLoftAddAfter and 
      *     CATGSMLoftAddBefore adding type
      */
      virtual HRESULT AddSection( const CATIMmiMechanicalFeature_var iSection
  , const CATGSMLoftAddType iAddType = CATGSMLoftAdd
  , const CATIMmiMechanicalFeature_var iSectionRef = NULL_var
  ) = 0;
  
     /**
      * Removes section from the lofted surface.
      *   @param iSection
      *      section curve to be removed, if this section has a closing point
      *      it will be removed too.
      */
      virtual HRESULT RemoveSection( const CATIMmiMechanicalFeature_var iSection
  ) = 0;
  
     /**
      * Modifies the curve of section from the lofted surface.
      *   @param iSection
      *      section curve to be replaced.
      *   @param iNewSection
      *      section curve, will replace iSection.
      */
      virtual HRESULT ModifySectionCurve(const CATIMmiMechanicalFeature_var iSection
  , const CATIMmiMechanicalFeature_var iNewSection
  ) = 0;
  
     /**
      * Modifies the orientation of the curve of a section from the lofted surface.
      *   @param iSection
      *      section curve to be replaced.
      *   @param iOrient
      *      orientation of the section curve :
      *        @see CATGSMOrientation
      */
      virtual HRESULT ModifySectionOrient(const CATIMmiMechanicalFeature_var iSection
  , CATGSMOrientation iOrient = CATGSMSameOrientation
  ) = 0;
  
     /**
	  * @deprecated R214 
	  * Use @href CATIGSMUseLoft#SetSectionSupport
      * Sets a support surface to a section from the lofted surface.
      * The section must be the start section or the end section of the loft. 
      *   @param iSection
      *      section curve of the section to which the support will be added
      *   @param iSupportSection
      *      support surface to be added, the curve must be layed on the surface.
      */
      virtual HRESULT SetSectionTangent(const CATIMmiMechanicalFeature_var iSection
  , const CATIMmiMechanicalFeature_var iSupportSection) = 0;

     /**
	  * @deprecated R214 
	  * Use @href CATIGSMUseLoft#RemoveSectionSupport
      * Removes the support surface of a section from the lofted surface.
      * The section must be the start section or the end section of the loft. 
      *   @param iSection
      *      section curve of the section to which the support will be removed.
      */
      virtual HRESULT RemoveSectionTangent(const CATIMmiMechanicalFeature_var iSection
  ) = 0;
  
     /**
      * Sets a computed tangent surface to the start section or end section.
      *   from the lofted surface.
      * The section must have been set as a face. 
      *   @param iSection
      *      section curve of the section to which the tangent will be computed.
      *   @param iCompSectionTangent
      *      section tangent is computed or not,  
      *        @see CATGSMComputedTangentType
      */
      virtual HRESULT SetCompSectionTangent(const CATIMmiMechanicalFeature_var iSection
         , const CATGSMComputedTangentType iCompSectionTangent
         )=0;

     /**
      * Sets a closing point to a section from the lofted surface.
      * The curve section must be closed curve. 
      *   @param iSection
      *      section curve of the section to which the point will be added.
      *   @param iPointSection
      *      point to be added
      */
      virtual HRESULT SetSectionPoint(const CATIMmiMechanicalFeature_var iSection
  , const CATIMmiMechanicalFeature_var iPointSection
  ) = 0;   
 
     /**
      * Removes a closing point of a section from the lofted surface.
      * The curve section must be closed curve. 
      *   @param iSection
      *      section curve of the section to which the point will be removed.
      */
      virtual HRESULT RemoveSectionPoint(const CATIMmiMechanicalFeature_var iSection
  ) = 0;
  
     /**
	  * @deprecated R214 
	  * Use @href CATIGSMUseLoft#GetAllSectionsAndSupports
      * Gets informations about the sections of the lofted surface.
      *   @param oSections
      *      list of the section curves.
      *   @param oOrientation
      *      list of the orientations of the section curves.
      *   @param oPoint
      *      list of the closing points corresponding to the section curves.
      *   @param oStartSectionSupport
      *      support surface at start section.
      *   @param oEndSectionSupport
      *      support surface at end section.
      */
      virtual HRESULT GetAllSections( CATLISTV(CATIMmiMechanicalFeature_var) & oSections
  , CATListOfInt & oOrientation
  , CATLISTV(CATIMmiMechanicalFeature_var) & oPoint
  , CATIMmiMechanicalFeature_var & oStartSectionSupport
  , CATIMmiMechanicalFeature_var & oEndSectionSupport
  )= 0;
  
	  /**
      * Gets informations about the sections of the lofted surface.
      *   @param oSections
      *      list of the section curves.
      *   @param oOrientation
      *      list of the orientations of the section curves.
      *   @param oPoint
      *      list of the closing points corresponding to the section curves.
      *   @param oStartSectionSupport
      *      support surface at start section.
      *   @param oEndSectionSupport
      *      support surface at end section.
      */
      virtual HRESULT GetAllSectionsAndSupports( CATLISTV(CATIMmiMechanicalFeature_var) & oSections
  , CATListOfInt & oOrientation
  , CATLISTV(CATIMmiMechanicalFeature_var) & oPoint
  , CATIMmiMechanicalFeature_var & oStartSectionSupport
  , enum CATGSMContinuity &oStartContinuity
  , CATIMmiMechanicalFeature_var & oEndSectionSupport
  , enum CATGSMContinuity &oEndContinuity
  )= 0;

     /**
      * Gets if the tangent is a computed tangent surface to the start section or end section 
      *   from the lofted surface.
      * The section must have been set as a face. 
      *   @param oStartCompSectionTangent
      *      start section tangent is computed or not,  
      *        @see CATGSMComputedTangentType
      *   @param oEndCompSectionTangent
      *      end section tangent is computed or not,  
      *        @see CATGSMComputedTangentType
      */
      virtual HRESULT GetCompSectionTangent(CATGSMComputedTangentType & oStartCompSectionTangent
         , CATGSMComputedTangentType & oEndCompSectionTangent
         ) = 0;

     /**
      * Sets the spine to the lofted surface.
      *   @param iSpineType
      *      type of spine. 
      *      @see CATGSMLoftSpineType
      *   @param iSpine
      *      curve to be added as a spine, if iSpineType = CATGSMLoftUserSpine
      */
      virtual HRESULT SetSpine(const CATGSMLoftSpineType iSpineType = CATGSMLoftCalculatedSpine
  , const CATIMmiMechanicalFeature_var iSpine = NULL_var
  ) = 0;  

     /**
      * Gets the spine of the lofted surface.
      *   @param oSpineType
      *      type of spine.
      *      @see CATGSMLoftSpineType
      *   @param oSpine
      *      curve used as a spine, if iSpineType = CATGSMLoftUserSpine
      */
      virtual HRESULT GetSpine( int & oSpineType, CATIMmiMechanicalFeature_var & oSpine
  ) = 0;
  
     /**
      * Adds guide to the lofted surface.
      *   @param iGuide
      *     guide curve to be added
      *   @param iAddType
      *     type of adding : 
      *     CATGSMLoftAdd, iSection will be added at the end of 
      *     the guide list.
      *     CATGSMLoftAddAfter, iGuide will be added after iGuideRef.
      *     CATGSMLoftAddBefore, iGuide will be added before iGuideRef.
      *        @see CATGSMLoftAddType
      *   @param iGuideRef
      *     guide curve used as a reference for CATGSMLoftAddAfter and 
      *     CATGSMLoftAddBefore adding type
      */
      virtual HRESULT AddGuide( const CATIMmiMechanicalFeature_var iGuide
  , const CATGSMLoftAddType iAddType = CATGSMLoftAdd
  , const CATIMmiMechanicalFeature_var iGuideRef = NULL_var
  ) = 0;
  
     /**
      * Modifies the curve of a guide from the lofted surface.
      *   @param iGuide
      *      guide curve to be replaced.
      *   @param iNewGuide
      *      guide curve, will replace iGuide.
      */
      virtual HRESULT ModifyGuideCurve( const CATIMmiMechanicalFeature_var iGuide
  ,  const CATIMmiMechanicalFeature_var iNewGuide
  ) = 0;  
  
     /**
      * Removes guide from the lofted surface.
      *   @param iGuide
      *      guide curve to be removed, if this guide has a support surface 
      *      it will be removed too.
      */
      virtual HRESULT RemoveGuide( const CATIMmiMechanicalFeature_var iGuide
  ) = 0;
  
     /**
	  * @deprecated R214 
	  * Use @href CATIGSMUseLoft#SetGuideSupport
      * Sets a support surface to a guide from the lofted surface.
      *   @param iGuide
      *      guide curve of the guide to which the support will be added
      *   @param iSupportGuide
      *      support surface to be added, the curve must be layed on the surface.
      */
      virtual HRESULT SetGuideTangent(const CATIMmiMechanicalFeature_var iGuide
  , const CATIMmiMechanicalFeature_var iSupportGuide
  ) = 0; 
  
     /**
	  * @deprecated R214 
	  * Use @href CATIGSMUseLoft#RemoveGuideSupport
      * Removes a support surface of a guide from the lofted surface.
      *   @param iGuide
      *      guide curve of the guide to which the surface will be removed.
      */
      virtual HRESULT RemoveGuideTangent(const CATIMmiMechanicalFeature_var iGuide
  ) = 0;
  
     /**
      * Gets informations about the guides of the lofted surface.
      *   @param oGuides
      *      list of the guides curves.
      */
      virtual HRESULT GetAllGuides( CATLISTV(CATIMmiMechanicalFeature_var) & oGuides
  ) = 0;

     /**
      * @deprecated R214 
      * Use @href CATIGSMUseLoft#GetAllGuidesAndSupports
      * Gets informations about the guides of the lofted surface.
      *   @param oGuides
      *      list of the guides curves.
      *   @param oGuideSupports
      *      list of the supports corresponding to the guides curves.
      */
      virtual HRESULT GetAllGuides( CATLISTV(CATIMmiMechanicalFeature_var) & oGuides
 , CATLISTV(CATIMmiMechanicalFeature_var) & oGuideSupports
  ) = 0;

	  /**
      * Gets informations about the guides of the lofted surface.
      *   @param oGuides
      *      list of the guides curves.
      *   @param oGuideSupports
      *      list of the supports corresponding to the guides curves.
	  *   @param oContinuities
	  *		 list of the contintuities of the guide curves with the supports 
	  *		 (0 means no continuity, 1 means CATGSMContinuity_Tangency and 2 means CATGSMContinuity_Curvature).
	  *	
      */
      virtual HRESULT GetAllGuidesAndSupports( CATLISTV(CATIMmiMechanicalFeature_var) & oGuides
 , CATLISTV(CATIMmiMechanicalFeature_var) & oGuideSupports
 , CATListOfInt & oContinuities) = 0;

     /**
      * Sets informations about the coupling between section of the lofted surface.
      *   @param iCoupling
      *      type of coupling between section. 
      *         @see CATGSMCouplingType
      */
   virtual HRESULT SetSectionCoupling( const CATGSMCouplingType iCoupling = CATGSMRatioCoupling
  ) = 0;


     /**
      * Gets informations about the coupling between section of the lofted surface.
      *   @param oCoupling
      *      type of coupling between section. 
      *          @see CATGSMCouplingType
      */
      virtual HRESULT GetSectionCoupling( int & oCoupling
       )= 0 ;

     /**
      * Sets informations about relimitation of the lofted surface.
      *   @param iRelimitation
      *      type of relimitation. 
      *         @see CATGSMLoftRelimitationType
      */
      virtual HRESULT SetRelimitation( const CATGSMLoftRelimitationType iRelimitation = CATGSMLoftRelimitOnLimitSections
     ) =0;

     /**
      * Gets informations about relimitation of the lofted surface.
      *   @param oRelimitation
      *      type of relimitation. 
      *         @see CATGSMLoftRelimitationType
      */
      virtual HRESULT GetRelimitation( int & oRelimitation
     ) =0;

     /**
      * Sets information about detection of canonical surfaces of the output surface.
      *   @param iDetection
      *     if canonical surfaces are detected and converted into plane or not and how;
      *     possible values are CATGSMNoDetection, CATGSMPlaneOnlyDetection and CATGSMCanonicalDetection.
      * @see CATGSMCanonicalSurfaceDetection
      */
      virtual HRESULT SetCanonicalDetection(const CATGSMCanonicalSurfaceDetection iDetection = CATGSMCanonicalDetection) =0;

     /**
      * Gets information about detection of canonical surfaces of the output surface.
      *   @param oDetection
      *     if canonical surfaces are detected and converted into plane or not and how;
      *     possible values are CATGSMNoDetection, CATGSMPlaneOnlyDetection and CATGSMCanonicalDetection.
      * @see CATGSMCanonicalSurfaceDetection
      */
      virtual HRESULT GetCanonicalDetection(CATGSMCanonicalSurfaceDetection & oDetection) =0;

     /**
      * Adds section to the lofted surface.
      *   @param iSection
      *     section to be added : curve or face.
      *   @param oCurveSection
      *     if iSection is a face, oCurveSection is the boundary of the face.
      *     oCurveSection is used as section curve.
      *     if Part design, the face is used to close the Loft.
      *   @param oClosingPoint
      *     if iSection is a closed curve, oClosingPoint is a new closing point
      *     of iSection.
      *     if iSection is a face, oClosingPoint is a new closing point the boundary
      *     of iSection.
      *   @param oPtDiag
      *     Closing Point diagnosis.
      *        @see CATGSMClosingPointCreationDiag
      *   @param iAddType
      *     type of adding : 
      *     CATGSMLoftAdd, iSection will be added at the end of 
      *     the section list.
      *     CATGSMLoftAddAfter, iSection will be added after iSectionRef.
      *     CATGSMLoftAddBefore, iSection will be added before iSectionRef.
      *        @see CATGSMLoftAddType
      *   @param iSectionRef
      *     section curve used as a reference for CATGSMLoftAddAfter and 
      *     CATGSMLoftAddBefore adding type
      */
      virtual HRESULT AddSection( const CATIMmiMechanicalFeature_var iSection
         , CATIMmiMechanicalFeature_var & oCurveSection
         , CATIMmiMechanicalFeature_var & oClosingPoint
         , CATGSMClosingPointCreationDiag & oPtDiag
         , const CATGSMLoftAddType iAddType = CATGSMLoftAdd
         , const CATIMmiMechanicalFeature_var iSectionRef = NULL_var
         ) = 0;
  
     /**
      * Modifies the curve of section from the lofted surface.
      *   @param iSection
      *      section curve to be replaced.
      *   @param iNewSection
      *      section will replace iSection, can be a curve or a face
      *   @param oCurveSection
      *     if iSection is a face, oCurveSection is the boundary of the face.
      *     oCurveSection is used as section curve.
      *     if Part design, the face is used to close the Loft.
      *   @param oClosingPoint
      *     if iSection is a closed curve, oClosingPoint is a new closing point
      *     of iSection.
      *     if iSection is a face, oClosingPoint is a new closing point the boundary
      *     of iSection.
      */
      virtual HRESULT ModifySectionCurve(const CATIMmiMechanicalFeature_var iSection
         , const CATIMmiMechanicalFeature_var iNewSection
         , CATIMmiMechanicalFeature_var & oCurveSection
         , CATIMmiMechanicalFeature_var & oClosingPoint
         , CATGSMClosingPointCreationDiag & oPtDiag
         ) = 0;
  
     /**
      * Gets if the support is a computed support surface to the start section or end section 
      *   from the lofted surface.
      * The section must have been set as a face. 
      *   @param oStartFace
      *      start face used to close the loft.  
      *      NULL_var, if there is no start face.
      *   @param oEndFace
      *      end face used to close the loft.  
      *      NULL_var, if there is no end face.
      */
      virtual HRESULT GetFacesForClosing(CATIMmiMechanicalFeature_var & oStartFace
         , CATIMmiMechanicalFeature_var & oEndFace
         ) = 0;

	  
     /**
      * Sets face for closing the lofted surface.
      *   @param iSection 
      *       section curve.
	  *   @param iFace
      *      End face used to close the loft.      
      */
      virtual HRESULT SetFaceForClosing(const CATIMmiMechanicalFeature_var iSection
         , const CATIMmiMechanicalFeature_var iFace
         ) = 0;


     /**
      * Removes face used to close the lofted surface. 
      *   @param iSection 
      *       section curve.
      */
      virtual HRESULT RemoveFaceForClosing(const CATIMmiMechanicalFeature_var iSection
         ) = 0;

     // Part Design Loft
     // -----------------------------------------------------------
     /**
      * Sets boolean operation for closed lofted surface.
      * TO BE USED ONLY for Part Loft (closed loft)
      *   @param iOperation
      *      type of operation.
      *         @see CATGSMLoftBooleanOp
      */
      virtual HRESULT SetBooleanOperation( const CATGSMLoftBooleanOp iOperation = CATGSMLoftBooleanUnion
  ) = 0;

     /**
      * Gets boolean operation for closed lofted surface.
      * TO BE USED ONLY for Part Loft (closed loft)
      *   @param oOperation
      *      type of operation.
      *         @see CATGSMLoftBooleanOp
      */
      virtual HRESULT GetBooleanOperation( int & oOperation 
         ) = 0;

   /**
    * Gets information whether a deviation 
    * is allowed or not during lofting operation in order to smooth it.
    *   @param isSmoothDeviationActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
      virtual HRESULT GetSmoothDeviationActivity(CATBoolean & isSmoothDeviationActivity) =0;

   /**
    * Sets information whether a deviation 
    * is allowed or not during lofting operation in order to smooth it.
    *   @param isSmoothDeviationActivity
    *      TRUE or FALSE.
    */
      virtual HRESULT SetSmoothDeviationActivity(const CATBoolean isSmoothDeviationActivity) =0;

   /**
    * Gets deviation value (length) 
    * allowed during lofting operation in order to smooth it.
    *   @param oSmoothDeviation
    *      Numerical value.
    */
      virtual HRESULT GetSmoothDeviation(double & oSmoothDeviation) =0;

   /**
    * Gets deviation value (length) 
    * allowed during lofting operation in order to smooth it.
    *   @param ohSmoothDeviationCkeParm
    *      Length literal feature.
    */
      virtual HRESULT GetSmoothDeviation(CATICkeParm_var & ohSmoothDeviationCkeParm) =0;

   /**
    * Sets deviation value (length) 
    * allowed during lofting operation in order to smooth it.
    *   @param ihSmoothDeviationCkeParm
    *      Length literal feature.
    */
      virtual HRESULT SetSmoothDeviation(const CATICkeParm_var & ihSmoothDeviationCkeParm) =0;

   /**
    * Sets deviation value (length) 
    * allowed during lofting operation in order to smooth it.
    *   @param iSmoothDeviation
    *      Numerical value.
    */
      virtual HRESULT SetSmoothDeviation(const double iSmoothDeviation) =0;

   /**
    * Gets information whether a angular threshold 
    * is allowed or not during lofting operation in order to smooth it.
    *   @param isSmoothAngleThresholdActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
     virtual HRESULT GetSmoothAngleThresholdActivity(CATBoolean & isSmoothAngleThresholdActivity) =0;
   
   /**
    * Sets information whether a angular threshold 
    * is allowed or not during lofting operation in order to smooth it.
    *   @param isSmoothAngleThresholdActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
     virtual HRESULT SetSmoothAngleThresholdActivity(const CATBoolean isSmoothAngleThresholdActivity) =0;

   /**
    * Gets angular threshold value (angle) 
    * allowed during lofting operation in order to smooth it.
    *   @param oSmoothAngleThreshold
    *      Numerical value.
    */
      virtual HRESULT GetSmoothAngleThreshold(double & oSmoothAngleThreshold) =0;

   /**
    * Gets angular threshold value (angle) 
    * allowed during lofting operation in order to smooth it.
    *   @param ohSmoothAngleThresholdCkeParm
    *      Length literal feature.
    */
      virtual HRESULT GetSmoothAngleThreshold(CATICkeParm_var & ohSmoothAngleThresholdCkeParm) =0;

   /**
    * Sets angular threshold value (angle) 
    * allowed during lofting operation in order to smooth it.
    *   @param ohSmoothAngleThresholdCkeParm
    *      Length literal feature.
    */
      virtual HRESULT SetSmoothAngleThreshold(const CATICkeParm_var & ihSmoothAngleThresholdCkeParm) =0;

   /**
    * Sets angular threshold value (angle) 
    * allowed during lofting operation in order to smooth it.
    *   @param iSmoothAngleThreshold
    *      Numerical value.
    */
      virtual HRESULT SetSmoothAngleThreshold(const double iSmoothAngleThreshold) =0;

   /**
    * Gets context type for existing feature.
    *   @param oContextType
    *      CATGSMSurfaceCtxt if the result is surface, CATGSMVolumeCtxt if it is volume
    *   @see CATGSMFeatureContextType
    */
   virtual    HRESULT GetContext (CATGSMFeatureContextType & oContextType) = 0;
  

  /**
    * Sets context type to generate a Surface or Volume.
    *   @param iContextType
    *      CATGSMSurfaceCtxt to generate a surface, CATGSMVolumeCtxt (requires GSO License) to generate a volume
    *   @see CATGSMFeatureContextType 
    */
   virtual    HRESULT SetContext (const CATGSMFeatureContextType iContextType) = 0;


  /**
   * Sets the optional area law for multi-sections element definition. The input law must be a length law:
   * the applied area law is the square of the input law multiplied by PI.
   * Use NULL_var input to remove the law.
   *   @param iLaw
   *      Input length law for area definition
   *      @see CATICkeLaw
   */
   virtual HRESULT SetAreaLaw(const CATICkeLaw_var & iLaw) = 0;

  /**
   * Gets the optional area law for multi-sections element definition. The output law is a length law.
   *   @param oLaw
   *      Specified length law for area definition
   *      @see CATICkeLaw
   */
   virtual HRESULT GetAreaLaw(CATICkeLaw_var & oLaw) = 0;

  /**
   * Sets the tolerance applied to area law, if specified. As area law is specified through a length law,
   * tolerance is also a length.
   *   @param iLaw
   *      Input area law tolerance value in mm
   *      @see CATICkeLaw
   */
   virtual HRESULT SetAreaLawTolerance(double iLawTolerance) = 0;

  /**
   * Gets the tolerance applied to area law.
   *   @param oLaw
   *      Specified area law tolerance value in mm
   *      @see CATICkeLaw
   */
   virtual HRESULT GetAreaLawTolerance(double & oLawTolerance) = 0;

  /**
   * Gets the tolerance applied to area law.
   *   @param oLaw
   *      Specified area law tolerance parameter
   *      @see CATICkeLaw
   */
   virtual HRESULT GetAreaLawTolerance(CATICkeParm_var & oLawTolerance) = 0;

   /**
   * Sets a support surface to a section from the lofted surface.
   *   @param iSections
   *     Section curve of the loft to which the support will be added.
   *   @param iSupportSection
   *     Support surface to be added, the curve must be layed on the surface.
   *   @param iContinuity
   *      Continuity between the support and the loft (accepted values are CATGSMContinuity_Tangency or CATGSMContinuity_Curvature).
   */
   virtual HRESULT SetSectionSupport(const CATIMmiMechanicalFeature_var &iSection,
	   const CATIMmiMechanicalFeature_var &iSupportSection,
	   const enum CATGSMContinuity &iContinuity) = 0;  

   /**
   * Removes a support surface of a section from the lofted surface.
   *   @param iSection
   *      Section curve of the loft to which the surface will be removed.
   *   @param iContinuity
   *      Continuity between the support and the loft (accepted values are CATGSMContinuity_Tangency or CATGSMContinuity_Curvature).
   */
   virtual HRESULT RemoveSectionSupport(const CATIMmiMechanicalFeature_var &iSection) = 0;

   /**
   * Sets a support surface to a guide from the lofted surface.
   *   @param iGuide
   *     Guide curve of the loft to which the support will be added.
   *   @param iSupportGuide
   *     Support surface to be added, the curve must be layed on the surface.
   *   @param iContinuity
   *      Continuity between the support and the loft (accepted values are CATGSMContinuity_Tangency or CATGSMContinuity_Curvature).
   */
   virtual HRESULT SetGuideSupport(const CATIMmiMechanicalFeature_var &iGuide,
	   const CATIMmiMechanicalFeature_var &iSupportGuide,
	   const enum CATGSMContinuity &iContinuity) = 0;  

   /**
   * Removes a support surface of a guide from the lofted surface.
   *   @param iGuide
   *      Guide curve of the loft to which the surface will be removed.
   *   @param iContinuity
   *      Continuity between the support and the loft (accepted values are CATGSMContinuity_Tangency or CATGSMContinuity_Curvature).
   */
   virtual HRESULT RemoveGuideSupport(const CATIMmiMechanicalFeature_var &iGuide) = 0;
};

CATDeclareHandler (CATIGSMUseLoft, CATBaseUnknown);
#endif // CATIGSMUseLoft_H
