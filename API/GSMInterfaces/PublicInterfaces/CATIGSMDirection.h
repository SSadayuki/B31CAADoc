/* -*-c++-*- */
#ifndef CATIGSMDirection_H
#define CATIGSMDirection_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMDirection;
#else
extern "C" const IID  IID_CATIGSMDirection;
#endif

/**
 * Direction for GSM feature.
 * <b>Role</b>: allows to manipulate direction 
 * Note: 
 *  GetDirectionType returns 
 * - 0 if the direction is specified by an element (a line or a plane; 
 *   in the case of a plane, the direction is the normal to the plane),
 * - 1 if the direction is specified by coordinates.  
 *
 * SetDirectionElement automatically sets the direction type 
 * to 0 (the direction is specified by an element). 
 *
 * SetCoordinates automatically sets the direction type 
 * to 1 (the direction is specified by coordinates). 
 * @see CATIGSMFactory#CreateDirection
 */
class ExportedByCATGitInterfaces CATIGSMDirection : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  /**
    * Gets direction type.
    *   @param iElem
    *      solid feature
    *   @return 
    *      type direction
    *  : 0 if the direction is specified by an element (a line or a plane; 
    *   in the case of a plane, the direction is the normal to the plane),
    *  : 1 if the direction is specified by coordinates.
    */ 

 virtual    int GetDirectionType () = 0;
  /**
    * Gets direction reference element.  
    *   @return 
    *      reference feature 
    */ 
 virtual    CATISpecObject_var GetDirectionElement () = 0;

  /**
    * Gets vector direction using literal parameters.   
    *   @param oLitX 
    *      X coordinate in a literal parameter 
    *   @param oLitY 
    *      Y coordinate in a literal parameter 
    *   @param oLitZ 
    *      Z coordinate in a literal parameter 
 *   @see CATICkeParm
    */ 
 virtual   HRESULT GetCoordinates (CATICkeParm_var& oLitX,
                                          CATICkeParm_var& oLitY, 
                                          CATICkeParm_var& oLitZ) = 0;
  /**
    * Gets vector direction. 
    *   @param oX 
    *      X coordinate 
    *   @param oY 
    *      Y coordinate 
    *   @param oZ 
    *      Z coordinate
    */ 
 virtual   HRESULT GetCoordinates (double & oX, double & oY, double & oZ) = 0;

  /**
    * Sets direction reference element.  
    *   @param iSpecElemDir 
    *      reference feature 
    */ 
 virtual   HRESULT SetDirectionElement(const CATISpecObject_var iSpecElemDir) = 0;

  /**
    * Sets vector direction using literal parameters.   
    *   @param iLitX 
    *      X coordinate in a literal parameter 
    *   @param iLitY 
    *      Y coordinate in a literal parameter 
    *   @param iLitZ 
    *      Z coordinate in a literal parameter 
 *   @see CATICkeParm
    */ 
 virtual   HRESULT SetCoordinates (const CATICkeParm_var iLitX,
                                          const CATICkeParm_var iLitY,
                                          const CATICkeParm_var iLitZ) = 0;
  /**
    * Sets vector direction. 
    *   @param iX 
    *      X coordinate 
    *   @param iY 
    *      Y coordinate 
    *   @param iZ 
    *      Z coordinate
    */ 
 virtual   HRESULT SetCoordinates(double iX,
      double iY,
      double iZ) = 0;
 
  /**
    * Queries if the direction is valid or not. 
    *   @return 
    *      direction exist (TRUE) or not (FALSE) 
    */ 
 virtual    CATBoolean IsDirectionSpecified() = 0;

  /**
    * Gets vector direction in local axis system. 
    *   @param oX 
    *      X coordinate 
    *   @param oY 
    *      Y coordinate 
    *   @param oZ 
    *      Z coordinate
    */ 
 virtual   HRESULT GetLocalCoordinates (double & oX, double & oY, double & oZ) = 0;

  /**
    * Sets vector direction in local axis system. 
    *   @param oX 
    *      X coordinate 
    *   @param oY 
    *      Y coordinate 
    *   @param oZ 
    *      Z coordinate
    */ 
 virtual   HRESULT SetLocalCoordinates (double oX, double oY, double oZ) = 0;

 /**
  * Gets the reference Axis. 
  * This data is not mandatory, if oRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param oRefAxis
  *     Reference axis (oRefAxis = NULL_var is allowed).
  */
 virtual HRESULT GetReferenceAxis(CATISpecObject_var& oRefAxis) = 0;

/**
  * Sets the reference Axis. 
  *    This data is not mandatory, if iRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param iRefAxis
  *     Reference Axis (iRefAxis = NULL_var is allowed).
  */
 virtual HRESULT SetReferenceAxis(const CATISpecObject_var  &iRefAxis) = 0;
};
CATDeclareHandler (CATIGSMDirection, CATBaseUnknown);
#endif // CATIGSMDirection_H
