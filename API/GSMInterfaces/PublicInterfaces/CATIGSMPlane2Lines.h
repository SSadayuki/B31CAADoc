/* -*-c++-*- */
#ifndef CATIGSMPlane2Lines_H
#define CATIGSMPlane2Lines_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlane2Lines;
#else
extern "C" const IID IID_CATIGSMPlane2Lines;
#endif
/**
 * Interface to plane feature defined by two lines.  
 * <b>Role</b>: Allows you to access data of the plane feature passing though two lines.
 * @see CATIGSMFactory#CreatePlane
 */
class ExportedByCATGitInterfaces CATIGSMPlane2Lines : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
      
      /**
 * Gets the first line.
        *   @param oFirstLine 
        *     first line
 */
 virtual HRESULT GetFirstLine(CATISpecObject_var& oFirstLine) = 0;

      /**
 * Sets the first line.
        *   @param iFirstLine 
        *     first line
 */
 virtual HRESULT SetFirstLine(const CATISpecObject_var iFirstLine) = 0;

      /**
 * Gets the second line.
        *   @param oSecondLine 
        *     second line
 */
 virtual HRESULT GetSecondLine(CATISpecObject_var& oSecondLine) = 0;

      /**
 * Sets the second line.
        *   @param iFirstLine 
        *     second line
 */
 virtual HRESULT SetSecondLine(const CATISpecObject_var iSecondLine) = 0;

	   /**
 * Force the two lines to be on the same plane.
        *   @param iCoplanarLines
        *     if iCoplanarLines=1, both lines have to be on the same plane.
        *     if iCoplanarLines=0, both lines can be non coplanar.
 */
 virtual HRESULT SetForbidNonCoplanarLines(const int iCoplanarLines) = 0;

	   /**
 * Get the status, about forcing the two lines to be on the same plane.
 */
 virtual int GetForbidNonCoplanarLines() = 0;
};
CATDeclareHandler (CATIGSMPlane2Lines, CATBaseUnknown);
#endif
