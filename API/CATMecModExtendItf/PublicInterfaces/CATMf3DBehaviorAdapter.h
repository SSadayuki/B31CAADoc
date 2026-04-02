// COPYRIGHT Dassault Systemes 2008
//===================================================================

#ifndef CATMf3DBehaviorAdapter_H
#define CATMf3DBehaviorAdapter_H

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */ 


#include "CATMecModExtendItf.h"
#include "CATIMf3DBehavior.h"

//-----------------------------------------------------------------------

/**
 * Adaptor class for CATIMf3DBehavior.
 * <b>Role:</b> This class enables you to implement the 
 *  @href CATIMf3DBehavior interface. Your implementation must derive 
 * from this class. 
 */
class ExportedByCATMecModExtendItf CATMf3DBehaviorAdapter: public CATIMf3DBehavior
{
  public:
    /**
    * Constructor.
    */
    CATMf3DBehaviorAdapter();
    /**
    * Destructor.
    */
    virtual ~CATMf3DBehaviorAdapter();
    /**
    * Indicates whether a feature is a solid feature.
    * @return
    *   <b>Legal values:</b>
    *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a solid feature.</dd>
    *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a solid feature.</dd></dl>
    */
    virtual HRESULT IsASolid() const; 

    /**
    * Indicates whether a feature is a surface feature.
    * @return
    *   <b>Legal values:</b>
    *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a surface feature.</dd>
    *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a surface feature.</dd></dl>
    */
    virtual HRESULT IsAShape() const; 	

    /** 
    * Indicates whether a feature is a datum feature.
    * <br><b>Role:</b> Determines whether datum property (see above) applies to the feature.
    * There no link between this property and the fact that the feature is a solid
    * feature or a surface feature.
    * @return
    *   <b>Legal values:</b>
    *   <dl><dt><tt>S_OK</tt></dt><dd>The feature is a datum feature.</dd>
    *   <dt><tt>E_FAIL</tt></dt><dd>The feature is not a datum feature.</dd></dl>
    */
    virtual HRESULT IsADatum() const; 

    /**
    * Defines if the geometrical feature is a volume or not.
    * <br>This method is empty (not implemented), and returns <tt>E_FAIL</tt>. In your
    * implementation, if your feature is a volume, the method returns <tt>S_OK</tt>, otherwise
    * <tt>E_FAIL</tt>.
    */
    virtual HRESULT IsAVolume () const ;

  private:
    CATMf3DBehaviorAdapter (CATMf3DBehaviorAdapter &);
    CATMf3DBehaviorAdapter& operator=(CATMf3DBehaviorAdapter&);

};

#endif
