
#ifndef CATIGSMUseAxisLine_H
#define CATIGSMUseAxisLine_H

// COPYRIGHT Dassault Systemes 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATIGSMUseDirection.h"
#include "CATGSMAxisLineDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseAxisLine;
#else
extern "C" const IID IID_CATIGSMUseAxisLine;
#endif

/**
 * Interface to Axis Line feature. 
 * <b>Role</b>: Allows you to acess data of Axis Line feature created by using 
 * an element, an direction and type based on input element selected.
 * @see CATIGSMUseFactory#CreateAxisLine
 */

class ExportedByCATGSMUseItf CATIGSMUseAxisLine: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
    * Gets the element from which axis is computed.
    *   @param ohElement
    *      Element used for computation       
    */
   virtual HRESULT GetElement(CATIMmiMechanicalFeature_var& ohElement) = 0;

   /**
    * Sets the element for computation of axis. 
    *   @param ihElement
    *      Element used for computation
    */
   virtual HRESULT SetElement(const CATIMmiMechanicalFeature_var ihElement) = 0;
   

   /**
    * Gets the reference direction used in computation of axis.
    * <br> (Available  only if the element selected is circle,arc or sphere). 
    * <br>Note: If the element is circle or arc Axis may be normal to reference direction or aligned 
    * with reference direction.
    *   @param ohDir
    *      direction specified
    */
   virtual HRESULT  GetDirection (CATIGSMUseDirection_var & ohDir) = 0;


   /**
    * Used to define the axis direction.
    *<br>(Aviailable only if the element selcted is circle or arc).
    *<br>Note: Axis may be normal to reference direction or aligned with reference direction
    *   @param ihDir
    *      direction specified
    */
   virtual HRESULT  SetDirection (const CATIGSMUseDirection_var & ihDir) = 0;

   
   /**
    * Gets AxisLine Type.
    *<br>(Available only if the element selected is circle, arc, ellipse, partial ellipse or oblong)
    *   @param oAxisType
    *      Axis Type specified
    * enum CATGSMAxisLineType {CATGSMAxisLineType_None = 0,
                               CATGSMAxisLineType_MajorAxis = 1,
                               CATGSMAxisLineType_MinorAxis  = 2,
                               CATGSMAxisLineType_NormalAxis = 3 };

  
    */
   virtual HRESULT GetAxisLineType (enum CATGSMAxisLineType & oAxisType) = 0;
  

   /**
    * Sets AxisLine Type.
    *<br>(Available only if the element selected is circle, arc, ellipse, partial ellipse or oblong)
    *   @param iAxisType
    *      Axis Type specified
    * enum CATGSMAxisLineType {CATGSMAxisLineType_None = 0,
                               CATGSMAxisLineType_MajorAxis = 1,
                               CATGSMAxisLineType_MinorAxis  = 2,
                               CATGSMAxisLineType_NormalAxis = 3 };

  
    */
   virtual HRESULT SetAxisLineType (const enum CATGSMAxisLineType iAxisType) = 0;
};

CATDeclareHandler (CATIGSMUseAxisLine, CATBaseUnknown);
#endif
