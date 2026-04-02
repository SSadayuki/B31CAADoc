#ifndef CATIDftAnnotation_H
#define CATIDftAnnotation_H
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 2002
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//==============================================================================

#include "IUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATDraftingInterfaces.h"
#include "CATDftTextParameters.h"

// class CATIDftMarkupable;
class CATIDftAssociativePosition;
class CATIDftAssociativeOrientation;


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftAnnotation ;
#else
extern "C" const IID IID_CATIDftAnnotation;
#endif
//------------------------------------------------------------------

/**
* This interfaces handle position, orientation and associativity of Annotation object.
*/
class ExportedByDraftingItfCPP CATIDftAnnotation: public IUnknown
{
  
public:
  
  /**
  * Returns the anchor position of an annotation.
  * @param oPosition 
  */
  virtual HRESULT GetPosition (double oPosition [2]) = 0;
  
  /**
  * Set the anchor position of an annotation.
  * @param iPosition 
  *   New position of the annotation
  * @param AssocMode 
  *   Defines the behaviour of SetPosition if an associativity exists.<BR>
  *   By default, the associativity is overrided to match the new position.
  * @see DftAssociativityMode
  */
  virtual HRESULT SetPosition (const double iPosition [2], DftAssociativityMode AssocMode = Override) = 0;
  
  /**
  * Set the anchor position of an annotation.
  * @param iVecteur
  *   Translation vecteur.
  * @param AssocMode 
  *   Defines the behaviour of the move if an associativity exists.<BR>
  *   By default, the associativity is overrided to match the new position.
  * @see DftAssociativityMode
  */
  virtual HRESULT Move (const double iVecteur [2], DftAssociativityMode AssocMode = Override) = 0;
  
  /**
  * Returns the angle of an annotation.
  * @param oAngle
  * @param iComputeMode
  *   By default, give orientation in the reference axis.
  * @see DftOrientationReference
  */
  virtual HRESULT GetOrientation (double *oAngle,
                                  DftOrientationReference iComputeMode = DftOrientElement) = 0;
  
  /**
  * Set the angle of an annotation.
  * @param iAngle
  * Note : iAngle is based on the reference axis.
  */
  virtual HRESULT SetOrientation (const double iAngle) = 0;
  
  /**
  * Rotate the annotation around its anchor point.
  * @param iDeltaAngle
  */
  virtual HRESULT Rotate (const double iDeltaAngle) = 0;
  
  /** 
  * Returns the orientation reference of an AnnotationComponent.
  * @param oOrientReference
  * @see DftOrientationReference
  */
  virtual HRESULT GetOrientationReference(DftOrientationReference *oOrientReference) = 0;
  
  /** 
  * Set the orientation reference of an AnnotationComponent.
  * @param iOrientReference
  * @see DftOrientationReference
  */
  virtual HRESULT SetOrientationReference(const DftOrientationReference iOrientReference) = 0;
  
  /**
  * @nodoc
  * Returns the AssociativePosition of an annotation.
  * @param oAssocPos
  */
  virtual HRESULT GetAssociativePosition    (CATIDftAssociativePosition **oAssocPos) =0;
  /**
  * @nodoc
  * Set the AssociativePosition of an annotation.
  * @param iAssocPos
  */
  virtual HRESULT SetAssociativePosition    (const CATIDftAssociativePosition *iAssocPos) =0;
  
  /**
  * @nodoc
  * Returns the AssociativeOrientation associated to the annotation.
  */
  virtual HRESULT GetAssociativeOrientation (CATIDftAssociativeOrientation **oAssocOrient) =0;

  /**
  * @nodoc
  * Sets the AssociativeOrientation associated to the annotation.
  */
  virtual HRESULT SetAssociativeOrientation (CATIDftAssociativeOrientation *iAssocOrient) =0;
    
};

#endif
