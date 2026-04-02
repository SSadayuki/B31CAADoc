#ifndef CATIMSHTrapSelector_h
#define CATIMSHTrapSelector_h


// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1 
 * @CAA2Usage U5 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATSO;
class CATMSHSelectionTrap;

extern ExportedByMSHModel IID IID_CATIMSHTrapSelector;

/**
 * Interface to be used to build a list of selected objects from a trap contour.
 * @see CATMSHSelectionTrap.
 */

class ExportedByMSHModel CATIMSHTrapSelector: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Build the list of selected objects. 
   * @param iTrap
   *   Definition of the trap contour.
   * @param iData
   *   An object that can be useful for the selection.
	 * @return
	 *   The list of selected objects.
   */  
  virtual CATSO * BuildSelection ( CATMSHSelectionTrap * iTrap , void * iData ) = 0; 
};

CATDeclareHandler ( CATIMSHTrapSelector , CATBaseUnknown );

#endif
