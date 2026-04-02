/* -*-c++-*- */
#ifndef CATIGSMSpine_H
#define CATIGSMSpine_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATGSMLoftDef.h"
#include "CATGSMOrientation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMSpine;
#else
extern "C" const IID IID_CATIGSMSpine;
#endif

/**
 * Interface to spine curve feature.
 * <b>Role</b>: Allows you to access data of the spine curve feature 
 * @see CATIGSMFactory#CreateSpine
 */

class ExportedByCATGitInterfaces CATIGSMSpine : public CATBaseUnknown
{
   CATDeclareInterface;

   public: 
   
     /**
      * Adds the section or plane to the spine curve.
      *   @param iSection
      *     The section curve or plane to be added
      *   @param iAddType
      *     The type of adding : 
      *     CATGSMLoftAdd, iSection will be added at the end of 
      *     the section list.
      *     CATGSMLoftAddAfter, iSection will be added after iSectionRef.
      *     CATGSMLoftAddBefore, iSection will be added before iSectionRef.
      *        @see CATGSMLoftAddType
      *   @param iSectionRef
      *     The section curve used as a reference for CATGSMLoftAddAfter and 
      *     CATGSMLoftAddBefore adding type
      */
      virtual HRESULT AddSection( const CATISpecObject_var iSection
  , const CATGSMLoftAddType iAddType = CATGSMLoftAdd
  , const CATISpecObject_var iSectionRef = NULL_var
  ) = 0;
  
     /**
      * Removes the section or plane from the spine curve.
      *   @param iSection
      *      The section curve or plane to be removed.
      */
      virtual HRESULT RemoveSection( const CATISpecObject_var iSection
  ) = 0;
  
     /**
      * Modifies the section curve or plane of the spine curve.
      *   @param iSection
      *      The section curve or plane to be replaced.
      *   @param iNewSection
      *      The section curve or plane, will replace iSection.
      */
      virtual HRESULT ModifySectionCurve(const CATISpecObject_var iSection
  , const CATISpecObject_var iNewSection
  ) = 0;
  
  
     /**
      * Gets informations about the sections of the spine curve.
      *   @param oSections
      *      The list of the section curves.
      *   @param oStartSectionTangent
      *      The tangent surface at start section.
      *   @param oEndSectionTangent
      *      The tangent surface at end section.
      */
      virtual HRESULT GetAllSections( CATLISTV(CATISpecObject_var) & oSections
  , CATISpecObject_var & oStartSectionTangent
  , CATISpecObject_var & oEndSectionTangent
  )= 0;
  
     /**
      * Adds guide to the spine curve.
      *   @param iGuide
      *     The guide curve to be added
      *   @param iAddType
      *     The type of adding : 
      *     CATGSMLoftAdd, iSection will be added at the end of the guide list.
      *     CATGSMLoftAddAfter, iGuide will be added after iGuideRef.
      *     CATGSMLoftAddBefore, iGuide will be added before iGuideRef.
      *   @param iGuideRef
      *     The guide curve used as a reference for CATGSMLoftAddAfter and 
      *     CATGSMLoftAddBefore adding type
      *   @see CATGSMLoftAddType
      */
      virtual HRESULT AddGuide( const CATISpecObject_var iGuide
  , const CATGSMLoftAddType iAddType = CATGSMLoftAdd
  , const CATISpecObject_var iGuideRef = NULL_var
  ) = 0;
  
     /**
      * Modifies the curve of a guide from the spine curve.
      *   @param iGuide
      *      The guide curve to be replaced.
      *   @param iNewGuide
      *      The guide curve, will replace iGuide.
      */
      virtual HRESULT ModifyGuideCurve( const CATISpecObject_var iGuide
  ,  const CATISpecObject_var iNewGuide
  ) = 0;  
  
     /**
      * Removes guide from the spine curve.
      *   @param iGuide
      *      The guide curve to be removed.
      */
      virtual HRESULT RemoveGuide( const CATISpecObject_var iGuide
  ) = 0;
  
     /**
      * Gets  informations about the guides of the spine curve.
      *   @param oGuides
      *      The list of the guides curves.
      */
      virtual HRESULT GetAllGuides( CATLISTV(CATISpecObject_var) & oGuides
  ) = 0;

  
     /**
      * Sets the start point of the spine curve.
      *   @param iPoint
      *      The point to be added
      *      if no iPoint is provided, remove the start point.
      */
      virtual HRESULT SetStartPoint( const CATISpecObject_var iPoint = NULL_var ) = 0;  

     /**
      * Gets the start point to the spine curve.
      *   @param oPoint
      *      The point used as a start point
      */
      virtual HRESULT GetStartPoint( CATISpecObject_var & oPoint ) = 0;

	  
     /**
      * Sets the orientation. 
      *   @param iOrientation
      *      Orientation by reference with the normal to the first section/plane
      */
      virtual HRESULT SetOrientation(const enum CATGSMOrientation iOrientation) = 0;
     /**
      * Gets the orientation.
      *   @param oOrientation
      *      Orientation by reference with the normal to the first section/plane
      */
      virtual HRESULT GetOrientation(enum CATGSMOrientation & oOrientation) = 0;

};

CATDeclareHandler (CATIGSMSpine, CATBaseUnknown);
#endif // CATIGSMSpine_H
