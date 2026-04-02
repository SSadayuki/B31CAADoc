// COPYRIGHT Dassault Systemes 2003
//===================================================================

#ifndef CATMf3DBehavior2Adapter_H
#define CATMf3DBehavior2Adapter_H

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATMechanicalModeler.h"
#include "CATIMf3DBehavior2.h"

//-----------------------------------------------------------------------

/**
 * Adaptor class for CATIMf3DBehavior2.
 * <b>Role:</b> This class enables you to implement the 
 *  @href CATIMf3DBehavior2 interface. Your implementation must derive 
 * from this class. 
 */
class ExportedByCATMechanicalModeler CATMf3DBehavior2Adapter: public CATIMf3DBehavior2
{
  public:

     /**
     * Constructs an instance.
     */
     CATMf3DBehavior2Adapter();

     virtual ~CATMf3DBehavior2Adapter();

    /**
     * Defines if the geometrical feature is a volume or not.
     * <br>This method is empty (not implemented), and returns <tt>E_FAIL</tt>. In your
     * implementation, if your feature is a volume, the method returns <tt>S_OK</tt>, otherwise
     * <tt>E_FAIL</tt>.
     */
     virtual HRESULT IsAVolume () const ;


  private:
  CATMf3DBehavior2Adapter (CATMf3DBehavior2Adapter &);
  CATMf3DBehavior2Adapter& operator=(CATMf3DBehavior2Adapter&);

};

#endif
